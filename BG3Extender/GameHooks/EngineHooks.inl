/*HOOK_DEFN(esv__Status__GetEnterChanceHook, esv__Status__GetEnterChance, esv::Status::GetEnterChanceProc, WrappableFunction)
HOOK_DEFN(esv__StatusHit__Enter, esv__StatusHit__Enter, esv::Status::EnterProc, PreHookableFunction)
HOOK_DEFN(esv__StatusHit__Setup, esv__StatusHit__Setup, esv::StatusHit::SetupProc, PreHookableFunction)
HOOK_DEFN(esv__StatusHeal__Enter, esv__StatusHeal__Enter, esv::Status::EnterProc, PreHookableFunction)
HOOK_DEFN(esv__StatusMachine__ApplyStatus, esv__StatusMachine__ApplyStatus, esv::StatusMachine::ApplyStatusProc, WrappableFunction)

HOOK_DEFN(esv__ProjectileHelpers__ShootProjectile, esv__ProjectileHelpers__ShootProjectile, esv::ProjectileHelpers__ShootProjectile, WrappableFunction)
HOOK_DEFN(esv__Projectile__Explode, esv__Projectile__Explode, esv::Projectile::ExplodeProc, PreHookableFunction)
HOOK_DEFN(esv__ActionMachine__SetState, esv__ActionMachine__SetState, esv::ActionMachine::SetStateProc, HookableFunction)
HOOK_DEFN(esv__ActionMachine__ResetState, esv__ActionMachine__ResetState, esv::ActionMachine::ResetStateProc, PreHookableFunction)

HOOK_DEFN(RPGStats__ParseProperties, RPGStats__ParseProperties, RPGStats::ParsePropertiesProc, WrappableFunction)
HOOK_DEFN(SkillPrototype__FormatDescriptionParam, SkillPrototype__FormatDescriptionParam, SkillPrototype::FormatDescriptionParamProc, WrappableFunction)
HOOK_DEFN(SkillPrototype__GetSkillDamage, SkillPrototype__GetSkillDamage, SkillPrototype::GetSkillDamageProc, WrappableFunction)
HOOK_DEFN(SkillPrototype__GetAttackAPCost, SkillPrototype__GetAttackAPCost, SkillPrototype::GetAttackAPCostProc, WrappableFunction)
HOOK_DEFN(StatusPrototype__FormatDescriptionParam, StatusPrototype__FormatDescriptionParam, StatusPrototype::FormatDescriptionParamProc, WrappableFunction)
HOOK_DEFN(esv__ExecutePropertyDataOnGroundHit, esv__ExecutePropertyDataOnGroundHit, esv::ExecutePropertyDataOnGroundHitProc, PostHookableFunction)
HOOK_DEFN(esv__ExecutePropertyDataOnPositionOnly, esv__ExecutePropertyDataOnPositionOnly, esv::ExecutePropertyDataOnPositionOnlyProc, PostHookableFunction)
HOOK_DEFN(esv__ExecuteCharacterSetExtraProperties, esv__ExecuteCharacterSetExtraProperties, esv::ExecuteCharacterSetExtraPropertiesProc, PostHookableFunction)


HOOK_DEFN(esv__TurnManager__UpdateTurnOrder, esv__TurnManager__UpdateTurnOrder, esv::TurnManager::UpdateTurnOrderProc, PostHookableFunction)

HOOK_DEFN(UIObjectManager__CreateUIObject, UIObjectManager__CreateUIObject, UIObjectManager::CreateUIObjectProc, PostHookableFunction)

HOOK_DEFN(esv__Character_Hit, esv__Character__Hit, esv::Character::HitProc, WrappableFunction)
HOOK_DEFN(esv__Character_ApplyDamageHook, esv__Character__ApplyDamage, esv::Character::ApplyDamageProc, WrappableFunction)
HOOK_DEFN(CDivinityStats_Character__HitInternal, CDivinityStats_Character__HitInternal, CDivinityStats_Character::HitInternalProc, WrappableFunction)

HOOK_DEFN(esv__ItemHelpers__GenerateTreasureItem, esv__ItemHelpers__GenerateTreasureItem, esv::ItemHelpers__GenerateTreasureItem, WrappableFunction)
HOOK_DEFN(esv__CombineManager__ExecuteCombination, esv__CombineManager__ExecuteCombination, esv::CombineManager::ExecuteCombinationProc, WrappableFunction)
HOOK_DEFN(esv__LoadProtocol__HandleModuleLoaded, esv__LoadProtocol__HandleModuleLoaded, esv::LoadProtocol::HandleModuleLoadedProc, WrappableFunction)
HOOK_DEFN(Module__Hash, Module__Hash, Module::HashProc, WrappableFunction)
HOOK_DEFN(App__OnInputEvent, App__OnInputEvent, App::VMT::OnInputEventProc, PreHookableFunction)
*/
HOOK_DEFN(RPGStats__Load, RPGStats__Load, stats::RPGStats::LoadProc)
HOOK_DEFN(RPGStats__PreParseDataFolder, RPGStats__PreParseDataFolder, stats::RPGStats::ParseStructureFolderProc)

HOOK_DEFN(FileReader__ctor, ls__FileReader__ctor, FileReader::CtorProc)
HOOK_DEFN(Kernel_FindFirstFileW, Kernel_FindFirstFileW, FindFirstFileWProc)
HOOK_DEFN(Kernel_FindNextFileW, Kernel_FindNextFileW, FindNextFileWProc)
HOOK_DEFN(Kernel_FindClose, Kernel_FindClose, FindCloseProc)
HOOK_DEFN(ls__VirtualTextureResource__Load, ls__VirtualTextureResource__Load, resource::VirtualTextureResource::LoadProc)
HOOK_DEFN(ls__VirtualTextureResource__Unload, ls__VirtualTextureResource__Unload, resource::VirtualTextureResource::UnloadProc)
HOOK_DEFN(ecs__EntityWorld__Update, ecs__EntityWorld__Update, ecs::EntityWorld::UpdateProc)
HOOK_DEFN(esv__OsirisVariableHelper__SavegameVisit, esv__OsirisVariableHelper__SavegameVisit, esv::OsirisVariableHelper__SavegameVisitProc)
HOOK_DEFN(stats__DealDamageFunctor__ApplyDamage, stats__DealDamageFunctor__ApplyDamage, stats::DealDamageFunctor::ApplyDamageProc)
HOOK_DEFN(esv__StatsSystem__ThrowDamageEvent, esv__StatsSystem__ThrowDamageEvent, stats::StatsSystem_ThrowDamageEventProc)
HOOK_DEFN(stats__Functors__ExecuteType1, stats__Functors__ExecuteType1, stats::Functors::ExecuteType1Proc)
HOOK_DEFN(stats__Functors__ExecuteType2, stats__Functors__ExecuteType2, stats::Functors::ExecuteType2Proc)
HOOK_DEFN(stats__Functors__ExecuteType3, stats__Functors__ExecuteType3, stats::Functors::ExecuteType3Proc)
HOOK_DEFN(stats__Functors__ExecuteType4, stats__Functors__ExecuteType4, stats::Functors::ExecuteType4Proc)
HOOK_DEFN(stats__Functors__ExecuteType5, stats__Functors__ExecuteType5, stats::Functors::ExecuteType5Proc)
HOOK_DEFN(stats__Functors__ExecuteType6, stats__Functors__ExecuteType6, stats::Functors::ExecuteType6Proc)
HOOK_DEFN(stats__Functors__ExecuteType7, stats__Functors__ExecuteType7, stats::Functors::ExecuteType7Proc)
HOOK_DEFN(stats__Functors__ExecuteType8, stats__Functors__ExecuteType8, stats::Functors::ExecuteType8Proc)
