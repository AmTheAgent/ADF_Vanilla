	////////////////////
	///CUSTOM UNITS/////
	////////////////////
	
	
	/*extern*/class B_Soldier_F;
	/*extern*/class B_Soldier_base_F;
	/*extern*/class B_Soldier_SL_F;
	/*extern*/class B_Soldier_TL_F;
	/*extern*/class B_medic_F;
	/*extern*/class B_Soldier_LAT_F;
	/*extern*/class B_Soldier_GL_F;
	/*extern*/class B_Soldier_AR_F;
	/*extern*/class B_Helipilot_F;
	
	/*Layout Order: MCAM/ACAM/JCAM/DPCU/DPDU/MTP/RAAF/SASR*/

	
	///MCAM///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Underwear_F: B_Soldier_F 
	
	{
		author = "AmTheAgent";
		_generalMacro = "ADF_Underwear_F";
		scope = 1;
		scopeCurator = 0;
		displayName = "TEST: Underwear";
		model = "\A3\Characters_F\Common\basicbody";
		uniformClass = "ADF_BasicBody";
		modelSides[] = {3, 1, 0, 2};
		hiddenSelections[] = {"camo1","insignia"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\basicbody_green_co.paa"};
	};
	
	class ADF_SL_M : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_mcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_Base_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Squad Leader (M)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_mcamo_co.paa"};
		uniformClass = "ADF_Base_UM";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							SL_Equip
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							SL_Equip
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECHL_M", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECHL_M", 
							Standard_Equipment
						};   


	};
	
	class ADF_TL_M : B_Soldier_TL_F
	{
		faction = "ADF_Faction_mcam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_TL_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Team Leader (M)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_mcamo_co.paa"};
		uniformClass = "ADF_BaseSS_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECHL_M", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECHL_M", 
							Standard_Equipment
					
						}; 
		
	};	
	
	class ADF_CLS_M : B_medic_F
	{
		faction = "ADF_Faction_mcam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_CLS_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Medic (M)";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_mcamo_co.paa"};
		uniformClass = "ADF_TShirt_UM";
		backpack = "ADF_KitbagMed_M";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_M",
							"ADF_ECHL_M", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_M",
							"ADF_ECHL_M", 
							Standard_Equipment
						
						}; 
		
	};
	
	
	
	class ADF_RFAT_M : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_mcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFAT_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman AT (M)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_mcamo_co.paa"};
		uniformClass = "ADF_Base_UM";
		backpack = "ADF_KitbagAT_M";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECHL_M", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECHL_M", 
							Standard_Equipment
					
						};   


	};
	
	class ADF_RFL_M : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_mcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFAT_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman (M)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_mcamo_co.paa"};
		uniformClass = "ADF_Base_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_M",
							"ADF_ECH_M", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_M",
							"ADF_ECH_M", 
							Standard_Equipment
					
						};   


	};
	
	
	
	class ADF_GL_M : B_Soldier_GL_F	
	{
	
		faction = "ADF_Faction_mcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_GL_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman GL (M)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_mcamo_co.paa"};
		uniformClass = "ADF_BaseSS_UM";
		backpack = "ADF_CompactGL_M";
		weapons[] = {"arifle_SPAR_01_GL_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECH_M", 
							Standard_Equipment
						
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECH_M", 
							Standard_Equipment
						
						};   


	};
	
	class ADF_AR_M : B_Soldier_AR_F	
	{
	
		faction = "ADF_Faction_mcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_AR_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Autorifleman (M)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_mcamo_co.paa"};
		uniformClass = "ADF_BaseSS_UM";
		backpack = "";
		weapons[] = {"LMG_03_F_ARCO", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"LMG_03_F_ARCO","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECH_M", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_M",
							"ADF_ECH_M", 
							Standard_Equipment
							
						};   


	};
	
	///ACAM////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_SL_A : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_acam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SL_A";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Squad Leader (A)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_altcam1_co.paa"};
		uniformClass = "ADF_Altis_UM";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							SL_Equip
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							SL_Equip
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECHL_A", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECHL_A", 
							Standard_Equipment
						};   


	};
	
	class ADF_TL_A : B_Soldier_TL_F
	{
		faction = "ADF_Faction_acam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_TL_A";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Team Leader (A)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_altcam1_co.paa"};
		uniformClass = "ADF_AltisSS_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECHL_A", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECHL_A", 
							Standard_Equipment
					
						}; 
		
	};	
	
	class ADF_CLS_A : B_medic_F
	{
		faction = "ADF_Faction_acam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_CLS_A";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Medic (A)";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_altcam1_co.paa"};
		uniformClass = "ADF_AltisTS_UM";
		backpack = "ADF_KitbagMed_A";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_A",
							"ADF_ECHL_A", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_A",
							"ADF_ECHL_A", 
							Standard_Equipment
						
						}; 
		
	};
	
	
	
	class ADF_RFAT_A : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_acam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFAT_A";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman AT (A)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_altcam1_co.paa"};
		uniformClass = "ADF_Altis_UM";
		backpack = "ADF_KitbagAT_A";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECHL_A", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECHL_A", 
							Standard_Equipment
					
						};   


	};
	
	class ADF_RFL_A : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_acam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFL_A";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman (A)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_altcam1_co.paa"};
		uniformClass = "ADF_Altis_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_A",
							"ADF_ECH_A", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_A",
							"ADF_ECH_A", 
							Standard_Equipment
					
						};   


	};
	
	
	
	class ADF_GL_A : B_Soldier_GL_F	
	{
	
		faction = "ADF_Faction_acam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_GL_A";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman GL (A)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_altcam1_co.paa"};
		uniformClass = "ADF_AltisSS_UM";
		backpack = "ADF_CompactGL_A";
		weapons[] = {"arifle_SPAR_01_GL_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECH_A", 
							Standard_Equipment
						
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECH_A", 
							Standard_Equipment
						
						};   


	};
	
class ADF_AR_A : B_Soldier_AR_F	
	{
	
		faction = "ADF_Faction_acam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_AR_A";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Autorifleman (A)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_altcam1_co.paa"};
		uniformClass = "ADF_AltisSS_UM";
		backpack = "";
		weapons[] = {"LMG_03_F_ARCO", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"LMG_03_F_ARCO","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECH_A", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_A",
							"ADF_ECH_A", 
							Standard_Equipment
							
						};   


	};

	/////JCAM///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
	class ADF_SL_J : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_jcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SL_J";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Squad Leader (J)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody_J";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_jcam_co.paa"};
		uniformClass = "ADF_jcam_UM";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							SL_Equip
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							SL_Equip
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECHL_J", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECHL_J", 
							Standard_Equipment
						};   


	};
	
		class ADF_TL_J : B_Soldier_TL_F
	{
		faction = "ADF_Faction_jcam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_TL_J";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Team Leader (J)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody_J";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_jcam_co.paa"};
		uniformClass = "ADF_jcamSS_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECHL_J", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECHL_J", 
							Standard_Equipment
					
						}; 
		
	};
	
	class ADF_CLS_J : B_medic_F
	{
		faction = "ADF_Faction_jcam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_CLS_J";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Medic (J)";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		nakedUniform = "ADF_BasicBody_J";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_jcam_co.paa"};
		uniformClass = "ADF_jcamTS_UM";
		backpack = "ADF_KitbagMed_J";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_J" ,
							"ADF_ECHL_J", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_J",
							"ADF_ECHL_J", 
							Standard_Equipment
						
						}; 
		
	};
	
	class ADF_RFAT_J : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_jcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFAT_J";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman AT (J)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody_J";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_jcam_co.paa"};
		uniformClass = "ADF_jcam_UM";
		backpack = "ADF_KitbagAT_J";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECHL_J", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECHL_J", 
							Standard_Equipment
					
						};   


	};
	
	class ADF_RFL_J : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_jcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFL_J";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman (J)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody_J";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_jcam_co.paa"};
		uniformClass = "ADF_jcam_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_J",
							"ADF_ECH_J", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_J",
							"ADF_ECH_J", 
							Standard_Equipment
					
						};   


	};
	
	class ADF_GL_J : B_Soldier_GL_F	
	{
	
		faction = "ADF_Faction_jcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_GL_J";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman GL (J)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody_J";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_jcam_co.paa"};
		uniformClass = "ADF_jcamSS_UM";
		backpack = "ADF_CompactGL_J";
		weapons[] = {"arifle_SPAR_01_GL_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECH_J", 
							Standard_Equipment
						
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECH_J", 
							Standard_Equipment
						
						};   


	};
	
	class ADF_AR_J : B_Soldier_AR_F	
	{
	
		faction = "ADF_Faction_jcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_AR_J";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Autorifleman (J)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody_J";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_jcam_co.paa"};
		uniformClass = "ADF_jcamSS_UM";
		backpack = "";
		weapons[] = {"LMG_03_F_ARCO", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"LMG_03_F_ARCO","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_J", 
							"ADF_ECH_J", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_J",
							"ADF_ECH_J", 
							Standard_Equipment
							
						};   


	};	

	
	///DPCU////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
	class ADF_SL_AC : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_auscam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SL_AC";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Squad Leader (DPCU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_auscam_co.paa"};
		uniformClass = "ADF_auscam_UM";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							SL_Equip
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							SL_Equip
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECHL_AC", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECHL_AC", 
							Standard_Equipment
						};   


	};
	
	class ADF_TL_AC : B_Soldier_TL_F
	{
		faction = "ADF_Faction_auscam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_TL_AC";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Team Leader (DPCU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_auscam_co.paa"};
		uniformClass = "ADF_auscamSS_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECHL_AC", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECHL_AC", 
							Standard_Equipment
					
						}; 
		
	};
	
	class ADF_CLS_AC : B_medic_F
	{
		faction = "ADF_Faction_auscam";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_CLS_AC";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Medic (DPCU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_auscam_co.paa"};
		uniformClass = "ADF_auscamTS_UM";
		backpack = "ADF_KitbagMed_AC";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_AC" ,
							"ADF_ECHL_AC", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_AC",
							"ADF_ECHL_AC", 
							Standard_Equipment
						
						}; 
		
	};
	
		class ADF_RFAT_AC : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_auscam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFAT_AC";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman AT (DPCU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_auscam_co.paa"};
		uniformClass = "ADF_auscam_UM";
		backpack = "ADF_KitbagAT_AC";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECHL_AC", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECHL_AC", 
							Standard_Equipment
					
						};   


	};
	
	
	class ADF_RFL_AC : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_auscam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFL_AC";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman (DPCU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_auscam_co.paa"};
		uniformClass = "ADF_auscam_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_AC",
							"ADF_ECH_AC", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_AC",
							"ADF_ECH_AC", 
							Standard_Equipment
					
						};   


	};
	
	class ADF_GL_AC : B_Soldier_GL_F	
	{
	
		faction = "ADF_Faction_auscam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_GL_AC";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman GL (DPCU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_auscam_co.paa"};
		uniformClass = "ADF_auscamSS_UM";
		backpack = "ADF_CompactGL_AC";
		weapons[] = {"arifle_SPAR_01_GL_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECH_AC", 
							Standard_Equipment
						
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECH_AC", 
							Standard_Equipment
						
						};   


	};
	
	class ADF_AR_AC : B_Soldier_AR_F	
	{
	
		faction = "ADF_Faction_auscam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_AR_AC";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Autorifleman (DPCU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_auscam_co.paa"};
		uniformClass = "ADF_auscamSS_UM";
		backpack = "";
		weapons[] = {"LMG_03_F_ARCO", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"LMG_03_F_ARCO","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_AC", 
							"ADF_ECH_AC", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_AC",
							"ADF_ECH_AC", 
							Standard_Equipment
							
						};   


	};
	
	
	
	
	
	
	
	
	
		
	
	///MTP///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	class ADF_SL_MTP : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_mtp";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SL_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Squad Leader (MTP)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_u_MTP_co.paa"};
		uniformClass = "ADF_mtp_UM";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							SL_Equip
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							SL_Equip
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECHL_MTP", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECHL_MTP", 
							Standard_Equipment
						};   


	};
	
	class ADF_TL_MTP : B_Soldier_TL_F
	{
		faction = "ADF_Faction_mtp";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_TL_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Team Leader (MTP)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_u_MTP_co.paa"};
		uniformClass = "ADF_mtpSS_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECHL_MTP", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECHL_MTP", 
							Standard_Equipment
					
						}; 
		
	};	
	
	class ADF_CLS_MTP : B_medic_F
	{
		faction = "ADF_Faction_mtp";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_CLS_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Medic (MTP)";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_u_MTP_co.paa"};
		uniformClass = "ADF_mtpTS_UM";
		backpack = "ADF_KitbagMed_MTP";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
						
						}; 
		
	};
	
	class ADF_RFAT_MTP : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_mtp";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFAT_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman AT (MTP)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_u_MTPTP_co.paa"};
		uniformClass = "ADF_mtp_UM";
		backpack = "ADF_KitbagAT_MTP";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","launch_NLAW_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECHL_MTP", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECHL_MTP", 
							Standard_Equipment
					
						};   


	};
	
	class ADF_RFL_MTP : B_Soldier_LAT_F	
	{
	
		faction = "ADF_Faction_mtp";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_RFAT_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman (MTP)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_u_MTPTP_co.paa"};
		uniformClass = "ADF_mtp_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
					
						};   


	};
	
	
	
	class ADF_GL_MTP : B_Soldier_GL_F	
	{
	
		faction = "ADF_Faction_mtp";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_GL_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Rifleman GL (MTP)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_u_MTPTP_co.paa"};
		uniformClass = "ADF_mtpSS_UM";
		backpack = "ADF_CompactGL_MTP";
		weapons[] = {"arifle_SPAR_01_GL_blk_arco", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_GL_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
						
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
						
						};   


	};
	
class ADF_AR_MTP : B_Soldier_AR_F	
	{
	
		faction = "ADF_Faction_mtp";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_AR_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Autorifleman (MTP)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_u_MTPTP_co.paa"};
		uniformClass = "ADF_mtpSS_UM";
		backpack = "";
		weapons[] = {"LMG_03_F_ARCO", "hgun_Pistol_heavy_01_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"LMG_03_F_ARCO","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							"200Rnd_556x45_Box_F",
							"200Rnd_556x45_Box_F",
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_MTP",
							"ADF_ECH_MTP", 
							Standard_Equipment
							
						};   


	};
	
	
	///DPDU///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	class ADF_SL_D : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_dpdu";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SL_D";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Squad Leader (DPDU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_dpdu_co.paa"};
		uniformClass = "ADF_dpdu_UM";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							SL_Equip
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							SL_Equip
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_DPDU",
							"ADF_ECHL_DPDU", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_DPDU",
							"ADF_ECHL_DPDU", 
							Standard_Equipment
						};   


	};
	
	class ADF_TL_D : B_Soldier_TL_F
	{
		faction = "ADF_Faction_dpdu";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_TL_D";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Team Leader (DPDU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_dpdu_co.paa"};
		uniformClass = "ADF_dpduSS_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrier_DPDU",
							"ADF_ECHL_DPDU", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrier_DPDU",
							"ADF_ECHL_DPDU", 
							Standard_Equipment
					
						}; 
		
	};	
	
	class ADF_CLS_D : B_medic_F
	{
		faction = "ADF_Faction_dpdu";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_CLS_D";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ADF Medic (DPDU)";
		model = "\A3\characters_F\BLUFOR\b_soldier_02.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_dpdu_co.paa"};
		uniformClass = "ADF_dpduTS_UM";
		backpack = "ADF_KitbagMed_D";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
						
						};                
        RespawnItems[] = 
						{
							Standard_Meds
					
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarrierK_DPDU",
							"ADF_ECH_DPDU", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarrierK_DPDU",
							"ADF_ECH_DPDU", 
							Standard_Equipment
						
						}; 
		
	};
	
///RAAF//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_S_Helipilot : B_Helipilot_F	
	{
	
		faction = "ADF_Faction_RAAF";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_S_Helipilot";
		side = 1;
		scope = 0;
		scopeArsenal = 2;
		scopeCurator = 2;
		nakedUniform = "ADF_BasicBody";
		displayName = "ADF Helipilot 'Barry'";
		uniformClass = "ADF_S_HeliPilotCoveralls";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_sagecoveralls_co.paa"};
		weapons[] = {"hgun_Rook40_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"hgun_Rook40_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag"
						};
						
		respawnMagazines[] =
						{
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag"
						};
						
		linkedItems[] = 
						{	
							"V_Rangemaster_belt",
							"H_PilotHelmetHeli_O", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"V_Rangemaster_belt",
							"H_PilotHelmetHeli_O", 
							Standard_Equipment
							
						};   


	};
	
	class ADF_SP_Helipilot : B_Helipilot_F	
	{
	
		faction = "ADF_Faction_RAAF";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SP_Helipilot";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		nakedUniform = "ADF_BasicBody";
		displayName = "ADF Helipilot";
		uniformClass = "ADF_S_HeliPilotCoveralls";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_sagecoverallsP_co.paa"};
		weapons[] = {"hgun_Rook40_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"hgun_Rook40_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag"
						};
						
		respawnMagazines[] =
						{
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag"
						};
						
		linkedItems[] = 
						{	
							"V_Rangemaster_belt",
							"H_PilotHelmetHeli_O", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"V_Rangemaster_belt",
							"H_PilotHelmetHeli_O", 
							Standard_Equipment
							
						};   


	};
	
	class ADF_SP_Helicrew : B_Helipilot_F	
	{
	
		faction = "ADF_Faction_RAAF";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SP_Helicrew";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		nakedUniform = "ADF_BasicBody";
		displayName = "ADF Helicrew";
		uniformClass = "ADF_S_HeliPilotCoveralls";
		model = "\A3\Characters_F\Common\coveralls.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_sagecoverallsP_co.paa"};
		weapons[] = {"hgun_Rook40_F","Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"hgun_Rook40_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
					
						};                
        RespawnItems[] = 
						{
							Standard_Meds
							
						};  
		magazines[] = 	{
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag"
						};
						
		respawnMagazines[] =
						{
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag",
							"16Rnd_9x21_Mag"
						};
						
		linkedItems[] = 
						{	
							"V_Rangemaster_belt",
							"H_CrewHelmetHeli_O", 
							Standard_Equipment
							
						};
        respawnLinkedItems[] = 
						{	
							"V_Rangemaster_belt",
							"H_CrewHelmetHeli_O", 
							Standard_Equipment
							
						};   


	};
	
	/*
	class ADF_SL_G : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_dcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SL_G";
		side = 1;
		scope = 1;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Test 1";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		uniformClass = "ADF_green_UM";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_green_co.paa"};
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"",
							"", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"",
							"", 
							Standard_Equipment
						};   


	};
	
	
	
	class ADF_SL_B : B_Soldier_SL_F	
	{
	
		faction = "ADF_Faction_mcam";
		vehicleClass = "Men";
		author = "AmTheAgent";
		_generalMacro = "ADF_SL_B";
		side = 1;
		scope = 1;
		scopeArsenal = 2;
		scopeCurator = 2;
		icon =  "iconManLeader";
		backpack = "";
		displayName = "ADF Test 2";
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		uniformClass = "ADF_black_UM";
		hiddenSelections[] = {"Camo", "insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_u_black_co.paa"};
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds,
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds,
							
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"",
							"", 
							Standard_Equipment
							
						};              
        respawnLinkedItems[] = 
						{	
							"",
							"", 
							Standard_Equipment
						};   

	};
	*/
	
	///SASR/////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_sasrTL_M : B_Soldier_TL_F
	{
		faction = "ADF_Faction_raaf";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_sasrTL_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "SASR Team Leader (DPCU)";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_soldier_01_clothing_co.paa"};
		uniformClass = "ADF_sasr_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarriersasr_DPCU",
							"ADF_ECHL_AC", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarriersasr_DPCU",
							"ADF_ECHL_AC", 
							Standard_Equipment
					
						}; 
		
	};

	class ADF_sasrTrooper_M : B_Soldier_LAT_F
	{
		faction = "ADF_Faction_raaf";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_sasrTrooper_M";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "SASR Trooper (DPCU)";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_soldier_01_clothing_co.paa"};
		uniformClass = "ADF_sasr_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarriersasr_DPCU",
							"ADF_ECH_AC", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarriersasr_DPCU",
							"ADF_ECH_AC", 
							Standard_Equipment
					
						}; 
		
	};	
	
	class ADF_sasrTL_MTP : B_Soldier_TL_F
	{
		faction = "ADF_Faction_raaf";
		author = "AmTheAgent";
		vehicleClass = "Men";
		_generalMacro = "ADF_sasrTL_MTP";
		side = 1;
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "SASR Team Leader (MTP)";
		model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
		nakedUniform = "ADF_BasicBody";
		hiddenSelections[] = {"Camo","Insignia"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_soldier_02dk_clothing_co.paa"};
		uniformClass = "ADF_sasrMTP_UM";
		backpack = "";
		weapons[] = {"arifle_SPAR_01_blk_arco", "hgun_Pistol_heavy_01_F", "Throw", "Put","Rangefinder"};
		respawnWeapons[] = {"arifle_SPAR_01_blk_arco","hgun_Pistol_heavy_01_F","Throw","Put","Rangefinder"};
		Items[] = 		{
							Standard_Meds
							
						};                
        RespawnItems[] = 
						{
							Standard_Meds
						
						};  
		magazines[] = 	{
							Standard_Mags,
							Std_Pistol
						};
						
		respawnMagazines[] =
						{
							Standard_Mags,
							Std_Pistol
						};
						
		linkedItems[] = 
						{	
							"ADF_PlateCarriersasr_MTP",
							"H_HelmetB_light_black", 
							Standard_Equipment
				
						};              
        respawnLinkedItems[] = 
						{	
							"ADF_PlateCarriersasr_MTP",
							"H_HelmetB_light_black", 
							Standard_Equipment
					
						}; 
		
	};