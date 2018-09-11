class cfgWeapons
{
	class rhs_weap_M107;
	class 85th_M107: rhs_weap_M107
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_premier";
			};
		};
	};
};

class CfgPatches
{
	class 85thcrates
	{
		units[]=
		{
		"85th_dummyCrate",
		"85th_supplyCrate",
		"85th_firstaidKit",
		"85th_demolitionsKit",
		"85th_cellsuppliesVehicle",
		"85th_cellsuppliesnVehicle",
		"85th_fixedwingSupplies",
		"85th_parachutesCrate",
		"85th_rotarySupplies",
		"85th_GPMGAmmo",
		"85th_HMGAmmo",
		"85th_GMGAmmo",
		"85th_milanAmmo",
		"85th_stingerCrate",
		"85th_L16mortarCrate",
		"85th_M107Crate"
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
	class 85th_dummyCrate: B_supplyCrate_F
	{
		scope=1;
		maximumLoad=999999;
		transportMaxWeapons=999999;
		transportMaxMagazines=999999;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		class TransportBackpacks{};
	};
	class 85th_supplyCrate: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 2;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 2, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Supply Crate [85th]";
		class TransportMagazines{
			class _xx_ACE_Chemlight_HiYellow {
				magazine = "ACE_Chemlight_HiYellow";
				count = 60;
			};
			class _xx_ACE_Chemlight_IR {
				magazine = "ACE_Chemlight_IR";
				count = 10;
			};
			class _xx_tf47_m3maaws_HE {
				magazine = "tf47_m3maaws_HE";
				count = 10;
			};
			class _xx_tf47_m3maaws_HEDP {
				magazine = "tf47_m3maaws_HEDP";
				count = 10;
			};
			class _xx_tf47_m3maaws_ILLUM {
				magazine = "tf47_m3maaws_ILLUM";
				count = 10;
			};
			class _xx_tf47_m3maaws_HEAT {
				magazine = "tf47_m3maaws_HEAT";
				count = 8;
			};
			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 6;
			};
			class _xx_ACE_HandFlare_Green {
				magazine = "ACE_HandFlare_Green";
				count = 30;
			};
			class _xx_ACE_HandFlare_Yellow {
				magazine = "ACE_HandFlare_Yellow";
				count = 30;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 8;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag {
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 6;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 20;
			};
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 60;
			};
			class _xx_rhs_mag_mk84 {
				magazine = "rhs_mag_mk84";
				count = 10;
			};
			class _xx_APERSTripMine_Wire_Mag {
				magazine = "APERSTripMine_Wire_Mag";
				count = 10;
			};
			class _xx_1Rnd_HE_Grenade_shell {
				magazine = "1Rnd_HE_Grenade_shell";
				count = 40;
			};
			class _xx_UGL_FlareGreen_F {
				magazine = "UGL_FlareGreen_F";
				count = 16;
			};
			class _xx_UGL_FlareYellow_F {
				magazine = "UGL_FlareYellow_F";
				count = 16;
			};
			class _xx_ACE_HuntIR_M203 {
				magazine = "ACE_HuntIR_M203";
				count = 8;
			};
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 30;
			};
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 10;
			};
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 30;
			};
			class _xx_ACE_M14 {
				magazine = "ACE_M14";
				count = 8;
			};
			class _xx_UK3CB_BAF_32Rnd_40mm_G_Box {
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 12;
			};
			class _xx_UK3CB_BAF_127_100Rnd {
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 16;
			};
			class _xx_UK3CB_BAF_762_200Rnd_T {
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 12;
			};
			class _xx_UK3CB_BAF_1Rnd_Milan {
				magazine = "UK3CB_BAF_1Rnd_Milan";
				count = 12;
			};

		};
		class TransportWeapons{
			class _xx_rhs_weap_rsp30_green {
				weapon = "rhs_weap_rsp30_green";
				count = 2;
			};
			class _xx_ACE_VMM3 {
				weapon = "ACE_VMM3";
				count = 2;
			};
			class _xx_tf47_m3maaws {
				weapon = "tf47_m3maaws";
				count = 1;
			};
		};
		class TransportItems{
			class _xx_tf47_optic_m3maaws {
				name = "tf47_optic_m3maaws";
				count = 1;
			};
			class _xx_Laserbatteries {
				name = "Laserbatteries";
				count = 2;
			};
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 80;
			};
			class _xx_ACE_bodyBag {
				name = "ACE_bodyBag";
				count = 16;
			};
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 20;
			};
			class _xx_ACE_DefusalKit {
				name = "ACE_DefusalKit";
				count = 2;
			};
			class _xx_ACE_EarPlugs {
				name = "ACE_EarPlugs";
				count = 4;
			};
			class _xx_ACE_EntrenchingTool {
				name = "ACE_EntrenchingTool";
				count = 4;
			};
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 60;
			};
			class _xx_ACE_HuntIR_monitor {
				name = "ACE_HuntIR_monitor";
				count = 2;
			};
			class _xx_ACE_IR_Strobe_Item {
				name = "ACE_IR_Strobe_Item";
				count = 8;
			};
			class _xx_ACE_M26_Clacker {
				name = "ACE_M26_Clacker";
				count = 2;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 80;
			};
			class _xx_ACE_RangeCard {
				name = "ACE_RangeCard";
				count = 2;
			};
			class _xx_ACE_salineIV {
				name = "ACE_salineIV";
				count = 30;
			};
			class _xx_ACE_salineIV_500 {
				name = "ACE_salineIV_500";
				count = 15;
			};
			class _xx_tfw_rf3080Item {
				name = "tfw_rf3080Item";
				count = 1;
			};
			class _xx_ACE_Tripod {
				name = "ACE_Tripod";
				count = 4;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 2;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 40;
			};
			class _xx_ACE_wirecutter {
				name = "ACE_wirecutter";
				count = 2;
			};
			class _xx_Laserdesignator_03 {
				name = "Laserdesignator_03";
				count = 2;
			};
			class _xx_ACE_Vector {
				name = "ACE_Vector";
				count = 2;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 60;
			};
			class _xx_ACE_SpareBarrel {
				name = "ACE_SpareBarrel";
				count = 4;
			};
		};
	};
	class 85th_firstaidKit: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="First Aid Kit [85th]";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\85th_CRATE\data\medicalCase_CO.paa"
		};
		class TransportItems{
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 30;
			};
			class _xx_ACE_epinephrine {    
				name = "ACE_epinephrine";
				count = 16;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 16;
			};
			class _xx_ACE_packingBandage {
				name = "ACE_packingBandage";
				count = 30;
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
	class 85th_demolitionsKit: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
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
				count = 6;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag {
				magazine = "SLAMDirectionalMine_Wire_Mag";
				count = 4;
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
				count = 4;
			};
			class _xx_APERSMineDispenser_Mag {
				magazine = "APERSMineDispenser_Mag";
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
	class 85th_cellsuppliesVehicle: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Cell Supplies (Vehicle) [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_30Rnd_762x39_Magazine {
				magazine = "30Rnd_762x39_Magazine";
				count = 8;
			};
			class _xx_tf47_m3maaws_HEDP {
				magazine = "tf47_m3maaws_HEDP";
				count = 4;
			};
			class _xx_tf47_m3maaws_HEAT {
				magazine = "tf47_m3maaws_HEAT";
				count = 2;
			};
			class _xx_tf47_m3maaws_HE {
				magazine = "tf47_m3maaws_HE";
				count = 4;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag {
				magazine = "ClaymoreDirectionalMine_Remote_Mag";
				count = 2;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_rhs_mag_mk84 {
				magazine = "rhs_mag_mk84";
				count = 2;
			};
			class _xx_ACE_HuntIR_M203 {
				magazine = "ACE_HuntIR_M203";
				count = 2;
			};
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_ACE_M14 {
				magazine = "ACE_M14";
				count = 2;
			};
		};
		class TransportWeapons{
			class _xx_bnae_rk95r_virtual {
				weapon = "bnae_rk95r_virtual";
				count = 2;
			};
			class _xx_tf47_m3maaws {
				weapon = "tf47_m3maaws";
				count = 1;
			};
			class _xx_rhs_weap_M320 {
				weapon = "rhs_weap_M320";
				count = 1;
			};
		};
		class TransportItems{
			class _xx_tf47_optic_m3maaws {
				name = "tf47_optic_m3maaws";
				count = 1;
			};
			class _xx_Laserbatteries {
				name = "Laserbatteries";
				count = 1;
			};
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 6;
			};
			class _xx_ACE_EntrenchingTool {
				name = "ACE_EntrenchingTool";
				count = 1;
			};
			class _xx_ACE_HuntIR_monitor {
				name = "ACE_HuntIR_monitor";
				count = 1;
			};
			class _xx_ACE_IR_Strobe_Item {
				name = "ACE_IR_Strobe_Item";
				count = 2;
			};
			class _xx_ACE_RangeCard {
				name = "ACE_RangeCard";
				count = 1;
			};
			class _xx_tfw_rf3080Item {
				name = "tfw_rf3080Item";
				count = 1;
			};
			class _xx_ACE_Tripod {
				name = "ACE_Tripod";
				count = 1;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACE_wirecutter {
				name = "ACE_wirecutter";
				count = 1;
			};
			class _xx_Laserdesignator_03 {
				name = "Laserdesignator_03";
				count = 1;
			};
			class _xx_ACE_Vector {
				name = "ACE_Vector";
				count = 1;
			};
			class _xx_ACE_SpareBarrel {
				name = "ACE_SpareBarrel";
				count = 1;
			};
		};
	};
	class 85th_cellsuppliesnVehicle: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Cell Supplies Night (Vehicle) [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_30Rnd_762x39_Magazine {
				magazine = "30Rnd_762x39_Magazine";
				count = 8;
			};
			class _xx_tf47_m3maaws_HEDP {
				magazine = "tf47_m3maaws_HEDP";
				count = 3;
			};
			class _xx_tf47_m3maaws_HEAT {
				magazine = "tf47_m3maaws_HEAT";
				count = 2;
			};
			class _xx_tf47_m3maaws_HE {
				magazine = "tf47_m3maaws_HE";
				count = 3;
			};
			class _xx_tf47_m3maaws_ILLUM {
				magazine = "tf47_m3maaws_ILLUM";
				count = 6;
			};
			class _xx_HandGrenade {
				magazine = "HandGrenade";
				count = 8;
			};
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 2;
			};
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 4;
			};
			class _xx_ACE_Chemlight_HiYellow {
				magazine = "ACE_Chemlight_HiYellow";
				count = 10;
			};
			class _xx_ACE_HandFlare_Yellow {
				magazine = "ACE_HandFlare_Yellow";
				count = 10;
			};
			class _xx_rhs_mag_m661_green {
				magazine = "rhs_mag_m661_green";
				count = 6;
			};
			class _xx_rhs_mag_mk84 {
				magazine = "rhs_mag_mk84";
				count = 2;
			};
			class _xx_ACE_HuntIR_M203 {
				magazine = "ACE_HuntIR_M203";
				count = 2;
			};
		};
		class TransportWeapons{
			class _xx_bnae_rk95r_virtual {
				weapon = "bnae_rk95r_virtual";
				count = 2;
			};
			class _xx_tf47_m3maaws {
				weapon = "tf47_m3maaws";
				count = 1;
			};
		};
		class TransportItems{
			class _xx_tf47_optic_m3maaws {
				name = "tf47_optic_m3maaws";
				count = 1;
			};
			class _xx_Laserbatteries {
				name = "Laserbatteries";
				count = 1;
			};
			class _xx_ACE_CableTie {
				name = "ACE_CableTie";
				count = 6;
			};
			class _xx_ACE_EntrenchingTool {
				name = "ACE_EntrenchingTool";
				count = 1;
			};
			class _xx_ACE_HuntIR_monitor {
				name = "ACE_HuntIR_monitor";
				count = 1;
			};
			class _xx_ACE_IR_Strobe_Item {
				name = "ACE_IR_Strobe_Item";
				count = 8;
			};
			class _xx_ACE_RangeCard {
				name = "ACE_RangeCard";
				count = 1;
			};
			class _xx_tfw_rf3080Item {
				name = "tfw_rf3080Item";
				count = 1;
			};
			class _xx_ACE_Tripod {
				name = "ACE_Tripod";
				count = 1;
			};
			class _xx_ToolKit {
				name = "ToolKit";
				count = 1;
			};
			class _xx_ACE_wirecutter {
				name = "ACE_wirecutter";
				count = 1;
			};
			class _xx_Laserdesignator_03 {
				name = "Laserdesignator_03";
				count = 1;
			};
			class _xx_ACE_Vector {
				name = "ACE_Vector";
				count = 1;
			};
			class _xx_ACE_MX2A {
				name = "ACE_MX2A";
				count = 1;
			};
			class _xx_ACE_SpareBarrel {
				name = "ACE_SpareBarrel";
				count = 1;
			};
			class _xx_ACE_NVG_Wide {
				name = "ACE_NVG_Wide";
				count = 4;
			};
		};
	};
	class 85th_fixedwingSupplies: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Fixed Wing Supplies [85th]";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		class TransportMagazines{
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_ACE_Chemlight_HiYellow {
				magazine = "ACE_Chemlight_HiYellow";
				count = 10;
			};
			class _xx_ACE_HandFlare_Yellow {
				magazine = "ACE_HandFlare_Yellow";
				count = 4;
			};
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
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 4;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 10;
			};
		};
	};
	class 85th_parachutesCrate: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Parachutes [85th]";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		class TransportBackpacks{
			class _xx_B_Parachute {
				backpack = "B_Parachute";
				count = 8;
			};
		};
	};
	class 85th_rotarySupplies: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Rotary Supplies [85th]";
		model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_medium_F.p3d";
		class TransportMagazines{
			class _xx_DemoCharge_Remote_Mag {
				magazine = "DemoCharge_Remote_Mag";
				count = 1;
			};
			class _xx_SmokeShellPurple {
				magazine = "SmokeShellPurple";
				count = 2;
			};
			class _xx_SmokeShellGreen {
				magazine = "SmokeShellGreen";
				count = 4;
			};
			class _xx_ACE_Chemlight_HiYellow {
				magazine = "ACE_Chemlight_HiYellow";
				count = 10;
			};
			class _xx_ACE_HandFlare_Yellow {
				magazine = "ACE_HandFlare_Yellow";
				count = 4;
			};
		};
		class TransportItems{
			class _xx_ACE_elasticBandage {
				name = "ACE_elasticBandage";
				count = 20;
			};
			class _xx_ACE_epinephrine {
				name = "ACE_epinephrine";
				count = 6;
			};
			class _xx_ACE_morphine {
				name = "ACE_morphine";
				count = 6;
			};
			class _xx_ACE_tourniquet {
				name = "ACE_tourniquet";
				count = 4;
			};
			class _xx_rhsusf_hgu56p_black {
				name = "rhsusf_hgu56p_black";
				count = 8;
			};
			class _xx_rhsusf_hgu56p_visor_black {
				name = "rhsusf_hgu56p_visor_black";
				count = 2;
			};
		};
	};
	class 85th_GPMGAmmo: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="GPMG Ammo [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_UK3CB_BAF_762_200Rnd_T {
				magazine = "UK3CB_BAF_762_200Rnd_T";
				count = 6;
			};
		};
	};
	class 85th_HMGAmmo: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="HMG Ammo [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_UK3CB_BAF_127_100Rnd {
				magazine = "UK3CB_BAF_127_100Rnd";
				count = 8;
			};
		};
	};
	class 85th_GMGAmmo: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="GMG Ammo [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_UK3CB_BAF_32Rnd_40mm_G_Box {
				magazine = "UK3CB_BAF_32Rnd_40mm_G_Box";
				count = 6;
			};
		};
	};
	class 85th_milanAmmo: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Milan Ammo [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_UK3CB_BAF_1Rnd_Milan {
				magazine = "UK3CB_BAF_1Rnd_Milan";
				count = 6;
			};
		};
	};
	class 85th_stingerCrate: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="Stinger Crate [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_rhs_fim92_mag {
				magazine = "rhs_fim92_mag";
				count = 4;
			};
		};
		class TransportWeapons{
			class _xx_rhs_weap_fim92 {
				weapon = "rhs_weap_fim92";
				count = 1;
			};
		};
	};
	class 85th_L16mortarCrate: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="L16 Crate [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportMagazines{
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_Shells {
				magazine = "UK3CB_BAF_1Rnd_81mm_Mo_Shells";
				count = 16;
			};
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_Flare_White {
				magazine = "UK3CB_BAF_1Rnd_81mm_Mo_Flare_White";
				count = 10;
			};
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White {
				magazine = "UK3CB_BAF_1Rnd_81mm_Mo_IRFlare_White";
				count = 8;
			};
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White {
				magazine = "UK3CB_BAF_1Rnd_81mm_Mo_Smoke_White";
				count = 10;
			};
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_WPSmoke_White {
				magazine = "UK3CB_BAF_1Rnd_81mm_Mo_WPSmoke_White";
				count = 10;
			};
			class _xx_UK3CB_BAF_1Rnd_81mm_Mo_Guided {
				magazine = "UK3CB_BAF_1Rnd_81mm_Mo_Guided";
				count = 2;
			};
		};
		class TransportWeapons{
			class _xx_UK3CB_BAF_L16_Tripod {
				weapon = "UK3CB_BAF_L16_Tripod";
				count = 1;
			};
			class _xx_UK3CB_BAF_L16 {
				weapon = "UK3CB_BAF_L16";
				count = 1;
			};
		};
	};
	class 85th_M107Crate: 85th_dummyCrate
	{
		scope=2;
		scopeCurator=2;
		ace_cargo_size = 1;
        ace_cargo_canLoad = 1;
		ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 1, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)
		displayName="M107 Kit [85th]";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		class TransportWeapons{
			class _xx_85th_M107 {
				weapon = "85th_M107";
				count = 1;
			};
		};
		class TransportMagazines{
			class _xx_rhsusf_mag_10Rnd_STD_50BMG_mk211 {
				magazine = "rhsusf_mag_10Rnd_STD_50BMG_mk211";
				count = 8;
			};
		};
		class TransportItems{
			class _xx_ACE_RangeCard {
				name = "ACE_RangeCard";
				count = 1;
			};
			class _xx_ACE_Kestrel4500 {
				name = "ACE_Kestrel4500";
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