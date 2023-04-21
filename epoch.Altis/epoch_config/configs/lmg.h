// lmg.h

   class LMG_Mk200_F
    {
        price = 500;
        tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;         
    };
    class MMG_01_tan_F
    {
        price = 1000;
        tax = 9.9;
        banditAccess = 5;
        heroAccess = 5;         
    };
    class MMG_02_camo_F
    {
        price = 1000;
        tax = 9.9;
        banditAccess = 5;
        heroAccess = 5;         
    };
    class MMG_02_black_F : MMG_02_camo_F {};
    class MMG_02_sand_F : MMG_02_camo_F {};

    class m249_EPOCH
    {
        price = 500;
        tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
    };
    class m249Tan_EPOCH : m249_EPOCH {};
    class LMG_03_F : m249_EPOCH {};
    class CUP_lmg_minimi_railed  : m249_EPOCH {};
    class CUP_lmg_PKM_top_rail
    {
        price = 500;
        tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
    }; 
    class CUP_lmg_PKM_front_rail_B50_vfg : CUP_lmg_PKM_top_rail {};
    class CUP_lmg_Pecheneg_top_rail_B50_vfg : CUP_lmg_PKM_top_rail {}; 

    class CUP_smg_Mac10_rail
    {
        price = 100;
        // tax = 0.9;
        banditAccess = 1;
        heroAccess = 1;          
    }; 
   
    class CUP_lmg_MG3_rail
    {
        price = 500;
        tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;        
    };           
     
    class CUP_lmg_L110A1 : CUP_lmg_MG3_rail {};
    class CUP_lmg_M240 : m249_EPOCH {};
    class CUP_lmg_minimipara : m249_EPOCH {};
    class CUP_lmg_minimi : m249_EPOCH {};
    class CUP_lmg_m249_para  : m249_EPOCH {};
    class CUP_lmg_m249_pip1  : m249_EPOCH {};
    class CUP_lmg_m249_pip4 : m249_EPOCH {};
    class CUP_lmg_L7A2 : m249_EPOCH {};
    class CUP_lmg_PKM : m249_EPOCH {};
    class CUP_lmg_Pecheneg : m249_EPOCH {};
    class CUP_lmg_UK59 : m249_EPOCH {};
    class CUP_lmg_m249_pip2 : m249_EPOCH {};
    class CUP_lmg_m249_pip3  : m249_EPOCH {};
    class CUP_lmg_m249_SQuantoon : m249_EPOCH {};
    class CUP_lmg_M60E4
    {
        price = 400;
        // tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;          
    };

    class CUP_lmg_Mk48_des  : m249_EPOCH {};
    class CUP_lmg_Mk48_wdl  : m249_EPOCH {};
