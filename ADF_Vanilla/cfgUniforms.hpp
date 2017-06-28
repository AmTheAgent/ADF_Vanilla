	
	////////////////////
	///CUSTOM UNIFORM///
	////////////////////
	
	
	/*extern*/class UniformItem;
	/*extern*/class Uniform_Base;
    /*extern*/class U_BasicBody;
	
	/*Layout Order: MCAM/ACAM/JCAM/DPCU/DPDU/MTP/RAAF/SASR*/
	
	///MCAM///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_BasicBody: U_BasicBody
	{
		author = "AmTheAgent";
		scope = 1;
		displayName = "MCAM Underwear";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "ADF_Underwear_F";
			containerClass = "Supply0";
			mass = 5;
		};
	};
	
	class ADF_Base_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF MCAM Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_M";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_BaseSS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF MCAM Uniform SS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_TL_M";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };

	
	class ADF_TShirt_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF MCAM TShirt"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_CLS_M";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
		
	///ACAM////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_Altis_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF ACAM Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_A";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_AltisSS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF ACAM Uniform SS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_TL_A";
			containerClass = "Supply40";
			mass = 40;			
        }; 
	};
	
	class ADF_AltisTS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF ACAM TShirt"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_CLS_A";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	//JCAM/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_BasicBody_J : U_BasicBody
	{
		author = "AmTheAgent";
		scope = 1;
		displayName = "MCAM Underwear";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\basicbody_brown_co.paa"};
		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "Underwear_F";
			containerClass = "Supply0";
			mass = 5;
		};
	};
	
	class ADF_jcam_UM: Uniform_Base
	   { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF JCAM Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_J";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_jcamSS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF JCAM Uniform SS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_TL_J";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_jcamTS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF JCAM TShirt"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_CLS_J";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };

	///DPCU///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_auscam_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF DPCU Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_AC";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_auscamSS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF DPCU Uniform SS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_TL_AC";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
		class ADF_auscamTS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF DPCU TShirt"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_CLS_AC";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };

	///DPDU///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_dpdu_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF DPDU Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_D";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_dpduSS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF DPDU Uniform SS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_TL_D";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };

	
	class ADF_dpduTS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF DPDU TShirt"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_CLS_D";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	
	
	///MTP///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_mtp_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF MTP Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_MTP";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_mtpSS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF MTP Uniform SS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_TL_MTP";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };

	
	class ADF_mtpTS_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF MTP TShirt"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_CLS_MTP";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };

	
	///RAAF//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_S_HeliPilotCoveralls: Uniform_Base 
	{
		author = "AmTheAgent";
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "ADF Sage Coveralls";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_PilotCoveralls_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";

		class ItemInfo: UniformItem 
		{
			uniformModel = "-";
			uniformClass = "ADF_SP_Helipilot";
			containerClass = "Supply40";
			mass = 60;
		};
	};
	
	///SASR////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ADF_sasr_UM: Uniform_Base
	   { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF SAS DPCU Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_sasrTL_M";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_sasrMTP_UM: Uniform_Base
	   { 
        author = "AmTheAgent";
		scope = 2; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF SAS MTP Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_sasrTL_MTP";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
		
	
	//GREEN/BLACK not in use//
	
	/*
	class ADF_green_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 0; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF Green Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_G";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	
	class ADF_black_UM: Uniform_Base
    { 
        author = "AmTheAgent";
		scope = 0; 
		scopeCurator = 2;
		scopeArsenal = 2;
        displayName = "ADF Black Uniform LS"; 
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_vest_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "ADF_SL_B";
			containerClass = "Supply40";
			mass = 40;			
        }; 
    };
	*/
	


	
	