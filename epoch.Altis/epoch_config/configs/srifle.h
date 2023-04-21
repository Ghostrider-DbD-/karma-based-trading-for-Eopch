// srifle.h
    class sr25_epoch
    {
        price = 500;
        tax = 1.0; 
        banditAccess = 4;
        heroAccess = 4;             
    };

    class srifle_DMR_01_F
    {
        price = 500;
        tax = 1.0; 
        banditAccess = 4;
        heroAccess = 4;         
    };
   class srifle_DMR_02_F : srifle_DMR_01_F {};
    class srifle_DMR_02_camo_F : srifle_DMR_02_F {};
    class srifle_DMR_02_sniper_F : srifle_DMR_02_F {};
    class srifle_DMR_03_F : srifle_DMR_02_F {};
    class srifle_DMR_03_khaki_F : srifle_DMR_02_F {};
    class srifle_DMR_03_tan_F : srifle_DMR_02_F {};
    class srifle_DMR_03_multicam_F : srifle_DMR_02_F {};
    class srifle_DMR_03_woodland_F : srifle_DMR_02_F {};
    class srifle_DMR_03_spotter_F : srifle_DMR_02_F {};
    class srifle_DMR_04_F : srifle_DMR_02_F {};
    class srifle_DMR_04_Tan_F : srifle_DMR_02_F {};
    class srifle_DMR_05_blk_F : srifle_DMR_02_F {};
    class srifle_DMR_05_hex_F : srifle_DMR_02_F {};
    class srifle_DMR_05_tan_f : srifle_DMR_02_F {};
    class srifle_DMR_06_camo_F : srifle_DMR_02_F {};
    class srifle_DMR_06_olive_F : srifle_DMR_02_F {};
    class CUP_srifle_M14  : srifle_DMR_02_F {};
    class CUP_srifle_M14_DMR : srifle_DMR_02_F {};
    class srifle_DMR_07_blk_F : srifle_DMR_02_F {};       
    class srifle_DMR_07_hex_F : srifle_DMR_07_blk_F {};
    class srifle_DMR_07_ghex_F : srifle_DMR_07_blk_F {};
    class CUP_srifle_M24_wdl : srifle_DMR_07_blk_F {};
    class CUP_srifle_M24_des : CUP_srifle_M24_wdl {};

    class MMG_01_hex_F 
    {
        price = 500;
       tax = 0.5; 
        banditAccess = 4;
        heroAccess = 4;          
    };
   class m107Tan_EPOCH
    {
        price = 1000;
        tax = 9; 
        banditAccess = 5;
        heroAccess = 5;            
    };
    class m107_EPOCH : m107Tan_EPOCH {};
    class a2_m110_epoch
    {
        price = 500;
        tax = 0.9; 
        banditAccess = 5;
        heroAccess = 5;           
    };
    class CUP_srifle_M110 : a2_m110_epoch {};

    class a2_svd_epoch
    {
        price = 1000;
        tax = 9; 
        banditAccess = 4;
        heroAccess = 4;            
    };
    class CUP_srifle_SVD_top_rail : a2_svd_epoch {};
    class CUP_SVD_camo_g : a2_svd_epoch {};
    class CUP_srifle_SVD_des : CUP_SVD_camo_g {};
    class CUP_SVD_camo_g_half : CUP_SVD_camo_g {};
    class CUP_SVD_camo_d : CUP_SVD_camo_g {};
    class CUP_SVD_camo_d_half : CUP_SVD_camo_g {};
    class CUP_srifle_SVD : CUP_SVD_camo_g {};
    class CUP_srifle_SVD_des_top_rail : CUP_SVD_camo_g {};    

    class srifle_EBR_F
    {
        price = 500;
        tax = 1.5; 
        banditAccess = 3;
        heroAccess = 3;         

    };
    class srifle_GM6_F
    {
        price = 1000;
        tax = 8; 
        banditAccess = 3;
        heroAccess = 3;         
    };
    class srifle_GM6_ghex_F : srifle_GM6_F {};

    class srifle_LRR_F  // 0.408
    {
        price = 1000;
        tax = 9.9; 
        banditAccess = 5;
        heroAccess = 5;         
    };
    class srifle_LRR_tna_F  : srifle_LRR_F {};      

    class CUP_srifle_AS50
    {
        price = 1000;
        tax = 9.9; 
        banditAccess = 5;
        heroAccess = 5;        
    };    

    class CUP_srifle_ksvk
    {
        price = 1000;
		tax = 12;
        banditAccess = 5;
        heroAccess = 5;            
    };
 
    class CUP_srifle_VSSVintorez
    {
        price = 300;
		tax = 0.9;
        banditAccess = 2;
        heroAccess = 2;            
    };
    class CUP_srifle_VSSVintorez_top_rail : CUP_srifle_VSSVintorez {}
    class CUP_srifle_VSSVintorez_VFG_top_rail : CUP_srifle_VSSVintorez {};

    class CUP_srifle_AWM_des // Lapua
    {
        price = 1000;
		tax = 11;
        banditAccess = 5;
        heroAccess = 5;            
    };
    class CUP_srifle_AWM_wdl : CUP_srifle_AWM_des {};
 
    class CUP_srifle_G22_des
    {
        price = 2000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;            
    };    

    class CUP_srifle_Mk12SPR 
    {
        price = 400;
		tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;           
    };
 
    class CUP_srifle_M40A3 : a2_svd_epoch {};
    class CUP_Mxx_camo : a2_svd_epoch {};
    class CUP_Mxx_camo_half  : a2_svd_epoch {};
    class CUP_srifle_CZ550_rail
    {
        price = 300;
   		tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;          
    };    


    class CUP_srifle_LeeEnfield_rail
    {
        price = 100;
   		// tax = 0.9;
        banditAccess = 1;
        heroAccess = 1;          
    };   
    class CUP_srifle_LeeEnfield
    {
        price = 100;
   		// tax = 0.9;
        banditAccess = 1;
        heroAccess = 1;          
    };    



