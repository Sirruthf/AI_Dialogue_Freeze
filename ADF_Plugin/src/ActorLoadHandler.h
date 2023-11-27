#pragma once

std::string getEnumString(RE::ENUM_FORM_ID type)
{
	switch (type) {
	case RE::ENUM_FORM_ID::kNONE:
		return "kNONE";
	case RE::ENUM_FORM_ID::kTES4:
		return "kTES4";  // 01 TES4
	case RE::ENUM_FORM_ID::kGRUP:
		return "kGRUP";  // 02 GRUP
	case RE::ENUM_FORM_ID::kGMST:
		return "kGMST";  // 03 GMST
	case RE::ENUM_FORM_ID::kKYWD:
		return "kKYWD";  // 04 KYWD X BGSKeyword
	case RE::ENUM_FORM_ID::kLCRT:
		return "kLCRT";  // 05 LCRT X BGSLocationRefType
	case RE::ENUM_FORM_ID::kAACT:
		return "kAACT";  // 06 AACT X BGSAction
	case RE::ENUM_FORM_ID::kTRNS:
		return "kTRNS";  // 07 TRNS X BGSTransform
	case RE::ENUM_FORM_ID::kCMPO:
		return "kCMPO";  // 08 CMPO X BGSComponent
	case RE::ENUM_FORM_ID::kTXST:
		return "kTXST";  // 09 TXST X BGSTextureSet
	case RE::ENUM_FORM_ID::kMICN:
		return "kMICN";  // 0A MICN X BGSMenuIcon
	case RE::ENUM_FORM_ID::kGLOB:
		return "kGLOB";  // 0B GLOB X TESGlobal
	case RE::ENUM_FORM_ID::kDMGT:
		return "kDMGT";  // 0C DMGT X BGSDamageType
	case RE::ENUM_FORM_ID::kCLAS:
		return "kCLAS";  // 0D CLAS X TESClass
	case RE::ENUM_FORM_ID::kFACT:
		return "kFACT";  // 0E FACT X TESFaction
	case RE::ENUM_FORM_ID::kHDPT:
		return "kHDPT";  // 0F HDPT X BGSHeadPart
	case RE::ENUM_FORM_ID::kEYES:
		return "kEYES";  // 10 EYES X TESEyes
	case RE::ENUM_FORM_ID::kRACE:
		return "kRACE";  // 11 RACE X TESRace
	case RE::ENUM_FORM_ID::kSOUN:
		return "kSOUN";  // 12 SOUN X TESSound
	case RE::ENUM_FORM_ID::kASPC:
		return "kASPC";  // 13 ASPC X BGSAcousticSpace
	case RE::ENUM_FORM_ID::kSKIL:
		return "kSKIL";  // 14 SKIL
	case RE::ENUM_FORM_ID::kMGEF:
		return "kMGEF";  // 15 MGEF X EffectSetting
	case RE::ENUM_FORM_ID::kSCPT:
		return "kSCPT";  // 16 SCPT X Script
	case RE::ENUM_FORM_ID::kLTEX:
		return "kLTEX";  // 17 LTEX X TESLandTexture
	case RE::ENUM_FORM_ID::kENCH:
		return "kENCH";  // 18 ENCH X EnchantmentItem
	case RE::ENUM_FORM_ID::kSPEL:
		return "kSPEL";  // 19 SPEL X SpellItem
	case RE::ENUM_FORM_ID::kSCRL:
		return "kSCRL";  // 1A SCRL X ScrollItem
	case RE::ENUM_FORM_ID::kACTI:
		return "kACTI";  // 1B ACTI X TESObjectACTI
	case RE::ENUM_FORM_ID::kTACT:
		return "kTACT";  // 1C TACT X BGSTalkingActivator
	case RE::ENUM_FORM_ID::kARMO:
		return "kARMO";  // 1D ARMO X TESObjectARMO
	case RE::ENUM_FORM_ID::kBOOK:
		return "kBOOK";  // 1E BOOK X TESObjectBOOK
	case RE::ENUM_FORM_ID::kCONT:
		return "kCONT";  // 1F CONT X TESObjectCONT
	case RE::ENUM_FORM_ID::kDOOR:
		return "kDOOR";  // 20 DOOR X TESObjectDOOR
	case RE::ENUM_FORM_ID::kINGR:
		return "kINGR";  // 21 INGR X IngredientItem
	case RE::ENUM_FORM_ID::kLIGH:
		return "kLIGH";  // 22 LIGH X TESObjectLIGH
	case RE::ENUM_FORM_ID::kMISC:
		return "kMISC";  // 23 MISC X TESObjectMISC
	case RE::ENUM_FORM_ID::kSTAT:
		return "kSTAT";  // 24 STAT X TESObjectSTAT
	case RE::ENUM_FORM_ID::kSCOL:
		return "kSCOL";  // 25 SCOL X BGSStaticCollection
	case RE::ENUM_FORM_ID::kMSTT:
		return "kMSTT";  // 26 MSTT X BGSMovableStatic
	case RE::ENUM_FORM_ID::kGRAS:
		return "kGRAS";  // 27 GRAS X TESGrass
	case RE::ENUM_FORM_ID::kTREE:
		return "kTREE";  // 28 TREE X TESObjectTREE
	case RE::ENUM_FORM_ID::kFLOR:
		return "kFLOR";  // 29 FLOR X TESFlora
	case RE::ENUM_FORM_ID::kFURN:
		return "kFURN";  // 2A FURN X TESFurniture
	case RE::ENUM_FORM_ID::kWEAP:
		return "kWEAP";  // 2B WEAP X TESObjectWEAP
	case RE::ENUM_FORM_ID::kAMMO:
		return "kAMMO";  // 2C AMMO X TESAmmo
	case RE::ENUM_FORM_ID::kNPC_:
		return "kNPC_";  // 2D NPC_ X TESNPC
	case RE::ENUM_FORM_ID::kLVLN:
		return "kLVLN";  // 2E LVLN X TESLevCharacter
	case RE::ENUM_FORM_ID::kKEYM:
		return "kKEYM";  // 2F KEYM X TESKey
	case RE::ENUM_FORM_ID::kALCH:
		return "kALCH";  // 30 ALCH X AlchemyItem
	case RE::ENUM_FORM_ID::kIDLM:
		return "kIDLM";  // 31 IDLM X BGSIdleMarker
	case RE::ENUM_FORM_ID::kNOTE:
		return "kNOTE";  // 32 NOTE X BGSNote
	case RE::ENUM_FORM_ID::kPROJ:
		return "kPROJ";  // 33 PROJ X BGSProjectile
	case RE::ENUM_FORM_ID::kHAZD:
		return "kHAZD";  // 34 HAZD X BGSHazard
	case RE::ENUM_FORM_ID::kBNDS:
		return "kBNDS";  // 35 BNDS X BGSBendableSpline
	case RE::ENUM_FORM_ID::kSLGM:
		return "kSLGM";  // 36 SLGM X TESSoulGem
	case RE::ENUM_FORM_ID::kTERM:
		return "kTERM";  // 37 TERM X BGSTerminal
	case RE::ENUM_FORM_ID::kLVLI:
		return "kLVLI";  // 38 LVLI X TESLevItem
	case RE::ENUM_FORM_ID::kWTHR:
		return "kWTHR";  // 39 WTHR X TESWeather
	case RE::ENUM_FORM_ID::kCLMT:
		return "kCLMT";  // 3A CLMT X TESClimate
	case RE::ENUM_FORM_ID::kSPGD:
		return "kSPGD";  // 3B SPGD X BGSShaderParticleGeometryData
	case RE::ENUM_FORM_ID::kRFCT:
		return "kRFCT";  // 3C RFCT X BGSReferenceEffect
	case RE::ENUM_FORM_ID::kREGN:
		return "kREGN";  // 3D REGN X TESRegion
	case RE::ENUM_FORM_ID::kNAVI:
		return "kNAVI";  // 3E NAVI X NavMeshInfoMap
	case RE::ENUM_FORM_ID::kCELL:
		return "kCELL";  // 3F CELL X TESObjectCELL
	case RE::ENUM_FORM_ID::kREFR:
		return "kREFR";  // 40 REFR X TESObjectREFR
						 //         X Explosion
						 //         X Projectile
	case RE::ENUM_FORM_ID::kACHR:
		return "kACHR";  // 41 ACHR X Actor
						 //         X PlayerCharacter
	case RE::ENUM_FORM_ID::kPMIS:
		return "kPMIS";  // 42 PMIS X MissileProjectile
	case RE::ENUM_FORM_ID::kPARW:
		return "kPARW";  // 43 PARW X ArrowProjectile
	case RE::ENUM_FORM_ID::kPGRE:
		return "kPGRE";  // 44 PGRE X GrenadeProjectile
	case RE::ENUM_FORM_ID::kPBEA:
		return "kPBEA";  // 45 PBEA X BeamProjectile
	case RE::ENUM_FORM_ID::kPFLA:
		return "kPFLA";  // 46 PFLA X FlameProjectile
	case RE::ENUM_FORM_ID::kPCON:
		return "kPCON";  // 47 PCON X ConeProjectile
	case RE::ENUM_FORM_ID::kPBAR:
		return "kPBAR";  // 48 PBAR X BarrierProjectile
	case RE::ENUM_FORM_ID::kPHZD:
		return "kPHZD";  // 49 PHZD X Hazard
	case RE::ENUM_FORM_ID::kWRLD:
		return "kWRLD";  // 4A WRLD X TESWorldSpace
	case RE::ENUM_FORM_ID::kLAND:
		return "kLAND";  // 4B LAND X TESObjectLAND
	case RE::ENUM_FORM_ID::kNAVM:
		return "kNAVM";  // 4C NAVM X NavMesh
	case RE::ENUM_FORM_ID::kTLOD:
		return "kTLOD";  // 4D TLOD
	case RE::ENUM_FORM_ID::kDIAL:
		return "kDIAL";  // 4E DIAL X TESTopic
	case RE::ENUM_FORM_ID::kINFO:
		return "kINFO";  // 4F INFO X TESTopicInfo
	case RE::ENUM_FORM_ID::kQUST:
		return "kQUST";  // 50 QUST X TESQuest
	case RE::ENUM_FORM_ID::kIDLE:
		return "kIDLE";  // 51 IDLE X TESIdleForm
	case RE::ENUM_FORM_ID::kPACK:
		return "kPACK";  // 52 PACK X TESPackage
						 //         X AlarmPackage
						 //         X DialoguePackage
						 //         X FleePackage
						 //         X SpectatorPackage
						 //         X TrespassPackage
	case RE::ENUM_FORM_ID::kCSTY:
		return "kCSTY";  // 53 CSTY X TESCombatStyle
	case RE::ENUM_FORM_ID::kLSCR:
		return "kLSCR";  // 54 LSCR X TESLoadScreen
	case RE::ENUM_FORM_ID::kLVSP:
		return "kLVSP";  // 55 LVSP X TESLevSpell
	case RE::ENUM_FORM_ID::kANIO:
		return "kANIO";  // 56 ANIO X TESObjectANIO
	case RE::ENUM_FORM_ID::kWATR:
		return "kWATR";  // 57 WATR X TESWaterForm
	case RE::ENUM_FORM_ID::kEFSH:
		return "kEFSH";  // 58 EFSH X TESEffectShader
	case RE::ENUM_FORM_ID::kTOFT:
		return "kTOFT";  // 59 TOFT
	case RE::ENUM_FORM_ID::kEXPL:
		return "kEXPL";  // 5A EXPL X BGSExplosion
	case RE::ENUM_FORM_ID::kDEBR:
		return "kDEBR";  // 5B DEBR X BGSDebris
	case RE::ENUM_FORM_ID::kIMGS:
		return "kIMGS";  // 5C IMGS X TESImageSpace
	case RE::ENUM_FORM_ID::kIMAD:
		return "kIMAD";  // 5D IMAD X TESImageSpaceModifier
	case RE::ENUM_FORM_ID::kFLST:
		return "kFLST";  // 5E FLST X BGSListForm
	case RE::ENUM_FORM_ID::kPERK:
		return "kPERK";  // 5F PERK X BGSPerk
	case RE::ENUM_FORM_ID::kBPTD:
		return "kBPTD";  // 60 BPTD X BGSBodyPartData
	case RE::ENUM_FORM_ID::kADDN:
		return "kADDN";  // 61 ADDN X BGSAddonNode
	case RE::ENUM_FORM_ID::kAVIF:
		return "kAVIF";  // 62 AVIF X ActorValueInfo
	case RE::ENUM_FORM_ID::kCAMS:
		return "kCAMS";  // 63 CAMS X BGSCameraShot
	case RE::ENUM_FORM_ID::kCPTH:
		return "kCPTH";  // 64 CPTH X BGSCameraPath
	case RE::ENUM_FORM_ID::kVTYP:
		return "kVTYP";  // 65 VTYP X BGSVoiceType
	case RE::ENUM_FORM_ID::kMATT:
		return "kMATT";  // 66 MATT X BGSMaterialType
	case RE::ENUM_FORM_ID::kIPCT:
		return "kIPCT";  // 67 IPCT X BGSImpactData
	case RE::ENUM_FORM_ID::kIPDS:
		return "kIPDS";  // 68 IPDS X BGSImpactDataSet
	case RE::ENUM_FORM_ID::kARMA:
		return "kARMA";  // 69 ARMA X TESObjectARMA
	case RE::ENUM_FORM_ID::kECZN:
		return "kECZN";  // 6A ECZN X BGSEncounterZone
	case RE::ENUM_FORM_ID::kLCTN:
		return "kLCTN";  // 6B LCTN X BGSLocation
	case RE::ENUM_FORM_ID::kMESG:
		return "kMESG";  // 6C MESG X BGSMessage
	case RE::ENUM_FORM_ID::kRGDL:
		return "kRGDL";  // 6D RGDL
	case RE::ENUM_FORM_ID::kDOBJ:
		return "kDOBJ";  // 6E DOBJ X BGSDefaultObjectManager
	case RE::ENUM_FORM_ID::kDFOB:
		return "kDFOB";  // 6F DFOB X BGSDefaultObject
	case RE::ENUM_FORM_ID::kLGTM:
		return "kLGTM";  // 70 LGTM X BGSLightingTemplate
	case RE::ENUM_FORM_ID::kMUSC:
		return "kMUSC";  // 71 MUSC X BGSMusicType
	case RE::ENUM_FORM_ID::kFSTP:
		return "kFSTP";  // 72 FSTP X BGSFootstep
	case RE::ENUM_FORM_ID::kFSTS:
		return "kFSTS";  // 73 FSTS X BGSFootstepSet
	case RE::ENUM_FORM_ID::kSMBN:
		return "kSMBN";  // 74 SMBN X BGSStoryManagerBranchNode
	case RE::ENUM_FORM_ID::kSMQN:
		return "kSMQN";  // 75 SMQN X BGSStoryManagerQuestNode
	case RE::ENUM_FORM_ID::kSMEN:
		return "kSMEN";  // 76 SMEN X BGSStoryManagerEventNode
	case RE::ENUM_FORM_ID::kDLBR:
		return "kDLBR";  // 77 DLBR X BGSDialogueBranch
	case RE::ENUM_FORM_ID::kMUST:
		return "kMUST";  // 78 MUST X BGSMusicTrackFormWrapper
	case RE::ENUM_FORM_ID::kDLVW:
		return "kDLVW";  // 79 DLVW
	case RE::ENUM_FORM_ID::kWOOP:
		return "kWOOP";  // 7A WOOP X TESWordOfPower
	case RE::ENUM_FORM_ID::kSHOU:
		return "kSHOU";  // 7B SHOU X TESShout
	case RE::ENUM_FORM_ID::kEQUP:
		return "kEQUP";  // 7C EQUP X BGSEquipSlot
	case RE::ENUM_FORM_ID::kRELA:
		return "kRELA";  // 7D RELA X BGSRelationship
	case RE::ENUM_FORM_ID::kSCEN:
		return "kSCEN";  // 7E SCEN X BGSScene
	case RE::ENUM_FORM_ID::kASTP:
		return "kASTP";  // 7F ASTP X BGSAssociationType
	case RE::ENUM_FORM_ID::kOTFT:
		return "kOTFT";  // 80 OTFT X BGSOutfit
	case RE::ENUM_FORM_ID::kARTO:
		return "kARTO";  // 81 ARTO X BGSArtObject
	case RE::ENUM_FORM_ID::kMATO:
		return "kMATO";  // 82 MATO X BGSMaterialObject
	case RE::ENUM_FORM_ID::kMOVT:
		return "kMOVT";  // 83 MOVT X BGSMovementType
	case RE::ENUM_FORM_ID::kSNDR:
		return "kSNDR";  // 84 SNDR X BGSSoundDescriptorForm
	case RE::ENUM_FORM_ID::kDUAL:
		return "kDUAL";  // 85 DUAL X BGSDualCastData
	case RE::ENUM_FORM_ID::kSNCT:
		return "kSNCT";  // 86 SNCT X BGSSoundCategory
	case RE::ENUM_FORM_ID::kSOPM:
		return "kSOPM";  // 87 SOPM X BGSSoundOutput
	case RE::ENUM_FORM_ID::kCOLL:
		return "kCOLL";  // 88 COLL X BGSCollisionLayer
	case RE::ENUM_FORM_ID::kCLFM:
		return "kCLFM";  // 89 CLFM X BGSColorForm
	case RE::ENUM_FORM_ID::kREVB:
		return "kREVB";  // 8A REVB X BGSReverbParameters
	case RE::ENUM_FORM_ID::kPKIN:
		return "kPKIN";  // 8B PKIN X BGSPackIn
	case RE::ENUM_FORM_ID::kRFGP:
		return "kRFGP";  // 8C RFGP
	case RE::ENUM_FORM_ID::kAMDL:
		return "kAMDL";  // 8D AMDL X BGSAimModel
	case RE::ENUM_FORM_ID::kLAYR:
		return "kLAYR";  // 8E LAYR
	case RE::ENUM_FORM_ID::kCOBJ:
		return "kCOBJ";  // 8F COBJ X BGSConstructibleObject
	case RE::ENUM_FORM_ID::kOMOD:
		return "kOMOD";  // 90 OMOD X BGSMod::Attachment::Mod
	case RE::ENUM_FORM_ID::kMSWP:
		return "kMSWP";  // 91 MSWP X BGSMaterialSwap
	case RE::ENUM_FORM_ID::kZOOM:
		return "kZOOM";  // 92 ZOOM X BGSZoomData
	case RE::ENUM_FORM_ID::kINNR:
		return "kINNR";  // 93 INNR X BGSInstanceNamingRules
	case RE::ENUM_FORM_ID::kKSSM:
		return "kKSSM";  // 94 KSSM X BGSSoundKeywordMapping
	case RE::ENUM_FORM_ID::kAECH:
		return "kAECH";  // 95 AECH X BGSAudioEffectChain
	case RE::ENUM_FORM_ID::kSCCO:
		return "kSCCO";  // 96 SCCO
	case RE::ENUM_FORM_ID::kAORU:
		return "kAORU";  // 97 AORU X BGSAttractionRule
	case RE::ENUM_FORM_ID::kSCSN:
		return "kSCSN";  // 98 SCSN X BGSSoundCategorySnapshot
	case RE::ENUM_FORM_ID::kSTAG:
		return "kSTAG";  // 99 STAG X BGSSoundTagSet
	case RE::ENUM_FORM_ID::kNOCM:
		return "kNOCM";  // 9A NOCM
	case RE::ENUM_FORM_ID::kLENS:
		return "kLENS";  // 9B LENS X BGSLensFlare
	case RE::ENUM_FORM_ID::kLSPR:
		return "kLSPR";  // 9C LSPR
	case RE::ENUM_FORM_ID::kGDRY:
		return "kGDRY";  // 9D GDRY X BGSGodRays
	case RE::ENUM_FORM_ID::kOVIS:
		return "kOVIS";  // 9E OVIS
	default:
		return "wtf";
	}
}

class ActorLoadHandler :
	public RE::BSTEventSink<RE::TESObjectLoadedEvent>
{
public:
	[[nodiscard]] static ActorLoadHandler* GetSingleton()
	{
		static ActorLoadHandler singleton;
		return std::addressof(singleton);
	}

	RE::BSEventNotifyControl ProcessEvent(
		const RE::TESObjectLoadedEvent& a_event,
		RE::BSTEventSource<RE::TESObjectLoadedEvent>*) override
	{
		RE::Actor* maybeActor = RE::TESForm::GetFormByID<RE::Actor>(a_event.formId);

		if (maybeActor) {
			logger::info("Loaded possible actor, total: {:p} {}", (void*)&maybeActor, ActorList::getSingleton()->actorList.size());
			ActorList::getSingleton()->actorList.push_back(maybeActor);
		}

		return RE::BSEventNotifyControl::kContinue;
	}
};