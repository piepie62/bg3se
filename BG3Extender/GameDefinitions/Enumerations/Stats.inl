BEGIN_ENUM(FunctorContextType, uint32_t)
    EV(None, 0)
    EV(AttackTarget, 1)
    EV(AttackPosition, 2)
    EV(Move, 3)
    EV(Target, 4)
    EV(NearbyAttacked, 5)
    EV(NearbyAttacking, 6)
    EV(Equip, 7)
    EV(Source, 8)
    EV(Interrupt, 9)
END_ENUM()

BEGIN_ENUM_NS(stats, RestoreResourceAmountType, StatsRestoreResourceAmountType, uint8_t)
    EV(Lua, 0)
    EV(Percentage, 1)
    EV(None, 2)
END_ENUM_NS()

BEGIN_ENUM_NS(stats, SummonLifetimeType, StatsSummonLifetimeType, uint8_t)
    EV(Permanent, 0)
    EV(UntilLongRest, 1)
END_ENUM_NS()

BEGIN_ENUM_NS(stats, FunctorId, StatsFunctorId, uint8_t)
    E(CustomDescription)
    E(ApplyStatus)
    E(SurfaceChange)
    E(Resurrect)
    E(Sabotage)
    E(Summon)
    E(Force)
    E(Douse)
    E(SwapPlaces)
    E(Pickup)
    E(CreateSurface)
    E(CreateConeSurface)
    E(RemoveStatus)
    E(DealDamage)
    E(ExecuteWeaponFunctors)
    E(RegainHitPoints)
    E(TeleportSource)
    E(SetStatusDuration)
    E(UseSpell)
    E(UseActionResource)
    E(UseAttack)
    E(CreateExplosion)
    E(BreakConcentration)
    E(ApplyEquipmentStatus)
    E(RestoreResource)
    E(Spawn)
    E(Stabilize)
    E(Unlock)
    E(ResetCombatTurn)
    E(RemoveAuraByChildStatus)
    E(SummonInInventory)
    E(SpawnInInventory)
    E(RemoveUniqueStatus)
    E(DisarmWeapon)
    E(DisarmAndStealWeapon)
    E(SwitchDeathType)
    E(TriggerRandomCast)
    E(GainTemporaryHitPoints)
    E(FireProjectile)
    E(ShortRest)
    E(CreateZone)
    E(DoTeleport)
    E(RegainTemporaryHitPoints)
    E(RemoveStatusByLevel)
    E(SurfaceClearLayer)
    E(Unsummon)
    E(CreateWall)
    E(Counterspell)
    E(AdjustRoll)
    E(SpawnExtraProjectiles)
    E(Kill)
    E(TutorialEvent)
    E(Drop)
    E(ResetCooldowns)
    E(SetRoll)
    E(SetDamageResistance)
    E(SetReroll)
    E(SetAdvantage)
    E(SetDisadvantage)
    E(MaximizeRoll)
    E(CameraWait)
    E(ModifySpellCameraFocus)
    EV(Extender, 127)
END_ENUM_NS()

BEGIN_BITMASK(ConditionRollType, uint8_t)
    EV(DifficultyRoll, 1)
    EV(AttackRoll, 2)
    EV(SavingThrowRoll, 4)
    EV(SkillCheckRoll, 8)
    EV(AbilityCheckRoll, 0x10)
END_ENUM()

BEGIN_ENUM(SpellMetaConditionType, uint8_t)
    EV(None, 0)
    EV(Roll, 1)
    EV(OriginRoll, 2)
    EV(ThrowableRoll, 3)
    EV(AoE, 4)
    EV(Target, 5)
    EV(ThrowableTarget, 6)
    EV(Forking, 7)
    EV(Cycle, 8)
    EV(Requirements, 9)
    EV(OriginTarget, 10)
    EV(Highlight, 11)
END_ENUM()

BEGIN_ENUM(RollCritical, uint8_t)
    EV(None, 0)
    EV(Success, 1)
    EV(Fail, 2)
END_ENUM()

BEGIN_ENUM_NS(stats, UnsheathState, StatsUnsheathState, uint32_t)
    EV(Instrument, 0)
    EV(Melee, 1)
    EV(Ranged, 2)
    EV(Sheathed, 3)
END_ENUM_NS()

BEGIN_ENUM_NS(stats, RollType, StatsRollType, uint8_t)
    EV(None, 0)
    EV(Attack, 1)
    EV(MeleeWeaponAttack, 2)
    EV(RangedWeaponAttack, 3)
    EV(MeleeSpellAttack, 4)
    EV(RangedSpellAttack, 5)
    EV(MeleeUnarmedAttack, 6)
    EV(RangedUnarmedAttack, 7)
    EV(SkillCheck, 8)
    EV(SavingThrow, 9)
    EV(RawAbility, 10)
    EV(Damage, 11)
    EV(MeleeOffHandWeaponAttack, 12)
    EV(RangedOffHandWeaponAttack, 13)
    EV(DeathSavingThrow, 14)
    EV(MeleeWeaponDamage, 15)
    EV(RangedWeaponDamage, 16)
    EV(MeleeSpellDamage, 17)
    EV(RangedSpellDamage, 18)
    EV(MeleeUnarmedDamage, 19)
    EV(RangedUnarmedDamage, 20)
    EV(Sentinel, 21)
END_ENUM_NS()

BEGIN_ENUM_NS(stats, RollAdjustmentType, StatsRollAdjustmentType, uint8_t)
    EV(All, 0)
    EV(Distribute, 1)
END_ENUM_NS()

BEGIN_BITMASK_NS(stats, PropertyContext, StatsPropertyContext, uint64_t)
    EV(TARGET, 1)
    EV(AOE, 2)
    EV(CAST, 4)
    EV(EQUIP, 8)
    EV(GROUND, 0x10)
    EV(LEAVE_ATTACK_RANGE, 0x20)
    EV(ATTACKED_IN_MELEE_RANGE, 0x40)
    EV(ATTACKING_IN_MELEE_RANGE, 0x80)
    EV(PROFICIENCY_CHANGED, 0x100)
    EV(STATUS_APPLY, 0x200)
    EV(STATUS_APPLIED, 0x400)
    EV(STATUS_REMOVE, 0x800)
    EV(MOVED_DISTANCE, 0x1000)
    EV(AI_ONLY, 0x2000)
    EV(AI_IGNORE, 0x4000)
    EV(ATTACK, 0x8000)
    EV(ATTACKED, 0x10000)
    EV(DAMAGE, 0x20000)
    EV(HEAL, 0x40000)
    EV(STATUS_REMOVED, 0x80000)
    EV(OBSCURITY_CHANGED, 0x100000)
    EV(SHORT_REST, 0x200000)
    EV(DAMAGED, 0x400000)
    EV(HEALED, 0x800000)
    EV(ABILITY_CHECK, 0x1000000)
    EV(CAST_RESOLVED, 0x2000000)
    EV(LONG_REST, 0x4000000)
    EV(CREATE, 0x8000000)
    EV(PUSH, 0x10000000)
    EV(PUSHED, 0x20000000)
    EV(INVENTORY_CHANGED, 0x40000000)
    EV(ENTER_ATTACK_RANGE, 0x80000000)
    EV(PROJECTILE, 0x100000000)
    EV(COMBAT_ENDED, 0x200000000)
    EV(TURN, 0x400000000)
    EV(ACTION_RESOURCES_CHANGED, 0x800000000)
    EV(SURFACE_ENTER, 0x1000000000)
    EV(LOCKPICKING_SUCCEEDED, 0x2000000000)
    EV(INTERRUPT_USED, 0x4000000000)
    EV(DAMAGE_PREVENTED, 0x8000000000)
    EV(DAMAGED_PREVENTED, 0x10000000000)
    EV(ROUND, 0x20000000000)
    EV(COMBAT_STARTED, 0x40000000000)
    EV(CONSUMED, 0x80000000000)
END_ENUM_NS()

BEGIN_ENUM_NS(stats, ObserverType, StatsObserverType, uint8_t)
    EV(None, 0)
    EV(Observer, 0x1)
    EV(Target, 0x2)
    EV(Source, 0x3)
END_ENUM_NS()

BEGIN_BITMASK_NS(stats, FunctorFlags, StatsFunctorFlags, uint8_t)
    EV(Self, 0x1)
    EV(Owner, 0x2)
    EV(Swap, 0x4)
END_ENUM_NS()

BEGIN_BITMASK(StatAttributeFlags, uint64_t)
    EV(SlippingImmunity, 0x1)
    EV(Torch, 0x2)
    EV(Arrow, 0x4)
    EV(Unbreakable, 0x8)
    EV(Unrepairable, 0x10)
    EV(Unstorable, 0x20)
    EV(Grounded, 0x40)
    EV(Floating, 0x80)
    EV(EMPTY, 0x100)
    EV(IgnoreClouds, 0x200)
    EV(LootableWhenEquipped, 0x400)
    EV(PickpocketableWhenEquipped, 0x800)
    EV(LoseDurabilityOnCharacterHit, 0x1000)
    EV(ThrownImmunity, 0x2000)
    EV(InvisibilityImmunity, 0x4000)
    EV(InvulnerableAndInteractive, 0x8000)
    EV(Backstab, 0x10000)
    EV(BackstabImmunity, 0x20000)
    EV(EnableObscurityEvents, 0x40000)
    EV(ObscurityWithoutSneaking, 0x80000)
    EV(FloatingWhileMoving, 0x100000)
END_ENUM()

BEGIN_BITMASK(CombatParticipantFlags, uint32_t)
    EV(CanFight, 1)
    EV(CanJoinCombat, 2)
    EV(IsBoss, 4)
    EV(IsInspector, 0x10)
    EV(StayInAiHints, 0x200)
END_ENUM()

BEGIN_ENUM(RequirementType, uint32_t)
    EV(None, 0)
    EV(Level, 1)
    EV(Strength, 2)
    EV(Dexterity, 3)
    EV(Intelligence, 4)
    EV(Constitution, 5)
    EV(Wisdom, 6)
    EV(PainReflection, 8)
    EV(Ranged, 9)
    EV(Reflexes, 10)
    EV(Vitality, 11)
    EV(Sourcery, 12)
    EV(Telekinesis, 13)
    EV(Necromancy, 15)
    EV(Summoning, 16)
    EV(Sneaking, 17)
    EV(Pickpocket, 18)
    EV(Loremaster, 19)
    EV(Barter, 20)
    EV(Charm, 21)
    EV(Intimidate, 22)
    EV(Reason, 23)
    EV(Persuasion, 24)
    EV(Combat, 25)
    EV(TurnBased, 26)
    EV(Immobile, 27)
    EV(Tag, 28)
END_ENUM()

BEGIN_ENUM(StatsExpressionParamType2, uint8_t)
    EV(StatsExpressionVariableData, 0)
    EV(Ability, 1)
    EV(Skill, 2)
    EV(StatusGroup, 3)
    EV(STDString, 4)
END_ENUM()

BEGIN_ENUM(StatsExpressionParamType, uint8_t)
    EV(StatsExpressionType, 0)
    EV(Type1, 1)
    EV(StatsExpressionVariableDataType, 2)
    EV(StatsExpressionVariableDataModifier, 3)
    EV(RollDefinition, 4)
    EV(ResourceRollDefinition, 5)
    EV(StatsContextType, 6)
    EV(Int, 7)
    EV(Bool, 8)
END_ENUM()

BEGIN_ENUM(AbilityId, uint8_t)
    EV(None, 0)
    EV(Strength, 1)
    EV(Dexterity, 2)
    EV(Constitution, 3)
    EV(Intelligence, 4)
    EV(Wisdom, 5)
    EV(Charisma, 6)
    EV(Sentinel, 7)
END_ENUM()

BEGIN_ENUM(AttackRoll, uint8_t)
    EV(None, 0)
    EV(Strength, 1)
    EV(Dexterity, 2)
    EV(Constitution, 3)
    EV(Intelligence, 4)
    EV(Wisdom, 5)
    EV(Charisma, 6)
    EV(SpellCastingAbility, 7)
    EV(UnarmedAttackAbility, 8)
    EV(WeaponAttackAbility, 9)
END_ENUM()

BEGIN_ENUM(HealDirection, uint8_t)
    EV(Incoming, 0)
    EV(Outgoing, 1)
END_ENUM()

BEGIN_ENUM(SkillId, uint8_t)
    EV(Deception, 0)
    EV(Intimidation, 1)
    EV(Performance, 2)
    EV(Persuasion, 3)
    EV(Acrobatics, 4)
    EV(SleightOfHand, 5)
    EV(Stealth, 6)
    EV(Arcana, 7)
    EV(History, 8)
    EV(Investigation, 9)
    EV(Nature, 10)
    EV(Religion, 11)
    EV(Athletics, 12)
    EV(AnimalHandling, 13)
    EV(Insight, 14)
    EV(Medicine, 15)
    EV(Perception, 16)
    EV(Survival, 17)
    EV(Invalid, 18)
    EV(Sentinel, 19)
END_ENUM()

BEGIN_ENUM(SpellAttackType, uint8_t)
    EV(None, 0)
    EV(DirectHit, 1)
    EV(MeleeWeaponAttack, 2)
    EV(RangedWeaponAttack, 3)
    EV(MeleeOffHandWeaponAttack, 4)
    EV(RangedOffHandWeaponAttack, 5)
    EV(MeleeSpellAttack, 6)
    EV(RangedSpellAttack, 7)
    EV(MeleeUnarmedAttack, 8)
    EV(RangedUnarmedAttack, 9)
END_ENUM()

BEGIN_BITMASK(WeaponFlags, uint32_t)
    EV(Light, 1)
    EV(Ammunition, 2)
    EV(Finesse, 4)
    EV(Heavy, 8)
    EV(Loading, 0x10)
    EV(Range, 0x20)
    EV(Reach, 0x40)
    EV(Lance, 0x80)
    EV(Net, 0x100)
    EV(Thrown, 0x200)
    EV(Twohanded, 0x400)
    EV(Versatile, 0x800)
    EV(Melee, 0x1000)
    EV(Dippable, 0x2000)
    EV(Torch, 0x4000)
    EV(NoDualWield, 0x8000)
    EV(Magical, 0x10000)
    EV(NeedDualWieldingBoost, 0x20000)
    EV(NotSheathable, 0x40000)
    EV(Unstowable, 0x80000)
    EV(AddToHotbar, 0x100000)
END_ENUM()

BEGIN_ENUM(SpellSchoolId, uint8_t)
    EV(None, 0)
    EV(Abjuration, 1)
    EV(Conjuration, 2)
    EV(Divination, 3)
    EV(Enchantment, 4)
    EV(Evocation, 5)
    EV(Illusion, 6)
    EV(Necromancy, 7)
    EV(Transmutation, 8)
END_ENUM()

BEGIN_BITMASK(ProjectileTypeIds, uint8_t)
    EV(Physical, 1)
    EV(Magical, 2)
END_ENUM()

BEGIN_ENUM(AdvantageContext, uint32_t)
    EV(AttackRoll, 0)
    EV(AttackTarget, 1)
    EV(SavingThrow, 2)
    EV(AllSavingThrows, 3)
    EV(Ability, 4)
    EV(AllAbilities, 5)
    EV(Skill, 6)
    EV(AllSkills, 7)
    EV(SourceDialogue, 8)
    EV(DeathSavingThrow, 9)
    EV(Concentration, 10)
END_ENUM()

BEGIN_BITMASK(AttributeFlags, uint32_t)
    EV(SlippingImmunity, 0x1)
    EV(Torch, 0x2)
    EV(Arrow, 0x4)
    EV(Unbreakable, 0x8)
    EV(Unrepairable, 0x10)
    EV(Unstorable, 0x20)
    EV(Grounded, 0x40)
    EV(Floating, 0x80)
    EV(InventoryBound, 0x100)
    EV(IgnoreClouds, 0x200)
    EV(LootableWhenEquipped, 0x400)
    EV(PickpocketableWhenEquipped, 0x800)
    EV(LoseDurabilityOnCharacterHit, 0x1000)
    EV(ThrownImmunity, 0x2000)
    EV(InvisibilityImmunity, 0x4000)
    EV(InvulnerableAndInteractive, 0x8000)
    EV(Backstab, 0x10000)
    EV(BackstabImmunity, 0x20000)
    EV(EnableObscurityEvents, 0x40000)
    EV(ObscurityWithoutSneaking, 0x80000)
    EV(FloatingWhileMoving, 0x100000)
    EV(ForceMainhandAlternativeEquipBones, 0x200000)
    EV(UseMusicalInstrumentForCasting, 0x400000)
END_ENUM()

BEGIN_ENUM(AdvantageBoostType, uint8_t)
    EV(Advantage, 1)
    EV(Disadvantage, 2)
END_ENUM()

BEGIN_ENUM(DiceSizeId, uint8_t)
    EV(D4, 0)
    EV(D6, 1)
    EV(D8, 2)
    EV(D10, 3)
    EV(D12, 4)
    EV(D20, 5)
    EV(D100, 6)
    EV(Default, 8)
END_ENUM()

BEGIN_ENUM(SpellLearningStrategy, uint8_t)
    EV(Singular, 0)
    EV(AddChildren, 1)
    EV(MostPowerful, 2)
END_ENUM()

BEGIN_ENUM(SpellPrepareType, uint8_t)
    EV(AlwaysPrepared, 0)
    EV(RequiresPreparation, 1)
    EV(Unknown, 2)
END_ENUM()

BEGIN_BITMASK(ResourceReplenishType, uint8_t)
    EV(Never, 0x01)
    EV(Default, 0x02)
    EV(Combat, 0x04)
    EV(Rest, 0x8)
    EV(ShortRest, 0x10)
    EV(FullRest, 0x20)
    EV(ExhaustedRest, 0x40)
END_ENUM()

BEGIN_ENUM(SpellCooldownType, uint8_t)
    EV(Default, 0)
    EV(OncePerTurn, 1)
    EV(OncePerCombat, 2)
    EV(UntilRest, 3)
    EV(OncePerTurnNoRealtime, 4)
    EV(UntilShortRest, 5)
    EV(UntilPerRestPerItem, 6)
    EV(OncePerShortRestPerItem, 7)
END_ENUM()

BEGIN_ENUM(SpellModificationValueType, uint8_t)
    EV(AdditiveBase, 0)
    EV(AdditiveFinal, 1)
    EV(Multiplicative, 2)
    EV(Override, 3)
END_ENUM()

BEGIN_ENUM(SourceAdvantageType, uint8_t)
    EV(SourceAdvantageOnAttack, 1)
    EV(SourceAllyAdvantageOnAttack, 2)
END_ENUM()

BEGIN_ENUM(ProficiencyBonusBoostType, uint32_t)
    EV(AttackRoll, 0)
    EV(AttackTarget, 1)
    EV(SavingThrow, 2)
    EV(AllSavingThrows, 3)
    EV(Ability, 4)
    EV(AllAbilities, 5)
    EV(Skill, 6)
    EV(AllSkills, 7)
    EV(SourceDialogue, 8)
    EV(WeaponActionDC, 9)
END_ENUM()

BEGIN_ENUM(ShapeshiftSpellSource, uint64_t)
    EV(ShapeshiftRule, 0)
    EV(Unknown, 1)
    EV(Template, 2)
END_ENUM()

BEGIN_ENUM(ShapeshiftChangeType, uint8_t)
    EV(Add, 0)
    EV(Multiply, 1)
    EV(Override, 2)
END_ENUM()

BEGIN_ENUM(Gender, uint8_t)
    EV(Male, 0)
    EV(Female, 1)
END_ENUM()

BEGIN_BITMASK(CriticalHitBoostFlags, uint8_t)
    EV(Success, 1)
    EV(SuccessNever, 2)
    EV(Failure, 4)
    EV(FailureNever, 8)
    EV(AttackTarget, 16)
    EV(AttackRoll, 32)
END_ENUM()

BEGIN_BITMASK(ResistanceBoostFlags, uint8_t)
    EV(BelowDamageThreshold, 0x01)
    EV(ResistantToMagical, 0x02)
    EV(ImmuneToMagical, 0x04)
    EV(VulnerableToMagical, 0x08)
    EV(ResistantToNonMagical, 0x10)
    EV(ImmuneToNonMagical, 0x20)
    EV(VulnerableToNonMagical, 0x40)
END_ENUM()

BEGIN_ENUM(SurfaceChange, uint8_t)
    EV(None, 0)
    EV(Ignite, 1)
    EV(Douse, 2)
    EV(Electrify, 3)
    EV(Deelectrify, 4)
    EV(Freeze, 5)
    EV(Melt, 6)
    EV(Vaporize, 7)
    EV(Condense, 8)
    EV(DestroyWater, 9)
    EV(Clear, 10)
    EV(Daylight, 11)
    EV(TurnHellfire, 12)
    EV(UnturnHellfire, 13)
END_ENUM()

BEGIN_ENUM(WeaponType, uint8_t)
    EV(None, 0)
    EV(Sword, 1)
    EV(Club, 2)
    EV(Axe, 3)
    EV(Staff, 4)
    EV(Bow, 5)
    EV(Crossbow, 6)
    EV(Spear, 7)
    EV(Knife, 8)
    EV(Wand, 9)
    EV(Arrow, 10)
    EV(Rifle, 11)
    EV(Sentinel, 12)
END_ENUM()

BEGIN_BITMASK_NS(stats, TargetTypeFlags, StatsTargetTypeFlags, uint8_t)
    EV(Living, 1)
    EV(Guaranteed, 2)
    EV(Construct, 4)
    EV(Undead, 8)
END_ENUM_NS()

BEGIN_ENUM(DealDamageWeaponType, uint8_t)
    EV(None, 0)
    EV(MainWeapon, 1)
    EV(OffhandWeapon, 2)
    EV(MainMeleeWeapon, 3)
    EV(OffhandMeleeWeapon, 4)
    EV(MainRangedWeapon, 5)
    EV(OffhandRangedWeapon, 6)
    EV(SourceWeapon, 7)
    EV(UnarmedDamage, 8)
    EV(ThrownWeapon, 9)
    EV(ImprovisedWeapon, 10)
END_ENUM()

BEGIN_ENUM(DealDamageWeaponDamageType, uint8_t)
    EV(None, 0)
    EV(MainWeaponDamageType, 1)
    EV(OffhandWeaponDamageType, 2)
    EV(MainMeleeWeaponDamageType, 3)
    EV(OffhandMeleeWeaponDamageType, 4)
    EV(MainRangedWeaponDamageType, 5)
    EV(OffhandRangedWeaponDamageType, 6)
    EV(SourceWeaponDamageType, 7)
    EV(ThrownWeaponDamageType, 8)
END_ENUM()

BEGIN_ENUM(ExecuteWeaponFunctorsType, uint8_t)
    EV(MainHand, 0)
    EV(OffHand, 1)
    EV(BothHands, 2)
    EV(Undefined, 3)
END_ENUM()

BEGIN_ENUM(SetStatusDurationType, uint8_t)
    EV(SetMinimum, 0)
    EV(ForceSet, 1)
    EV(Add, 2)
    EV(Multiply, 3)
    EV(Unknown, 4)
END_ENUM()

BEGIN_ENUM(ForceFunctorOrigin, uint8_t)
    EV(OriginToEntity, 0)
    EV(OriginToTarget, 1)
    EV(TargetToEntity, 2)
    EV(Undefined, 3)
END_ENUM()

BEGIN_ENUM(ForceFunctorAggression, uint8_t)
    EV(Aggressive, 0)
    EV(Friendly, 1)
    EV(Neutral, 2)
    EV(Undefined, 3)
END_ENUM()


BEGIN_ENUM(ArmorType, uint32_t)
    EV(None, 0)
    EV(Cloth, 1)
    EV(Padded, 2)
    EV(Leather, 3)
    EV(StuddedLeather, 4)
    EV(Hide, 5)
    EV(ChainShirt, 6)
    EV(ScaleMail, 7)
    EV(BreastPlate, 8)
    EV(HalfPlate, 9)
    EV(RingMail, 10)
    EV(ChainMail, 11)
    EV(Splint, 12)
    EV(Plate, 13)
    EV(Sentinel, 14)
END_ENUM()


BEGIN_ENUM(HandednessType, uint32_t)
    EV(Any, 0)
    EV(One, 1)
    EV(Two, 2)
END_ENUM()

BEGIN_ENUM(EquipmentStatsType, uint32_t)
    EV(Weapon, 0)
    EV(Armor, 1)
    EV(Shield, 2)
END_ENUM()

BEGIN_BITMASK_NS(esv, StatusMaterialApplyFlags, StatusMaterialApplyFlags, uint8_t)
    EV(ApplyOnBody, 1)
    EV(ApplyOnArmor, 2)
    EV(ApplyOnWeapon, 4)
    EV(ApplyOnWings, 8)
    EV(ApplyOnHorns, 0x10)
    EV(ApplyOnOverhead, 0x20)
END_ENUM_NS()


BEGIN_ENUM(StatusType, uint32_t)
    EV(DYING, 1)
    EV(HEAL, 2)
    EV(KNOCKED_DOWN, 3)
    EV(TELEPORT_FALLING, 4)
    EV(BOOST, 5)
    EV(REACTION, 6)
    EV(STORY_FROZEN, 7)
    EV(SNEAKING, 8)
    EV(UNLOCK, 9)
    EV(FEAR, 10)
    EV(SMELLY, 11)
    EV(INVISIBLE, 12)
    EV(ROTATE, 13)
    EV(MATERIAL, 14)
    EV(CLIMBING, 15)
    EV(INCAPACITATED, 16)
    EV(INSURFACE, 17)
    EV(POLYMORPHED, 18)
    EV(EFFECT, 19)
    EV(DEACTIVATED, 20)
    EV(DOWNED, 21)
END_ENUM()


BEGIN_ENUM(CauseType, uint8_t)
    EV(None, 0)
    EV(SurfaceMove, 1)
    EV(SurfaceCreate, 2)
    EV(SurfaceStatus, 3)
    EV(StatusEnter, 4)
    EV(StatusTick, 5)
    EV(Attack, 6)
    EV(Offhand, 7)
    EV(AURA, 8)
    EV(InventoryItem, 9)
    EV(WorldItemThrow, 10)
END_ENUM()


BEGIN_BITMASK(DamageFlags, uint32_t)
    EV(Hit, 1)
    EV(Dodge, 2)
    EV(Miss, 4)
    EV(Critical, 8)
    EV(Backstab, 0x10)
    EV(Invisible, 0x20)
    EV(Magical, 0x40)
    EV(Invulnerable, 0x80)
    EV(SavingThrow, 0x100)
    EV(Projectile, 0x200)
    EV(HitpointsDamaged, 0x400)
    EV(Surface, 0x800)
    EV(Status, 0x1000)
    EV(AttackAdvantage, 0x2000)
    EV(AttackDisadvantage, 0x4000)
    EV(Calculated, 0x8000)
    EV(KillingBlow, 0x10000)
    EV(NonlethalCapped, 0x20000)
END_ENUM()


BEGIN_ENUM_NS(stats, Size, StatsSize, uint8_t)
    EV(None, 0)
    EV(Tiny, 1)
    EV(Small, 2)
    EV(Medium, 3)
    EV(Large, 4)
    EV(Huge, 5)
    EV(Gargantuan, 6)
END_ENUM_NS()


BEGIN_BITMASK_NS(stats, StatusGroup, StatsStatusGroup, uint64_t)
    EV(SG_Condition, 1)
    EV(SG_Blinded, 2)
    EV(SG_Charmed, 4)
    EV(SG_Cursed, 8)
    EV(SG_Disease, 16)
    EV(SG_Exhausted, 32)
    EV(SG_Frightened, 64)
    EV(SG_Incapacitated, 128)
    EV(SG_Invisible, 256)
    EV(SG_Poisoned, 512)
    EV(SG_Prone, 1024)
    EV(SG_Restrained, 2048)
    EV(SG_Stunned, 4096)
    EV(SG_Unconscious, 0x2000)
    EV(SG_Surface, 0x4000)
    EV(SG_Polymorph, 0x8000)
    EV(SG_Paralyzed, 0x10000)
    EV(SG_Light, 0x20000)
    EV(SG_Disguise, 0x40000)
    EV(SG_Possessed, 0x80000)
    EV(SG_Petrified, 0x100000)
    EV(SG_Polymorph_BeastShape, 0x200000)
    EV(SG_Polymorph_BeastShape_NPC, 0x400000)
    EV(SG_Poisoned_Story_Removable, 0x800000)
    EV(SG_Poisoned_Story_NonRemovable, 0x1000000)
    EV(SG_Charmed_Subtle, 0x2000000)
    EV(SG_Helpable_Condition, 0x4000000)
    EV(SG_Rage, 0x8000000)
    EV(SG_Taunted, 0x10000000)
    EV(SG_Approaching, 0x20000000)
    EV(SG_Dominated, 0x40000000)
    EV(SG_Fleeing, 0x80000000)
    EV(SG_Confused, 0x100000000)
    EV(SG_Mad, 0x200000000)
    EV(SG_DetectThoughts, 0x400000000)
    EV(SG_DifficultTerrain, 0x800000000)
    EV(SG_ScriptedPeaceBehaviour, 0x1000000000)
    EV(SG_DropForNonMutingDialog, 0x2000000000)
    EV(SG_HexbladeCurse, 0x4000000000)
    EV(SG_WeaponCoating, 0x8000000000)
    EV(SG_Doppelganger, 0x10000000000)
    EV(SG_CanBePickedUp, 0x20000000000)
    EV(SG_Drunk, 0x40000000000)
    EV(SG_Sleeping, 0x80000000000)
    EV(SG_RemoveOnRespec, 0x100000000000)
    EV(SG_Ignore_AOO, 0x200000000000)
END_ENUM_NS()


BEGIN_ENUM_NS(stats, ZoneShape, StatsZoneShape, uint8_t)
    EV(Cone, 0)
    EV(Square, 1)
END_ENUM_NS()


BEGIN_ENUM_NS(stats, DeathType, StatsDeathType, uint8_t)
    EV(None, 0)
    EV(Acid, 1)
    EV(Chasm, 2)
    EV(DoT, 3)
    EV(Electrocution, 4)
    EV(Explode, 5)
    EV(Falling, 6)
    EV(Incinerate, 7)
    EV(KnockedDown, 8)
    EV(Lifetime, 9)
    EV(Necrotic, 10)
    EV(Physical, 11)
    EV(Psychic, 12)
    EV(Radiant, 13)
    EV(CinematicDeath, 14)
    EV(Cold, 15)
    EV(Disintegrate, 16)
END_ENUM_NS()


BEGIN_ENUM(DamageType, uint8_t)
    EV(None, 0)
    EV(Slashing, 1)
    EV(Piercing, 2)
    EV(Bludgeoning, 3)
    EV(Acid, 4)
    EV(Thunder, 5)
    EV(Necrotic, 6)
    EV(Fire, 7)
    EV(Lightning, 8)
    EV(Cold, 9)
    EV(Psychic, 10)
    EV(Poison, 11)
    EV(Radiant, 12)
    EV(Force, 13)
    EV(Sentinel, 14)
END_ENUM()


BEGIN_ENUM(HitType, uint32_t)
    EV(Melee, 0)
    EV(Magic, 1)
    EV(Ranged, 2)
    EV(WeaponDamage, 3)
    EV(Surface, 4)
    EV(DoT, 5)
    EV(Reflected, 6)
END_ENUM()


BEGIN_ENUM(AttackFlags, uint8_t)
    EV(InstantKill, 0x01)
    EV(FirstAttack, 0x02)
    EV(FromSneak, 0x04)
    EV(Reaction, 0x08)
    EV(LastAttack, 0x10)
    EV(DamagedAfterMiss, 0x20)
END_ENUM()


BEGIN_ENUM(HitWith, uint8_t)
    EV(None, 0)
    EV(Weapon, 1)
    EV(Magic, 2)
    EV(Item, 3)
    EV(Projectile, 4)
    EV(Trap, 5)
    EV(Surface, 6)
    EV(Redirection, 7)
    EV(FallDamage, 8)
    EV(CrushByFall, 9)
    EV(Unknown10, 10)
    EV(Unknown11, 11)
END_ENUM()


BEGIN_ENUM(ObscurityState, uint8_t)
    EV(Clear, 0)
    EV(LightlyObscured, 1)
    EV(HeavilyObscured, 2)
END_ENUM()


BEGIN_ENUM(ItemSlot, uint8_t)
    EV(Helmet, 0)
    EV(Breast, 1)
    EV(Cloak, 2)
    EV(MeleeMainHand, 3)
    EV(MeleeOffHand, 4)
    EV(RangedMainHand, 5)
    EV(RangedOffHand, 6)
    EV(Ring, 7)
    EV(Underwear, 8)
    EV(Boots, 9)
    EV(Gloves, 10)
    EV(Amulet, 11)
    EV(Ring2, 12)
    EV(Wings, 13)
    EV(Horns, 14)
    EV(Overhead, 15)
    EV(MusicalInstrument, 16)
    EV(VanityBody, 17)
    EV(VanityBoots, 18)
    EV(MainHand, 19)
    EV(OffHand, 20)
END_ENUM()


BEGIN_ENUM(StatsItemSlot, uint8_t)
    EV(Helmet, 0)
    EV(Breast, 1)
    EV(Cloak, 2)
    EV(MeleeMainHand, 3)
    EV(MeleeOffHand, 4)
    EV(RangedMainHand, 5)
    EV(RangedOffHand, 6)
    EV(Ring, 7)
    EV(Underwear, 8)
    EV(Boots, 9)
    EV(Gloves, 10)
    EV(Amulet, 11)
    EV(Ring2, 12)
    EV(Wings, 13)
    EV(Horns, 14)
    EV(Overhead, 15)
    EV(MusicalInstrument, 16)
    EV(VanityBody, 17)
    EV(VanityBoots, 18)
    EV(MainHand, 19)
    EV(OffHand, 20)
    EV(Max, 21)
    EV(Sentinel, 22)
END_ENUM()


BEGIN_BITMASK(StatCharacterFlags, uint8_t)
    EV(IsPlayer, 1)
    EV(InParty, 2)
    EV(IsSneaking, 4)
    EV(Invisible, 8)
    EV(Blind, 16)
    EV(DrinkedPotion, 32)
    EV(EquipmentValidated, 64)
END_ENUM()


BEGIN_ENUM(StatusHealType, uint8_t)
    EV(None, 0)
    EV(Vitality, 1)
    EV(PhysicalArmor, 2)
    EV(MagicArmor, 3)
    EV(AllArmor, 4)
    EV(All, 5)
    EV(Source, 6)
END_ENUM()


BEGIN_ENUM(HealEffect, uint32_t)
    EV(None, 0)
    EV(ResistDeath, 1)
    EV(Heal, 2)
    EV(Behavior, 3)
    EV(Unknown4, 4)
    EV(Sitting, 5)
    EV(Surface, 6)
    EV(Lifesteal, 7)
    EV(NegativeDamage, 8)
    EV(Unknown9, 9)
    EV(Script, 10)
    EV(HealSharing, 11)
    EV(Necromantic, 12)
    EV(HealSharingReflected, 13)
END_ENUM()

BEGIN_BITMASK(RestFlags, uint16_t)
    EV(CanShortRest, 1)
    EV(CanLongRest, 2)
    EV(Unknown0x04, 4)
END_ENUM()

BEGIN_BITMASK(RestErrorFlags, uint16_t)
    EV(GlobalDisabled, 1)
    EV(Script, 2)
    EV(Dialog, 4)
    EV(Combat, 8)
    EV(FTB, 0x10)
    EV(NotEnoughResources, 0x20)
    EV(DownedOrDead, 0x40)
END_ENUM()

BEGIN_BITMASK(TravelFlags, uint16_t)
    EV(BlockFastTravel, 1)
    EV(BlockCampTravel, 2)
END_ENUM()

BEGIN_BITMASK(TravelErrorFlags, uint16_t)
    EV(InDanger, 2)
    EV(Condition, 4)
    EV(DangerZone, 8)
    EV(Dialog, 0x10)
    EV(CannotFastTravel, 0x40)
    EV(FTB, 0x100)
END_ENUM()

BEGIN_BITMASK(FleeErrorFlags, uint8_t)
    EV(Region, 1)
    EV(EnemyTooClose, 2)
    EV(CantMove, 4)
    EV(Downed, 8)
    EV(Incapacitated, 0x10)
    EV(Condition, 0x20)
    EV(Summon, 0x40)
    EV(PartyFollower, 0x80)
END_ENUM()

BEGIN_BITMASK(AIFlags, uint8_t)
    EV(CanNotUse, 0x01)
    EV(IgnoreSelf, 0x02)
    EV(IgnoreDebuff, 0x04)
    EV(IgnoreBuff, 0x08)
    EV(StatusIsSecondary, 0x10)
    EV(IgnoreControl, 0x20)
    EV(CanNotTargetFrozen, 0x40)
END_ENUM()

BEGIN_ENUM(IngredientType, int)
    EV(None, 0)
    EV(Object, 1)
    EV(Category, 2)
    EV(Property, 3)
END_ENUM()

BEGIN_ENUM(IngredientTransformType, int)
    EV(None, 0)
    EV(Consume, 1)
    EV(Transform, 2)
    EV(Boost, 3)
    EV(Poison, 4)
END_ENUM()

BEGIN_ENUM(ItemDataRarity, uint8_t)
    EV(Common, 0)
    EV(Unique, 1)
    EV(Uncommon, 2)
    EV(Rare, 3)
    EV(Epic, 4)
    EV(Legendary, 5)
    EV(Divine, 6)
    EV(Sentinel, 7)
END_ENUM()

BEGIN_ENUM(ItemUseType, uint8_t)
    EV(None, 0)
    EV(Unknown1, 1)
    EV(Grenade, 2)
    EV(Arrow, 3)
    EV(Scroll, 4)
    EV(Potion, 5)
    EV(Throwable, 6)
    EV(Consumable, 7)
END_ENUM()

BEGIN_ENUM(BoostSourceType, uint8_t)
    EV(Undefined, 0)
    EV(Item, 1)
    EV(Status, 2)
    EV(Passive, 3)
    EV(Story, 4)
    EV(Console, 5)
    EV(Progression, 6)
    EV(Base, 7)
    EV(CharacterCreation, 8)
    EV(Shapeshift, 9)
    EV(Action, 10)
END_ENUM()

BEGIN_BITMASK(ProficiencyGroupFlags, uint64_t)
    EV(Battleaxes, 0x01)
    EV(Clubs, 0x02)
    EV(Daggers, 0x04)
    EV(Darts, 0x08)
    EV(Flails, 0x10)
    EV(Glaives, 0x20)
    EV(Greataxes, 0x40)
    EV(Greatclubs, 0x80)
    EV(Greatswords, 0x100)
    EV(Halberds, 0x200)
    EV(HandCrossbows, 0x400)
    EV(Handaxes, 0x800)
    EV(HeavyArmor, 0x1000)
    EV(HeavyCrossbows, 0x2000)
    EV(Javelins, 0x4000)
    EV(LightArmor, 0x8000)
    EV(LightCrossbows, 0x10000)
    EV(LightHammers, 0x20000)
    EV(Longbows, 0x40000)
    EV(Longswords, 0x80000)
    EV(Maces, 0x100000)
    EV(MartialWeapons, 0x200000)
    EV(Mauls, 0x400000)
    EV(MediumArmor, 0x800000)
    EV(Morningstars, 0x1000000)
    EV(Pikes, 0x2000000)
    EV(Quarterstaffs, 0x4000000)
    EV(Rapiers, 0x8000000)
    EV(Scimitars, 0x10000000)
    EV(Shields, 0x20000000)
    EV(Shortbows, 0x40000000)
    EV(Shortswords, 0x80000000)
    EV(Sickles, 0x100000000)
    EV(SimpleWeapons, 0x200000000)
    EV(Slings, 0x400000000)
    EV(Spears, 0x800000000)
    EV(Tridents, 0x1000000000)
    EV(Warhammers, 0x2000000000)
    EV(Warpicks, 0x4000000000)
    EV(MusicalInstrument, 0x8000000000)
END_ENUM()

BEGIN_BITMASK(SpellFlags, uint64_t)
    EV(HasVerbalComponent, 0x1)
    EV(HasSomaticComponent, 0x2)
    EV(IsJump, 0x4)
    EV(IsAttack, 0x8)
    EV(IsMelee, 0x10)
    EV(HasHighGroundRangeExtension, 0x20)
    EV(IsConcentration, 0x40)
    EV(AddFallDamageOnLand, 0x80)
    EV(ConcentrationIgnoresResting, 0x100)
    EV(InventorySelection, 0x200)
    EV(IsSpell, 0x400)
    EV(CombatLogSetSingleLineRoll, 0x800)
    EV(IsEnemySpell, 0x1000)
    EV(CannotTargetCharacter, 0x2000)
    EV(CannotTargetItems, 0x4000)
    EV(CannotTargetTerrain, 0x8000)
    EV(IgnoreVisionBlock, 0x10000)
    EV(Stealth, 0x20000)
    EV(AddWeaponRange, 0x40000)
    EV(IgnoreSilence, 0x80000)
    EV(ImmediateCast, 0x100000)
    EV(RangeIgnoreSourceBounds, 0x200000)
    EV(RangeIgnoreTargetBounds, 0x400000)
    EV(RangeIgnoreVerticalThreshold, 0x800000)
    EV(NoSurprise, 0x1000000)
    EV(IsHarmful, 0x2000000)
    EV(IsTrap, 0x4000000)
    EV(IsDefaultWeaponAction, 0x8000000)
    EV(CallAlliesSpell, 0x10000000)
    EV(TargetClosestEqualGroundSurface, 0x20000000)
    EV(CannotRotate, 0x40000000)
    EV(NoCameraMove, 0x80000000)
    EV(CanDualWield, 0x100000000)
    EV(IsLinkedSpellContainer, 0x200000000)
    EV(Invisible, 0x400000000)
    EV(AllowMoveAndCast, 0x800000000)
    EV(UNUSED_D, 0x1000000000)
    EV(Wildshape, 0x2000000000)
    EV(UNUSED_E, 0x4000000000)
    EV(UnavailableInDialogs, 0x8000000000)
    EV(TrajectoryRules, 0x10000000000)
    EV(PickupEntityAndMove, 0x20000000000)
    EV(Temporary, 0x40000000000)
    EV(RangeIgnoreBlindness, 0x80000000000)
    EV(AbortOnSpellRollFail, 0x100000000000)
    EV(AbortOnSecondarySpellRollFail, 0x200000000000)
    EV(CanAreaDamageEvade, 0x400000000000)
    EV(DontAbortPerforming, 0x800000000000)
    EV(NoCooldownOnMiss, 0x1000000000000)
    EV(NoAOEDamageOnLand, 0x2000000000000)
    EV(IsSwarmAttack, 0x4000000000000)
    EV(DisplayInItemTooltip, 0x8000000000000)
    EV(HideInItemTooltip, 0x10000000000000)
    EV(DisableBlood, 0x20000000000000)
    EV(IgnorePreviouslyPickedEntities, 0x40000000000000)
    EV(IgnoreAoO, 0x80000000000000)
END_ENUM()

BEGIN_ENUM(GameActionType, int)
    EV(RainAction, 1)
    EV(StormAction, 2)
    EV(WallAction, 4)
    EV(TornadoAction, 6)
    EV(PathAction, 7)
    EV(GameObjectMoveAction, 8)
    EV(StatusDomeAction, 9)
END_ENUM()

BEGIN_ENUM(SpellType, uint8_t)
    EV(Zone, 0x1)
    EV(MultiStrike, 0x2)
    EV(Projectile, 0x3)
    EV(ProjectileStrike, 0x4)
    EV(Rush, 0x5)
    EV(Shout, 0x6)
    EV(Storm, 0x7)
    EV(Target, 0x8)
    EV(Teleportation, 0x9)
    EV(Wall, 0xA)
    EV(Throw, 0xB)
END_ENUM()

BEGIN_ENUM(SpellSourceType, uint8_t)
    EV(Progression0, 0x0)
    EV(Progression1, 0x1)
    EV(Progression2, 0x2)
    EV(Boost, 0x3)
    EV(Shapeshift, 0x4)
    EV(SpellSet2, 0x5)
    EV(SpellSet, 0x6)
    EV(WeaponAttack, 0x7)
    EV(UnarmedAttack, 0x8)
    EV(Osiris, 0x9)
    EV(Anubis, 0xA)
    EV(Behavior, 0xB)
    EV(PartyPreset, 0xC)
    EV(EquippedItem, 0xD)
    EV(GameActionCreateSurface, 0xE)
    EV(AiTest, 0xF)
    EV(CreateExplosion, 0x10)
    EV(Spell, 0x11)
    EV(ActiveDefense, 0x12)
    EV(Learned, 0x13)
    EV(Progression, 0x14)
    EV(Unknown15, 0x15)
    EV(Unknown16, 0x16)
    EV(Unknown17, 0x17)
    EV(Unknown18, 0x18)
    EV(Unknown19, 0x19)
    EV(Unknown1A, 0x1A)
    EV(Sentinel, 0x1B)
END_ENUM()

BEGIN_ENUM(SpellAttackTypeOverride, uint8_t)
    EV(Target_MainHandAttack, 0)
    EV(Target_OffhandAttack, 1)
    EV(Projectile_MainHandAttack, 2)
    EV(Projectile_OffhandAttack, 3)
    EV(Target_UnarmedAttack, 4)
END_ENUM()

BEGIN_ENUM(ActionDataType, uint8_t)
    EV(Unknown, 0)
    EV(OpenClose, 1)
    EV(Destroy, 2)
    EV(Teleport, 3)
    EV(CreateSurface, 4)
    EV(DestroyParameters, 5)
    EV(Equip, 6)
    EV(Consume, 7)
    EV(StoryUse, 8)
    EV(Door, 9)
    EV(CreatePuddle, 10)
    EV(Book, 11)
    EV(UseSpell, 12)
    EV(SpellBook, 13)
    EV(Sit, 14)
    EV(Lie, 15)
    EV(Insert, 16)
    EV(Stand, 17)
    EV(Lockpick, 18)
    EV(StoryUseInInventory, 19)
    EV(DisarmTrap, 20)
    EV(ShowStoryElementUI, 22)
    EV(Combine, 23)
    EV(Ladder, 24)
    EV(PlaySound, 26)
    EV(SpawnCharacter, 27)
    EV(Constrain, 28)
    EV(Recipe, 30)
    EV(Unknown31, 31)
    EV(Throw, 32)
    EV(LearnSpell, 33)
    EV(Unknown34, 34)
    EV(Unknown35, 35)
END_ENUM()


BEGIN_ENUM(SurfaceType, uint8_t)
    EV(None, 0)
    EV(Water, 1)
    EV(WaterElectrified, 2)
    EV(WaterFrozen, 3)
    EV(Blood, 4)
    EV(BloodElectrified, 5)
    EV(BloodFrozen, 6)
    EV(Poison, 7)
    EV(Oil, 8)
    EV(Lava, 9)
    EV(Grease, 10)
    EV(WyvernPoison, 11)
    EV(Web, 12)
    EV(Deepwater, 13)
    EV(Vines, 14)
    EV(Fire, 15)
    EV(Acid, 16)
    EV(TrialFire, 17)
    EV(BlackPowder, 18)
    EV(ShadowCursedVines, 19)
    EV(AlienOil, 20)
    EV(Mud, 21)
    EV(Alcohol, 22)
    EV(InvisibleWeb, 23)
    EV(BloodSilver, 24)
    EV(Chasm, 25)
    EV(Hellfire, 26)
    EV(CausticBrine, 27)
    EV(BloodExploding, 28)
    EV(Ash, 29)
    EV(SpikeGrowth, 30)
    EV(HolyFire, 31)
    EV(BlackTentacles, 32)
    EV(Overgrowth, 33)
    EV(PurpleWormPoison, 34)
    EV(SerpentVenom, 35)
    EV(InvisibleGithAcid, 36)
    EV(BladeBarrier, 37)
    EV(Sewer, 38)
    EV(WaterCloud, 39)
    EV(WaterCloudElectrified, 40)
    EV(PoisonCloud, 41)
    EV(ExplosionCloud, 42)
    EV(ShockwaveCloud, 43)
    EV(CloudkillCloud, 44)
    EV(MaliceCloud, 45)
    EV(BloodCloud, 46)
    EV(StinkingCloud, 47)
    EV(DarknessCloud, 48)
    EV(FogCloud, 49)
    EV(GithPheromoneGasCloud, 50)
    EV(SporeWhiteCloud, 51)
    EV(SporeGreenCloud, 52)
    EV(SporeBlackCloud, 53)
    EV(DrowPoisonCloud, 54)
    EV(IceCloud, 55)
    EV(PotionHealingCloud, 56)
    EV(PotionHealingGreaterCloud, 57)
    EV(PotionHealingSuperiorCloud, 58)
    EV(PotionHealingSupremeCloud, 59)
    EV(PotionInvisibilityCloud, 60)
    EV(PotionSpeedCloud, 61)
    EV(PotionVitalityCloud, 62)
    EV(PotionAntitoxinCloud, 63)
    EV(PotionResistanceAcidCloud, 64)
    EV(PotionResistanceColdCloud, 65)
    EV(PotionResistanceFireCloud, 66)
    EV(PotionResistanceForceCloud, 67)
    EV(PotionResistanceLightningCloud, 68)
    EV(PotionResistancePoisonCloud, 69)
    EV(SporePinkCloud, 70)
    EV(BlackPowderDetonationCloud, 71)
    EV(VoidCloud, 72)
    EV(CrawlerMucusCloud, 73)
    EV(Cloudkill6Cloud, 74)
    EV(Sentinel, 75)
END_ENUM()


BEGIN_ENUM(SurfaceLayer, uint32_t)
    EV(Ground, 0)
    EV(Cloud, 1)
    EV(None, 2)
END_ENUM()


BEGIN_ENUM(SurfaceLayer8, uint8_t)
    EV(Ground, 0)
    EV(Cloud, 1)
    EV(None, 2)
END_ENUM()


BEGIN_ENUM(SurfaceActionType, uint8_t)
    EV(CreateSurfaceAction, 1)
    EV(CreatePuddleAction, 2)
    EV(ExtinguishFireAction, 3)
    EV(ZoneAction, 4)
    EV(TransformSurfaceAction, 5)
    EV(ChangeSurfaceOnPathAction, 6)
    EV(RectangleSurfaceAction, 7)
    EV(PolygonSurfaceAction, 8)
END_ENUM()
