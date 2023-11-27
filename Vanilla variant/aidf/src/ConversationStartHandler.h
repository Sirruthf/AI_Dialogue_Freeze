#pragma once


class ConversationStartHandler : 
    public RE::BSTEventSink<RE::MenuOpenCloseEvent> {
    
public:
    ActorList& companions;

    ConversationStartHandler(ActorList _companions) : companions(_companions) {}

    [[nodiscard]] static ConversationStartHandler* GetSingleton(ActorList& _companions)
    {
        static ConversationStartHandler singleton(_companions);
        return std::addressof(singleton);
    }

    RE::BSEventNotifyControl ProcessEvent(
        const RE::MenuOpenCloseEvent& a_event,
        RE::BSTEventSource<RE::MenuOpenCloseEvent>*) override
    {
        static RE::BSFixedString dialogueMenu("DialogueMenu");

        if (a_event.menuName == dialogueMenu) {
            logger::info("Dialogue; companion amount: {}", companions.size());
        }

        return RE::BSEventNotifyControl::kContinue;
    }


};