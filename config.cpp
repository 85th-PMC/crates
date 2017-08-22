class CfgPatches
{
	class 85thcrates
	{
		units[]=
		{
		"85th_supply_crate"
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
	class 45KO2_supply_crate: B_supplyCrate_F
	{
		scope=2;
		displayName="Supply Box [85th]";
		maximumLoad=9999999999;
		transportMaxWeapons=9999999999;
		transportMaxMagazines=9999999999;
		supplyRadius=-1;
		memoryPointSupply="doplnovani";
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
};
class cfgMods
{
	author="76561198038224440";
	timepacked="1430934098";
};
