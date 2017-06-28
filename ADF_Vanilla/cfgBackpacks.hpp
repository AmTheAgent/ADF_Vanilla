	////////////////////
	//CUSTOM BACKPACKS//
	////////////////////
	
	/*extern*/class B_Kitbag_Base;
	/*extern*/class B_AssaultPack_Base;
	/*extern*/class B_Carryall_Base;
	
	/*Layout Order: MCAM/ACAM/JCAM/DPCU/DPDU/MTP/RAAF/SASR*/
	
/*
	
	class tf_rt1523g_adf: TFAR_Bag_Base
  {
    author = "Raspu, Gandi, Nkey";
    displayName = "RT-1523G ADF MCAM (ASIP)";
    descriptionShort = "RT-1523G (ASIP) long range radio 20km";
    picture = "\task_force_radio_items\rt1523g\rt1523g_icon.paa";
    model="\task_force_radio_items\models\clf_prc117g_ap";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_clf_prc117g_mcam_co.paa"};
    maximumLoad = 50;
    mass = 80;
    scope = 2;
    scopeCurator = 2;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
  };
*/
	
	///MCAM////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_KitbagMed_M : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MCAM Kitbag Med";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_fast_rgrMed_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportItems
		{
			item_xx(MediKit,1);
			item_xx(FirstAidKit, 10);
		};
		
	};
	
	class ADF_KitbagAT_M : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MCAM Kitbag AT";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_fast_rgr_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportMagazines
		{
			mag_xx(NLAW_F,2);
		};
		
	};
	
	
	class ADF_CompactGL_M : B_AssaultPack_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MCAM Compact GL";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_backpack_compact_co.paa"};
		maximumLoad = 260;
		mass = 35;
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,14);
			mag_xx(3Rnd_HE_Grenade_shell,4);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,6);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		};
	};
	

	///ACAM//////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	/*class tf_rt1523g_adfA: TFAR_Bag_Base
	{
		author = "Raspu, Gandi, Nkey";
		displayName = "RT-1523G ADF ACAM (ASIP)";
		descriptionShort = "RT-1523G (ASIP) long range radio 20km";
		picture = "\task_force_radio_items\rt1523g\rt1523g_icon.paa";
		model="\task_force_radio_items\models\clf_prc117g_ap";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_clf_prc117g_acam_co.paa"};
		maximumLoad = 50;
		mass = 80;
		scope = 2;
		scopeCurator = 2;
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialog = "rt1523g_radio_dialog";
		tf_subtype = "digital_lr";
	};
	*/
	
	class ADF_KitbagMed_A : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF ACAM Kitbag Med";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_fast_altrgrMed_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportItems
		{
			item_xx(MediKit,1);
			item_xx(FirstAidKit, 10);
		};
		
	};
	
	class ADF_KitbagAT_A : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF ACAM Kitbag AT";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_fast_altrgr_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportMagazines
		{
			mag_xx(NLAW_F,2);
		};
		
	};
	
	
	class ADF_CompactGL_A : B_AssaultPack_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF ACAM Compact GL";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_backpack_altcompact_co.paa"};
		maximumLoad = 260;
		mass = 35;
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,14);
			mag_xx(3Rnd_HE_Grenade_shell,4);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,6);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		};
		
	};
	
	class B_Carryall_A: B_Carryall_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF ACAM Carryall";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_backpack_acamtortila_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};
	
	///JCAM///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


	class ADF_KitbagMed_J : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF JCAM Kitbag Med";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_fast_jcamMed_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportItems
		{
			item_xx(MediKit,1);
			item_xx(FirstAidKit, 10);
		};
		
	};
	
	class ADF_KitbagAT_J : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF JCAM Kitbag AT";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_fast_jcam_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportMagazines
		{
			mag_xx(NLAW_F,2);
		};
		
	};
	
	
	class ADF_CompactGL_J : B_AssaultPack_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF JCAM Compact GL";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_backpack_compactJcam_co.paa"};
		maximumLoad = 260;
		mass = 35;
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,14);
			mag_xx(3Rnd_HE_Grenade_shell,4);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,6);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		};
		
	};
	
	class B_Carryall_J: B_Carryall_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF JCAM Carryall";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_backpack_jcamtortila_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};
	
		///DPCU/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
/*	class tf_rt1523g_adf_AC: TFAR_Bag_Base
  {
    author = "Raspu, Gandi, Nkey";
    displayName = "RT-1523G ADF Auscam (ASIP)";
    descriptionShort = "RT-1523G (ASIP) long range radio 20km";
    picture = "\task_force_radio_items\rt1523g\rt1523g_icon.paa";
    model="\task_force_radio_items\models\clf_prc117g_ap";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_clf_prc117g_AC_co.paa"};
    maximumLoad = 50;
    mass = 80;
    scope = 2;
    scopeCurator = 2;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
  };
*/	
	class ADF_KitbagMed_AC : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPCU Kitbag Med";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_fast_dpcuMed_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportItems
		{
			item_xx(MediKit,1);
			item_xx(FirstAidKit, 10);
		};
		
	};
	
	class ADF_KitbagAT_AC : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPCU Kitbag AT";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_fast_dpcu_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportMagazines
		{
			mag_xx(NLAW_F,2);
		};
		
	};
	
	
	class ADF_CompactGL_AC : B_AssaultPack_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPCU Compact GL";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_backpack_compactdpcu_co.paa"};
		maximumLoad = 260;
		mass = 35;
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,14);
			mag_xx(3Rnd_HE_Grenade_shell,4);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,6);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		};
		
	};
	
	class B_Carryall_AC: B_Carryall_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPCU Carryall";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_backpack_dpcutortila_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};
		
	///DPDU//////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_KitbagMed_D : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPDU Kitbag Med";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_fast_dpduMed_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportItems
		{
			item_xx(MediKit,1);
			item_xx(FirstAidKit, 10);
		};
		
	};
	
	class ADF_KitbagAT_D : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPDU Kitbag AT";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_fast_dpdu_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportMagazines
		{
			mag_xx(NLAW_F,2);
		};
		
	};
	
	
	class ADF_CompactGL_D : B_AssaultPack_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF  DPDU  Compact GL";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf1_backpack_dpducompact_co.paa"};
		maximumLoad = 260;
		mass = 35;
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,14);
			mag_xx(3Rnd_HE_Grenade_shell,4);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,6);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		};
		
	};
	
	class B_Carryall_D: B_Carryall_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF DPDU Carryall";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[]= {"ADF_Vanilla\addons\data\adf_backpack_dpdutortila_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};
	
	///MTP//////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_KitbagMed_MTP : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MTP Kitbag Med";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_fast_mtpMed_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportItems
		{
			item_xx(MediKit,1);
			item_xx(FirstAidKit, 10);
		};
		
	};
	
	class ADF_KitbagAT_MTP : B_Kitbag_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MTP Kitbag AT";
		picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_fast_mtp_co.paa"};
		maximumLoad = 280;
		mass = 40;
		class TransportMagazines
		{
			mag_xx(NLAW_F,2);
		};
		
	};
	
	
	class ADF_CompactGL_MTP : B_AssaultPack_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MTP Compact GL";
		picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_rgr_ca.paa";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Compact";
		hiddenSelectionsTextures[] = {"ADF_Vanilla\addons\data\adf_backpack_compactmtp_co.paa"};
		maximumLoad = 260;
		mass = 35;
		class TransportMagazines
		{
			mag_xx(1Rnd_HE_Grenade_shell,14);
			mag_xx(3Rnd_HE_Grenade_shell,4);
			mag_xx(1Rnd_SmokeRed_Grenade_shell,6);
			mag_xx(1Rnd_SmokeGreen_Grenade_shell,6);
			mag_xx(1Rnd_Smoke_Grenade_shell,6);
			mag_xx(1Rnd_SmokeBlue_Grenade_shell,2);
			mag_xx(1Rnd_SmokeOrange_Grenade_shell,2);
			mag_xx(1Rnd_SmokeYellow_Grenade_shell,2);
		};
		
	};
	
	class B_Carryall_MTP: B_Carryall_Base 
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF MTP Carryall";
		model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
		picture = "\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_C_Tortila_khk.paa";
		hiddenSelectionsTextures[]= {"ADF_Vanilla\addons\data\adf_backpack_mtptortila_co.paa"};
		maximumLoad = 320;
		mass = 60;
	};
