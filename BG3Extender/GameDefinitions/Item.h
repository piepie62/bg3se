#pragma once

#include <GameDefinitions/Base/Base.h>
#include <GameDefinitions/GameState.h>

BEGIN_NS(esv)

struct Item
{
	void* VMT;
	void* VMT2;
	EntityHandle field_10;
	ItemFlags Flags;
	ecs::EntityRef MyHandle;
	FixedString Level;
	FixedString ItemType;
	Array<UserId> UpdatePeerIds;
	ItemTemplate* Template;
	ItemTemplate* OriginalTemplate;
	void* ItemMachine;
	void* PlanManager;
	void* VariableManager;
	StatusMachine* StatusManager;
	stats::Object* StatsObject;
	uint64_t field_58;
	uint64_t field_60;
	EntityHandle field_68;
	FixedString field_70;
	FixedString Stats;
	FixedString PreviousLevel;
	int32_t TreasureLevel;
	int32_t Amount;
	ItemFlags2 Flags2;
};

struct ItemComponent : public BaseComponent
{
	static constexpr ExtComponentType ComponentType = ExtComponentType::ServerItem;
	static constexpr auto EngineClass = "esv::Item";

	esv::Item* Item;
};

END_NS()
