#pragma once


class ConversationStartHandler : 
    public RE::BSTEventSink<RE::MenuOpenCloseEvent> {
    
public:
    const uint32_t STR_FID = 0x000002C2;
    const uint32_t SPEED_MULT_FID = 0x000002DA;
    RE::ActorValueInfo* SpeedMult;
    aclist_t* slowedDown = new aclist_t();

    ConversationStartHandler()
    {
        SpeedMult = RE::TESForm::GetFormByID<RE::ActorValueInfo>(SPEED_MULT_FID);
    }

    [[nodiscard]] static ConversationStartHandler* GetSingleton()
    {
        static ConversationStartHandler singleton;
        return std::addressof(singleton);
    }

    void SlowDown ()
    {
        SpeedUp();

        ActorList::getCompanions(slowedDown); 

        for (auto a : *slowedDown)
        {
            if (auto collocutor = RE::PlayerCharacter::GetSingleton()->dialogueItemTarget.get())
            {
                if (!collocutor)
                {
                    logger::info("No collocutor found. Weird. Shutting down...");
                    return;
                }

                if (collocutor.get()->formID == a->formID)
                {
                    logger::info("Companion is talking to the player, skipping...");
                    return;
                }
            }

            a->SetActorValue(*SpeedMult, 0.01f);
        }
    }

    void SpeedUp ()
    {
        for (auto a : *slowedDown)
            a->SetActorValue(*SpeedMult, 1.0f);

        if (slowedDown->size() > 0)
            slowedDown->clear();
    }

    RE::BSEventNotifyControl ProcessEvent(
        const RE::MenuOpenCloseEvent& a_event,
        RE::BSTEventSource<RE::MenuOpenCloseEvent>*) override
    {
        static RE::BSFixedString dialogueMenu("DialogueMenu");

        if (a_event.menuName == dialogueMenu) {
            if (a_event.opening)
                SlowDown();
            else
                SpeedUp();
        }

        return RE::BSEventNotifyControl::kContinue;
    }
};