	////////////////////
	////CUSTOM VESTS////
	////////////////////
	
	/*extern*/class V_PlateCarrier1_rgr;
	/*extern*/class V_PlateCarrier_Kerry;
	/*extern*/class VestItem;
	
	/*Layout Order: MCAM/ACAM/JCAM/DPCU/DPDU/MTP/RAAF/SASR*/
 
	///MCAM///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_PlateCarrier_M : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MCAM PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_vests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_vests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	
	
	class ADF_PlateCarrierK_M : V_PlateCarrier_Kerry
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MCAM PlateCarrier Heavy";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_vests_co.paa"};
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_vests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};

	///ACAM////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_PlateCarrier_A : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF ACAM PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_altvests_co.paa"};
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_altvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 16;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 16;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	
	class ADF_PlateCarrierK_A : V_PlateCarrier_Kerry
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF ACAM PlateCarrier Heavy";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_altvests_co.paa"};
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_altvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	///JCAM////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_PlateCarrier_J : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF JCAM PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_jcamvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_jcamvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	class ADF_PlateCarrierK_J : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF JCAM PlateCarrier Heavy";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_jcamvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_jcamvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	///DPCU//////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_PlateCarrier_AC : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPCU PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_auscamvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_auscamvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	
	class ADF_PlateCarrierK_AC : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPCU PlateCarrier Heavy";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_auscamvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_auscamvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	///DPDU////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class ADF_PlateCarrier_MTP : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MTP PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_u_mtp_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_u_mtp_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	class ADF_PlateCarrierK_MTP : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MTP PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_u_mtp_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_u_mtp_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	

	///MTP////////////////////////////////////////////////////////////////////////////////////////////////////////////

	class ADF_PlateCarrier_DPDU: V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPDU PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_dpduvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_dpduvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	class ADF_PlateCarrierK_DPDU : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPDU PlateCarrier";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_dpduvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf1_dpduvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};

	///SASR/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_PlateCarriersasr_MTP : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF SASR PlateCarrier MTP";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf_sasrMTPvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf_sasrMTPvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	
	class ADF_PlateCarriersasr_DPCU : V_PlateCarrier1_rgr
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF SASR PlateCarrier DPCU";
		picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
		model = "A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf_sasrDPCUvests_co.paa"};
		
 
		class ItemInfo : VestItem
		{
			uniformModel = "A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry";
			containerClass = "Supply120";
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\ADF_Vanilla\addons\data\adf_sasrDPCUvests_co.paa"};
					
			class HitpointsProtectionInfo 
			{

				class ADF_Chest {
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.300000;
				};

				class ADF_Diaphragm {
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.300000;
				};

				class ADF_Abdomen {
					hitpointName = "HitAbdomen";
					armor = 22;
					passThrough = 0.300000;
				};

				class ADF_Body {
					hitpointName = "HitBody";
					passThrough = 0.300000;
				};
			};
		};
	};
	