	////////////////////
	///CUSTOM HELMETS///
	////////////////////
	
	/*extern*/class HelmetBase;
	/*extern*/class HeadgearItem;
	/*extern*/class H_Booniehat_mcamo;
	
	/*Layout Order: MCAM/ACAM/JCAM/DPCU/DPDU/MTP/RAAF/SASR*/
 
	///MCAM//////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_ECHL_M : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF MCAM ECH Light";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_equip1_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.400000;
				};
			};
		};
	};
		
	class ADF_ECH_M : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF MCAM ECH Ballistic";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_equip1_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.300000;
				};
			};
		};	
	};
	
	class ADF_Booniehat_M: H_Booniehat_mcamo 
	
	{
		author = "AmTheAgent";
		_generalMacro = "ADF_Booniehat_M";
		scope = 2;
		displayName = "ADF MCAM Boonie";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mcambooniehat_co.paa"};
		
	};
	
	///ACAM/////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_ECHL_A : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF ACAM ECH Light";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_altequip1_co.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.400000;
				};
			};
		};
	};	
	
	class ADF_ECH_A : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF ACAM ECH Ballistic";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_altequip1_co.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.300000;
				};
			};
		};	
	};
	
	class ADF_Booniehat_A: H_Booniehat_mcamo 
	
	{
		author = "AmTheAgent";
		_generalMacro = "ADF_Booniehat_A";
		scope = 2;
		displayName = "ADF ACAM Boonie";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_acambooniehat_co.paa"};
		
	};
	
	///JCAM////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_ECHL_J : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF JCAM ECH Light";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_jcamequip1_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.400000;
				};
			};
		};
	};
	
		class ADF_ECH_J : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF JCAM ECH Ballistic";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_jcamequip1_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.300000;
				};
			};
		};	
	};
	
	class ADF_Booniehat_J: H_Booniehat_mcamo 
	
	{
		author = "AmTheAgent";
		_generalMacro = "ADF_Booniehat_J";
		scope = 2;
		displayName = "ADF JCAM Boonie";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_jcambooniehat_co.paa"};
		
	};

	///DPCU///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_ECHL_AC : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF DPCU ECH Light";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_auscamequip1_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.400000;
				};
			};
		};
	};
	
	class ADF_ECH_AC : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF DPCU ECH Ballistic";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_auscamequip1_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.300000;
				};
			};
		};	
	};
	
	class ADF_Booniehat_AC: H_Booniehat_mcamo 
	
	{
		author = "AmTheAgent";
		_generalMacro = "ADF_Booniehat_AC";
		scope = 2;
		displayName = "ADF DPCU Boonie";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_auscambooniehat_co.paa"};
		
	};
	
	///DPDU//////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_ECHL_DPDU : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF DPDU ECH Light";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_dpduequip_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.400000;
				};
			};
		};
	};
	
		class ADF_ECH_DPDU : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF DPDU ECH Ballistic";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_dpduequip_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.300000;
				};
			};
		};	
	};
	
	class ADF_Booniehat_DPDU: H_Booniehat_mcamo 
	
	{
		author = "AmTheAgent";
		_generalMacro = "ADF_Booniehat_DPDU";
		scope = 2;
		displayName = "ADF DPDU Boonie";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_dpdubooniehat_co.paa"};
		
	};
	
	///MTP//////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_ECHL_MTP : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF MTP ECH Light";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_equipmtp_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.400000;
				};
			};
		};
	};
	
		class ADF_ECH_MTP : HelmetBase
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		weaponPoolAvailable = 1;
		displayName = "ADF MTP ECH Ballistic";
		picture = "\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_equipmtp_co1.paa"};
 
		class ItemInfo : HeadgearItem
		{
			mass = 20;
			uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[] = {3, 1};
			hiddenSelections[] = {"camo"};
		class HitpointsProtectionInfo 
			{
			class ADF_Head 
				{
					hitpointName = "HitHead";
					armor = 12;
					passThrough = 0.300000;
				};
			};
		};	
	};
	
	class ADF_Booniehat_MTP: H_Booniehat_mcamo 
	
	{
		author = "AmTheAgent";
		_generalMacro = "ADF_Booniehat_MTP";
		scope = 2;
		displayName = "ADF MTP Boonie";
		picture = "\A3\characters_f\Data\UI\icon_H_booniehat_desert_ca.paa";
		model = "\A3\Characters_F\Common\booniehat";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_booniehatmtp_co.paa"};
		
	};
	


