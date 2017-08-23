class CfgPatches
{
	class 85thcrates
	{
		units[]=
		{
		"85th_dummy_crate",
		"85th_supply_crate",
		"85th_firstaid_kit",
		"85th_demolitions_kit"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Exp"
		};
	};
};
class CfgVehicles
{
	class B_supplyCrate_F;
	class 85th_dummy_crate: B_supplyCrate_F
	{
		scope=1;
		maximumLoad=9999999999;
		transportMaxWeapons=9999999999;
		transportMaxMagazines=9999999999;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class 85th_supply_crate: 85th_dummy_crate
	{
		scope=2;
		curatorScope=2;
		ace_cargo_size = 4;
        	ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        	ace_dragging_dragPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        	ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        	ace_dragging_carryPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        	ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Supply Box [85th]";
		class TransportMagazines{
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 12;
			};
		};
		class TransportWeapons{
			class _xx_arifle_MX_F {
				weapon = "arifle_MX_F";
				count = 2;
			};
		};
		class TransportItems{
			class _xx_FirstAidKit {
				name = "FirstAidKit";
				count = 10;
			};
		};
		class TransportBackpacks{
			class _xx_B_Kitbag_mcamo {
				backpack = "B_Kitbag_mcamo";
				count = 2;
			};
		};
	};
	class 85th_firstaid_kit: 85th_dummy_crate
	{
		scope=2;
		curatorScope=2;
		ace_cargo_size = 1;
        	ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        	ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        	ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        	ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        	ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="FirstAid Kit [85th]";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\85thcrates\data\medicalCase_CO.paa"
		};
		class TransportItems{
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_epinephrine {    
				name = "ACE_epinephrine";
				count = 10;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 10;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 20;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 8;
			};
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 8;
			};
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 8;
			};
		};
	};
	class 85th_demolitions_kit: 85th_dummy_crate
	{
		scope=2;
		curatorScope=2;
		ace_cargo_size = 1;
        	ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        	ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        	ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        	ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        	ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Demolitions Kit [85th]";
		model = "\A3\Weapons_F\Ammoboxes\Proxy_UsBasicExplosives.p3d";
		class TransportMagazines{
			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 4;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag {
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 2;
			};
			class _xx_APERSTripMine_Wire_Mag {
				magazine = "APERSTripMine_Wire_Mag";
				count = 4;
			};
			class _xx_Claymore_F {
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 4;
			};
			class _xx_SatchelCharge_Remote_Mag {
				magazine = "SatchelCharge_Remote_Mag";
				count = 2;
			};
		};
		class TransportWeapons{
			class _xx_ACE_VMM3 {
				weapon = "ACE_VMM3";
				count = 1;
			};
		};
		class TransportItems{
			class _xx_ACE_DefusalKit {
				name = "ACE_DefusalKit";
				count = 1;
			};
			class _xx_ACE_M26_Clacker {
				name = "ACE_M26_Clacker";
				count = 1;
			};
		};
	};
};
class cfgMods
{
	author="76561198038224440";
	timepacked="1430934098";
};
