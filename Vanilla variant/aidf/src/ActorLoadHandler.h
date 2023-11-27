#pragma once


typedef std::vector<RE::Actor*> ActorList;

class ActorLoadHandler : 
    public RE::BSTEventSink<RE::TESObjectLoadedEvent> {
    
public:
    const uint32_t COMPANION_FACTION_FORMID = 0x00023C01;
    ActorList& companions;

    ActorLoadHandler (ActorList _companions) : companions(_companions) {}

    [[nodiscard]] static ActorLoadHandler* GetSingleton(ActorList& _companions)
    {
        static ActorLoadHandler singleton(_companions);
        return std::addressof(singleton);
    }

    RE::BSEventNotifyControl ProcessEvent(
        const RE::TESObjectLoadedEvent& a_event,
        RE::BSTEventSource<RE::TESObjectLoadedEvent>*) override
    {
        companions = {};
        RE::TESFaction* companionFaction = RE::TESForm::GetFormByID<RE::TESFaction>(COMPANION_FACTION_FORMID);
        
        while (auto maybeActor = RE::TESForm::GetFormByID<RE::Actor>(a_event.formId))
        {
            if (maybeActor && maybeActor->IsInFaction(companionFaction))
            {
                companions.push_back(maybeActor);
                logger::info("Companion loaded: {}", "");
            }
        }



        return RE::BSEventNotifyControl::kContinue;
    }


};