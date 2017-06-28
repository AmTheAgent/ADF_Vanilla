	////////////////////
	///CUSTOM AIRUNITS//
	////////////////////
	
	/*extern*/class B_Heli_Light_01_F;
	/*extern*/class B_Heli_Transport_01_F;
	/*extern*/class I_Heli_Transport_02_F;
	/*extern*/class B_Heli_Transport_03_unarmed_F;
	/*extern*/class B_Heli_Transport_03_F;
	/*extern*/class B_Heli_Light_01_dynamicLoadout_F;
	
	
	
	///MCAM/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Heli_M_TP : B_Heli_Light_01_F  
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_mcam";
		displayName = "ADF MH-6 (MCAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_ext_co.paa"};

	};
	

	class ADF_Heli_M_Armed : B_Heli_Light_01_dynamicLoadout_F
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_mcam";
		displayName = "ADF AH-6 (MCAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_ext_co.paa"};

	};
	
	class ADF_Heli_Transport_01_F : B_Heli_Transport_01_F 
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_mcam";
		displayName = "ADF GhostHawk (MCAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_ext02_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_ext02_co.paa"};
		
	};
	
	///ACAM/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Heli_A_TP : B_Heli_Light_01_F
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_acam";
		displayName = "ADF MH-6 (ACAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_altext01_co.paa"};

	};
	
		class ADF_Heli_A_Armed : B_Heli_Light_01_dynamicLoadout_F
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_acam";
		displayName = "ADF AH-6 (ACAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_altext01_co.paa"};

	};
	
	class ADF_Heli_Transport_01_FA : B_Heli_Transport_01_F 
	
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_acam";
		displayName = "ADF GhostHawk (ACAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_altext01_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_altext01_co.paa"};
		
		class TextureSources {

			class Green {
				displayName = "Green";
				author = "AmTheAgent";
				textures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_ext01_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_ext01_co.paa"};
			};

			class MCAM {
				displayName = "MCAM";
				author = "AmTheAgent";
				textures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_ext02_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_ext02_co.paa"};
			};
			
			class Desert {
				displayName = "Desert";
				author = "AmTheAgent";
				textures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_ext03.co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_ext03_co.paa"};
			};
			
		};
	
	};
	
	///JCAM//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Heli_Transport_04_F : B_Heli_Transport_01_F 
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_jcam";
		displayName = "ADF GhostHawk (JCAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_jcam01_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_jcam01_co.paa"};
		
	};	
	
	class ADF_Heli_J_TP : B_Heli_Light_01_F  
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_jcam";
		displayName = "ADF MH-6 (JCAM)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_jcam01_co.paa"};

	};
	
	class ADF_Heli_J_Armed : B_Heli_Light_01_dynamicLoadout_F
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_jcam";
		displayName = "ADF AH-6 (J)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_jcam01_co.paa"};

	};
	
	///DPCU///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Heli_Transport_03_F : B_Heli_Transport_01_F 
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_auscam";
		displayName = "ADF GhostHawk (Auscam)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_auscam01_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_auscam02_co.paa"};
		
	};	
	
	class ADF_Heli_AC_TP : B_Heli_Light_01_F  
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_auscam";
		displayName = "ADF MH-6 (AC)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_auscam01_co.paa"};

	};
	
	class ADF_Heli_AC_Armed : B_Heli_Light_01_dynamicLoadout_F
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_auscam";
		displayName = "ADF AH-6 (AC)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_auscam01_co.paa"};

	};
	
	///SAND///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Heli_Transport_03_S : B_Heli_Transport_01_F 
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_dpdu";
		displayName = "ADF GhostHawk (Sand)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_sandext01_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_sandext02_co.paa"};
		
	};	
	
	///Green///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Heli_G_TP : B_Heli_Light_01_F
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_mcam";
		displayName = "ADF MH-6 (Green)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_ext01_co.paa"};

	};
	
	class ADF_Heli_G_Armed : B_Heli_Light_01_dynamicLoadout_F
	{
		side = 1;
		scope = 2;
		eden = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		faction = "ADF_Faction_mcam";
		displayName = "ADF AH-6 (Green)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_light_01_ext01_co.paa"};

	};
	
	class ADF_Heli_Transport_02_F : B_Heli_Transport_01_F 
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_mcam";
		displayName = "ADF GhostHawk (Green)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_ext01_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_ext02_co.paa"};
	

	};
	
	///RAAF/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Heli_Transport_raaf01_F : B_Heli_Transport_01_F 
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_RAAF";
		displayName = "ADF GhostHawk Dark (RAAF)";
		crew = "ADF_S_Helipilot";
		gunnerType = "ADF_SP_Helicrew";
		typicalCargo[] = {"ADF_SP_Helicrew"};
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_raaf01_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_raaf01_co.paa"};
	

	};
	
	class ADF_Heli_Transport_raaf02_F : B_Heli_Transport_01_F 
	{
		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_RAAF";
		displayName = "ADF GhostHawk Light (RAAF)";
		crew = "ADF_S_Helipilot";
		gunnerType = "ADF_SP_Helicrew";
		typicalCargo[] = {"ADF_SP_Helicrew"};
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_01\Heli_Transport_01_F.p3d";
		slingLoadMaxCargoMass = 4000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_01_raaf02_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_01_raaf02_co.paa"};
	

	};
	
		
	class ADF_Heli_Transport_raaf03_F: I_Heli_Transport_02_F
	{

		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_RAAF";
		displayName = "ADF Merlin Light (RAAF)";
		crew = "ADF_S_Helipilot";
		typicalCargo[] = {"ADF_SP_Helicrew"};
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_02\Heli_Transport_02_F.p3d";
		slingLoadMaxCargoMass = 5000;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_02_1_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_02_2_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_02_3_co.paa"};

	};
	
	class ADF_Heli_Transport_raaf04_F: I_Heli_Transport_02_F
	{

		side = 1;
		scope = 2;
		eden = 1;
		faction = "ADF_Faction_RAAF";
		displayName = "ADF Merlin Dark (RAAF)";
		crew = "ADF_S_Helipilot";
		typicalCargo[] = {"ADF_SP_Helicrew"};
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Beta\Heli_Transport_02\Heli_Transport_02_F.p3d";
		slingLoadMaxCargoMass = 8000;
		hiddenSelections[] = {"camo1", "camo2", "camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_heli_transport_02d_1_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_02d_2_co.paa","ADF_Vanilla\addons\data\adf_heli_transport_02d_3_co.paa"};

	};
	
	class ADF_Heli_Transport_raaf05_F: B_Heli_Transport_03_unarmed_F
	{

		side = 1;
		scope = 2;
		eden = 1;
		DLC = "Heli";
		faction = "ADF_Faction_RAAF";
		displayName = "ADF Chinook Unarmed (RAAF)";
		crew = "ADF_S_Helipilot";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Heli\Heli_Transport_03\Heli_Transport_03_F.p3d";
		slingLoadMaxCargoMass = 12000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext01l_co.paa","ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext02l_co.paa"};
		
		class TextureSources {

			class Black {
				displayName = "Black";
				author = "AmTheAgent";
				textures[] = {"ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext01_co.paa","ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext02_co.paa"};
				
			};

			class DarkGrey {
				displayName = "Dark Grey";
				author = "AmTheAgent";
				textures[] = {"ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext01d_co.paa","ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext02d_co.paa"};
				
			};
		};
	};
	
	class ADF_Heli_Transport_raaf05a_F: B_Heli_Transport_03_F
	{

		side = 1;
		scope = 2;
		eden = 1;
		DLC = "Heli";
		faction = "ADF_Faction_RAAF";
		displayName = "ADF Chinook Armed (RAAF)";
		crew = "ADF_S_Helipilot";
		gunnerType = "ADF_SP_Helicrew";
		availableForSupportTypes[] = {"Drop", "Transport"};
		model = "\A3\Air_F_Heli\Heli_Transport_03\Heli_Transport_03_F.p3d";
		slingLoadMaxCargoMass = 12000;
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext01l_co.paa","ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext02l_co.paa"};
		
		class TextureSources 
		{
			

			class Black {
				displayName = "Black";
				author = "AmTheAgent";
				textures[] = {"ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext01_co.paa","ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext02_co.paa"};
				
			};

			class DarkGrey {
				displayName = "Dark Grey";
				author = "AmTheAgent";
				textures[] = {"ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext01d_co.paa","ADF_Vanilla\addons\data\adf_Heli_Transport_03_ext02d_co.paa"};
				
			};
		};
	};
		