#pragma once

typedef std::vector<RE::Actor*> aclist_t;

class ActorList
{
public:
	static const uint32_t COMPANION_FACTION_FORMID = 0x00023C01;

	[[nodiscard]] static aclist_t* getActors()
	{
		aclist_t* actorList = new aclist_t{};

		for (const auto& actorHandle : RE::ProcessLists::GetSingleton()->highActorHandles) {
			const auto actor = actorHandle.get().get();
			if (actor)
				actorList->push_back(actor);
		}

		return actorList;
	}

	static aclist_t* getCompanions(aclist_t* list)
	{
		static RE::TESFaction* companionFaction = RE::TESForm::GetFormByID<RE::TESFaction>(COMPANION_FACTION_FORMID);

		aclist_t* actorList = getActors();

		for (const auto actor : *actorList)
			if (actor->IsInFaction(companionFaction))
				list->push_back(actor);

		return list;
	}

	[[nodiscard]] static ActorList* getSingleton()
	{
		static ActorList singleton;
		return std::addressof(singleton);
	}
};