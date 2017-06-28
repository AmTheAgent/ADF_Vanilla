	////////////////////
	///CUSTOM WHEELED///
	////////////////////
 
	/*extern*/class B_MRAP_01_F;
	/*extern*/class B_MRAP_01_hmg_F;
	/*extern*/class MRAP_01_hmg_base_F;
	/*extern*/class B_Truck_01_transport_F;
	/*extern*/class B_Truck_01_covered_F;
	/*extern*/class B_Truck_01_ammo_F;
	/*extern*/class B_Truck_01_fuel_F;
	/*extern*/class B_Truck_01_Repair_F;
	
	
	
	///MCAM/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_MRAP_01_F : B_MRAP_01_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF MRAP (MCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_unarmed_F";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_base_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_adds_co.paa"};
	

	};
	
	class ADF_MRAP_01_HMG_F : B_MRAP_01_hmg_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF MRAP HMG (MCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_hmg_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_base_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_adds_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		
	};
	
	class ADF_Truck_01_ammo_F : B_Truck_01_ammo_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		vehicleClass = "Support";
		_generalMacro = "ADF_Truck_01_ammo_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Ammo Truck (MCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_ammo_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Ammo_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01M_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02M_co.paa"};
		
	};
	
		
	class ADF_Truck_01_fuel_F : B_Truck_01_fuel_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		vehicleClass = "Support";
		_generalMacro = "ADF_Truck_01_fuel_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Fuel Truck (MCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_fuel_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Fuel_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01M_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02M_co.paa"};
		
	};
	
	class ADF_Truck_02_transport_F : B_Truck_01_covered_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_Truck_02_transport_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Transport Truck Covered (MCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_beta\Truck_01\Truck_01_covered_F.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_covered_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01M_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02M_co.paa"};
		
	
	};
	
	class ADF_Truck_05_transport_F : B_Truck_01_transport_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_Truck_05_transport_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Transport Truck (MCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_beta\Truck_01\Truck_01_transport_F.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01M_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02M_co.paa"};
		

	};
	
	///ACAM/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_MRAP_01_FA : B_MRAP_01_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_FA";
		faction = "ADF_Faction_acam";
		displayName = "ADF MRAP (ACAM)";
		crew = "ADF_SL_A";
		model = "\A3\soft_f\MRAP_01\MRAP_01_unarmed_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_alt01_base_co.paa","ADF_Vanilla\addons\data\adf_mrap_alt01_adds_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
	

	};

	class ADF_MRAP_01_HMG_FA : B_MRAP_01_hmg_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_HMG_FA";
		faction = "ADF_Faction_acam";
		displayName = "ADF MRAP HMG (ACAM)";
		crew = "ADF_SL_A";
		model = "\A3\soft_f\MRAP_01\MRAP_01_hmg_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_alt01_base_co.paa","ADF_Vanilla\addons\data\adf_mrap_alt01_adds_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		
	};
	
	class ADF_Truck_01_transport_FA : B_Truck_01_transport_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_Truck_01_transport_F";
		faction = "ADF_Faction_acam";
		displayName = "ADF Transport Truck (ACAM)";
		crew = "ADF_SL_A";
		model = "\A3\soft_f_beta\Truck_01\Truck_01_transport_F.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_altext_01_co.paa","ADF_Vanilla\addons\data\adf_truck_01_altext_02_co.paa"};
		

	};
	
	class ADF_Truck_02_transport_FA : B_Truck_01_covered_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_Truck_02_transport_F";
		faction = "ADF_Faction_acam";
		displayName = "ADF Transport Truck Covered (ACAM)";
		crew = "ADF_SL_A";
		model = "\A3\soft_f_beta\Truck_01\Truck_01_covered_F.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_covered_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_altext_01_co.paa","ADF_Vanilla\addons\data\adf_truck_01_altext_02_co.paa"};
		
	};
	
	///JCAM///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_MRAP_01_J : B_MRAP_01_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_AC";
		faction = "ADF_Faction_jcam";
		displayName = "ADF MRAP (JCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_unarmed_F";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_jcambase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_jcamadds_co.paa"};
	

	};
	
	class ADF_MRAP_01_HMG_J : B_MRAP_01_hmg_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_HMG_AC";
		faction = "ADF_Faction_jcam";
		displayName = "ADF MRAP HMG (JCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_hmg_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_\adf_mrap_01_jcambase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_jcamadds_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		
	};
	
	///DPCU///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_MRAP_01_AC : B_MRAP_01_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_AC";
		faction = "ADF_Faction_auscam";
		displayName = "ADF MRAP (DPCU)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_unarmed_F";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_auscambase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_auscamadds_co.paa"};
	

	};
	
	class ADF_MRAP_01_HMG_AC : B_MRAP_01_hmg_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_HMG_AC";
		faction = "ADF_Faction_auscam";
		displayName = "ADF MRAP HMG (DPCU)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_hmg_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_auscambase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_auscamadds_co.paa","ADF_Vanilla\addons\data\adf_dpcuTurret_CO.paa"};
		
	};
	
	
	///DPDU/SAND///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	
	class ADF_MRAP_01_S : B_MRAP_01_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_AC";
		faction = "ADF_Faction_dpdu";
		displayName = "ADF MRAP (Sand)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_unarmed_F";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_sandbase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_sandadds_co.paa"};
	

	};
	
	class ADF_MRAP_01_HMG_S : B_MRAP_01_hmg_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_HMG_AC";
		faction = "ADF_Faction_dpdu";
		displayName = "ADF MRAP HMG (Sand)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_hmg_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_sandbase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_sandadds_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		
	};
	
	class ADF_MRAP_01_DPDU : B_MRAP_01_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_AC";
		faction = "ADF_Faction_dpdu";
		displayName = "ADF MRAP (DPDU)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_unarmed_F";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_dpdubase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_dpduadds_co.paa"};
	

	};
	
	class ADF_MRAP_01_HMG_DPDU : B_MRAP_01_hmg_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_HMG_AC";
		faction = "ADF_Faction_dpdu";
		displayName = "ADF MRAP HMG (DPDU)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_hmg_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_dpdubase_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_dpduadds_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		
	};
	
	///GREEN////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_MRAP_02_F : B_MRAP_01_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF MRAP (Green)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_unarmed_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_base_green_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_adds_green_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		
	};
	
	class ADF_MRAP_02_HMG_F : B_MRAP_01_hmg_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_MRAP_01_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF MRAP HMG (Green)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f\MRAP_01\MRAP_01_hmg_F";
		hiddenSelections[] = {"Camo1", "Camo2", "Camo3"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_mrap_01_base_green_co.paa","ADF_Vanilla\addons\data\adf_mrap_01_adds_green_co.paa","\A3\Data_F\Vehicles\Turret_CO.paa"};
		
	};
	

	
	class ADF_Truck_02_ammo_F : B_Truck_01_ammo_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		vehicleClass = "Support";
		_generalMacro = "ADF_Truck_02_ammo_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Ammo Truck (Green)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_ammo_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Ammo_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01G_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02G_co.paa"};
		
	};

	
	class ADF_Truck_02_fuel_F : B_Truck_01_fuel_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		vehicleClass = "Support";
		_generalMacro = "ADF_Truck_02_fuel_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Fuel Truck (Green)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_fuel_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_Fuel_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01G_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02G_co.paa"};
		
	};
	
	
	class ADF_Truck_01_Repair_F : B_Truck_01_Repair_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		vehicleClass = "Support";
		_generalMacro = "ADF_Truck_01_Repair_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Repair Truck (Green)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_box_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_box_F_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01G_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02G_co.paa"};
		
	};
	
	
	class ADF_Truck_02_Repair_F : B_Truck_01_Repair_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		vehicleClass = "Support";
		_generalMacro = "ADF_Truck_02_Repair_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Repair Truck (MCAM)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_gamma\Truck_01\Truck_01_box_F.p3d";
		picture = "\a3\soft_f_gamma\Truck_01\Data\UI\Truck_01_box_F_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01M_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02M_co.paa"};
		

	};
	
		class ADF_Truck_03_transport_F : B_Truck_01_transport_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_Truck_03_transport_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Transport Truck (Green)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_beta\Truck_01\Truck_01_transport_F.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_Base_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01G_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02G_co.paa"};
		

	};
	
	class ADF_Truck_04_transport_F : B_Truck_01_covered_F
	{
	
		side = 1;
		scope = 2;
		eden = 1;
		_generalMacro = "ADF_Truck_02_transport_F";
		faction = "ADF_Faction_mcam";
		displayName = "ADF Transport Truck Covered (Green)";
		crew = "ADF_SL_M";
		model = "\A3\soft_f_beta\Truck_01\Truck_01_covered_F.p3d";
		picture = "\a3\soft_f_beta\Truck_01\Data\UI\Truck_01_covered_CA.paa";
		hiddenSelections[] = {"Camo1", "Camo2"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_truck_01_ext_01G_co.paa","ADF_Vanilla\addons\data\adf_truck_01_ext_02G_co.paa"};
		
	
	};
	
	
	
	
	