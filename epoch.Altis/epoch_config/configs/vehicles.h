
// vehicles.h

/*
    class hoverboard_epoch_1
    {
        price = 1000;
		// tax = 0.9;
    };
	class hoverboard_epoch_bttf: hoverboard_epoch_1{};
	class hoverboard_epoch_a3: hoverboard_epoch_1{};
    class hoverboard_epoch_cargo
    {
        price = 1200;
		// tax = 0.9;
    };
    class MBK_01_EPOCH
    {
        price = 1250;
		// tax = 0.9;
    };
*/

	class A2_Lada_EPOCH
	{
        price = 7500;
		// tax = 0.9;
        banditAccess = 1;
        heroAccess = 1;          
	};
    class C_Quadbike_01_EPOCH
    {
        price = 2500;
		// tax = 0.9;
    };
	class A2_Volha_EPOCH : A2_Lada_EPOCH {};
    class CUP_C_Skoda_Red_CIV : A2_Lada_EPOCH {};
    class CUP_C_Skoda_White_CIV : CUP_C_Skoda_Red_CIV {};
    class CUP_C_Skoda_Blue_CIV : CUP_C_Skoda_Red_CIV {};
    class CUP_C_Skoda_Green_CIV : CUP_C_Skoda_Red_CIV {};

    class C_Offroad_01_EPOCH
    {
        price = 1500;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;          
    };
	class C_Offroad_01_EPOCH1: C_Offroad_01_EPOCH{};
	class C_Offroad_01_EPOCH2: C_Offroad_01_EPOCH{};
	class C_Offroad_01_EPOCH3: C_Offroad_01_EPOCH{};
	class C_Offroad_01_EPOCH4: C_Offroad_01_EPOCH{};
	class C_Offroad_01_EPOCH5: C_Offroad_01_EPOCH{};

    //   	MB 4WD (basically a Jeep)
    class C_Offroad_02_unarmed_F 
    {
        price = 7500;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;         
    };
    class I_C_Offroad_02_unarmed_F : C_Offroad_02_unarmed_F {};

    // Prowler (Unarmed)
    class B_T_LSV_01_unarmed_F
    {
        price = 15000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;            
    };
    class B_CTRG_LSV_01_light_F : B_T_LSV_01_unarmed_F {};
    class B_LSV_01_unarmed_F : B_T_LSV_01_unarmed_F {};

    //  Qilin (Unarmed)
    class O_T_LSV_02_unarmed_F
    {
        price = 15000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;            
    };
    class O_LSV_02_unarmed_F : O_T_LSV_02_unarmed_F {}; 

    class C_Hatchback_01_EPOCH
    {
        price = 7500;
		// tax = 0.9;
        banditAccess = 2;
        heroAccess = 2;          
    };
	class C_Hatchback_01_EPOCH1: C_Hatchback_01_EPOCH{};
	class C_Hatchback_01_EPOCH2: C_Hatchback_01_EPOCH{};
	class C_Hatchback_01_EPOCH3: C_Hatchback_01_EPOCH{};
	class C_Hatchback_01_EPOCH4: C_Hatchback_01_EPOCH{};

    class C_Hatchback_02_EPOCH
    {
        price = 7500;
		// tax = 0.9;
        banditAccess = 2;
        heroAccess = 2;       
    };
	class C_Hatchback_02_EPOCH1: C_Hatchback_02_EPOCH{};
	class C_Hatchback_02_EPOCH2: C_Hatchback_02_EPOCH{};
	class C_Hatchback_02_EPOCH3: C_Hatchback_02_EPOCH{};
	class C_Hatchback_02_EPOCH4: C_Hatchback_02_EPOCH{};

	class A2_Vodnik_EPOCH
	{
        price = 25000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;           
	};

    class C_Rubberboat_EPOCH
    {
        price = 500;
		// tax = 0.9;
    };
    class C_Rubberboat_02_EPOCH
    {
        price = 500;
		// tax = 0.9;
    };
    class C_Rubberboat_03_EPOCH
    {
        price = 500;
		// tax = 0.9;
    };
    class C_Rubberboat_04_EPOCH
    {
        price = 500;
		// tax = 0.9;
    };
    class C_Van_01_box_EPOCH  //  Truck Boxer  (smaller box truck)
    {
        price = 15000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;         
    };
	class C_Van_01_box_EPOCH1: C_Van_01_box_EPOCH{};
	class C_Van_01_box_EPOCH2: C_Van_01_box_EPOCH{};
	class C_Van_01_box_EPOCH3: C_Van_01_box_EPOCH{};
	class C_Van_01_box_EPOCH4: C_Van_01_box_EPOCH{};
    class C_Van_01_transport_EPOCH
    {
        price = 15000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;                 
    };
	class C_Van_01_transport_EPOCH1: C_Van_01_transport_EPOCH{};  // As above, a small truck
	class C_Van_01_transport_EPOCH2: C_Van_01_transport_EPOCH{};
	class C_Van_01_transport_EPOCH3: C_Van_01_transport_EPOCH{};
	class C_Van_01_transport_EPOCH4: C_Van_01_transport_EPOCH{};
    class C_Boat_Civil_01_EPOCH
    {
        price = 1500;
		// tax = 0.9;
    };
    class C_Boat_Civil_01_police_EPOCH
    {
        price = 1500;
		// tax = 0.9;
    };
    class C_Boat_Civil_01_rescue_EPOCH
    {
        price = 1500;
		// tax = 0.9;
    };

    class B_Heli_Light_01_EPOCH  //  Hummingbird
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;          
    };
 
    class B_MRAP_01_EPOCH  //  	Hunter
    {
        price = 20000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;           
    };
	class B_MRAP_01_EPOCH1: B_MRAP_01_EPOCH{};
	class B_MRAP_01_EPOCH2: B_MRAP_01_EPOCH{};
	class B_MRAP_01_EPOCH3: B_MRAP_01_EPOCH{};
	class B_MRAP_01_EPOCH4: B_MRAP_01_EPOCH{};

    class O_MRAP_02_EPOCH   //   	Ifrit
    {
        price = 45000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
    };
	class O_MRAP_02_EPOCH1: O_MRAP_02_EPOCH{};
	class O_MRAP_02_EPOCH2: O_MRAP_02_EPOCH{};
	class O_MRAP_02_EPOCH3: O_MRAP_02_EPOCH{};
	class O_MRAP_02_EPOCH4: O_MRAP_02_EPOCH{};

    class I_MRAP_03_EPOCH // Strider
    {
        price = 45000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
    };
	class I_MRAP_03_EPOCH1: I_MRAP_03_EPOCH{};
	class I_MRAP_03_EPOCH2: I_MRAP_03_EPOCH{};
	class I_MRAP_03_EPOCH3: I_MRAP_03_EPOCH{};
	class I_MRAP_03_EPOCH4: I_MRAP_03_EPOCH{};

    class B_G_Offroad_01_armed_EPOCH
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;           
    };
	class B_G_Offroad_01_armed_EPOCH1: B_G_Offroad_01_armed_EPOCH{};
	class B_G_Offroad_01_armed_EPOCH2: B_G_Offroad_01_armed_EPOCH{};
	class B_G_Offroad_01_armed_EPOCH3: B_G_Offroad_01_armed_EPOCH{};
	class B_G_Offroad_01_armed_EPOCH4: B_G_Offroad_01_armed_EPOCH{};
    class B_Truck_01_mover_EPOCH  // Hemitt - No bed 
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class B_Truck_01_mover_EPOCH1: B_Truck_01_mover_EPOCH {};
	class B_Truck_01_mover_EPOCH2: B_Truck_01_mover_EPOCH {};
	class B_Truck_01_mover_EPOCH3: B_Truck_01_mover_EPOCH {};
	class B_Truck_01_mover_EPOCH4: B_Truck_01_mover_EPOCH {};
    class B_Truck_01_transport_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class B_Truck_01_transport_EPOCH1: B_Truck_01_transport_EPOCH {};  // Hemitt Troop Transport
	class B_Truck_01_transport_EPOCH2: B_Truck_01_transport_EPOCH {};
	class B_Truck_01_transport_EPOCH3: B_Truck_01_transport_EPOCH {};
	class B_Truck_01_transport_EPOCH4: B_Truck_01_transport_EPOCH {};
    class B_Truck_01_covered_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class B_Truck_01_covered_EPOCH1: B_Truck_01_covered_EPOCH {}; // Hemitt Troop Transport Covered
	class B_Truck_01_covered_EPOCH2: B_Truck_01_covered_EPOCH {};
	class B_Truck_01_covered_EPOCH3: B_Truck_01_covered_EPOCH {};
	class B_Truck_01_covered_EPOCH4: B_Truck_01_covered_EPOCH {};
    class B_Truck_01_box_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class B_Truck_01_box_EPOCH1: B_Truck_01_box_EPOCH {};  // Hemitt Box Truck
	class B_Truck_01_box_EPOCH2: B_Truck_01_box_EPOCH {};
	class B_Truck_01_box_EPOCH3: B_Truck_01_box_EPOCH {};
	class B_Truck_01_box_EPOCH4: B_Truck_01_box_EPOCH {};
    class O_Truck_02_transport_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class O_Truck_02_transport_EPOCH1: O_Truck_02_transport_EPOCH {};  //  Zamack Transport
	class O_Truck_02_transport_EPOCH2: O_Truck_02_transport_EPOCH {};
	class O_Truck_02_transport_EPOCH3: O_Truck_02_transport_EPOCH {};
	class O_Truck_02_transport_EPOCH4: O_Truck_02_transport_EPOCH {};
    class O_Truck_02_covered_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class O_Truck_02_covered_EPOCH1: O_Truck_02_covered_EPOCH {};  //  Zamack Transport Covered
	class O_Truck_02_covered_EPOCH2: O_Truck_02_covered_EPOCH {};
	class O_Truck_02_covered_EPOCH3: O_Truck_02_covered_EPOCH {};
	class O_Truck_02_covered_EPOCH4: O_Truck_02_covered_EPOCH {};
    class O_Truck_02_box_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class O_Truck_02_box_EPOCH1: O_Truck_02_box_EPOCH {};  // Zamack Box Bed
	class O_Truck_02_box_EPOCH2: O_Truck_02_box_EPOCH {};
	class O_Truck_02_box_EPOCH3: O_Truck_02_box_EPOCH {};
	class O_Truck_02_box_EPOCH4: O_Truck_02_box_EPOCH {};
	class O_Truck_03_transport_EPOCH
	{
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
	};
	class O_Truck_03_transport_EPOCH1: O_Truck_03_transport_EPOCH {};  // Tempest Transport
	class O_Truck_03_transport_EPOCH2: O_Truck_03_transport_EPOCH {};
	class O_Truck_03_transport_EPOCH3: O_Truck_03_transport_EPOCH {};
	class O_Truck_03_transport_EPOCH4: O_Truck_03_transport_EPOCH {};
    class O_Truck_03_covered_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
	class O_Truck_03_covered_EPOCH1: O_Truck_03_covered_EPOCH {};  // Tempest Transport Covered
	class O_Truck_03_covered_EPOCH2: O_Truck_03_covered_EPOCH {};
	class O_Truck_03_covered_EPOCH3: O_Truck_03_covered_EPOCH {};
	class O_Truck_03_covered_EPOCH4: O_Truck_03_covered_EPOCH {};
    
    class uh1h_Epoch
    {
		price = 30000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;           
    };
    class uh1h_armed_EPOCH
    {
		price = 35000;
		tax = 0.9;
        banditAccess = 5;
        heroAccess = 5;           
    };
    class uh1h_armed_plus_EPOCH
    {
		price = 35000;
		tax = 0.9;
        banditAccess = 5;
        heroAccess = 5;           
    };
    class a2_mi8_EPOCH
    {
		price = 35000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;           
    };
    class a2_ch47f_EPOCH
    {
		price = 40000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;          
    };
    class a2_ch47f_armed_EPOCH
    {
		price = 35000;
		tax = 0.9;
        banditAccess = 5;
        heroAccess = 5;          
    };
    class a2_ch47f_armed_plus_EPOCH
    {
		price = 35000;
		tax = 0.9;
        banditAccess =5;
        heroAccess = 5;          
    };

    class C_Heli_Light_01_armed_EPOCH
    {
		price = 30000;
		// tax = 0.9;
        banditAccess =5;
        heroAccess = 5;          
    };
    class C_Heli_Light_01_armed_plus_EPOCH
    {
		price = 35000;
		// tax = 0.9;
        banditAccess =5;
        heroAccess = 5;          
    };
    class O_Heli_Light_02_unarmed_EPOCH
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
    class I_Heli_Transport_02_EPOCH
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
    class I_Heli_light_03_unarmed_EPOCH
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
    class C_Heli_Light_01_civil_EPOCH
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;          
    };
	class C_Heli_Light_01_civil_2seat_EPOCH: C_Heli_Light_01_civil_EPOCH {};
	class C_Heli_Light_01_civil_4seat_EPOCH: C_Heli_Light_01_civil_EPOCH {};
    class O_Heli_Transport_04_EPOCH
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;               
    };
    class O_Heli_Transport_04_bench_EPOCH : O_Heli_Transport_04_EPOCH {};
    class O_Heli_Transport_04_box_EPOCH: O_Heli_Transport_04_EPOCH {};
    class O_Heli_Transport_04_covered_EPOCH: O_Heli_Transport_04_EPOCH {};
 
    class B_Heli_Transport_03_unarmed_EPOCH
    {
        price = 25000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;          
    };

    class I_UAV_01_F
    {
        price = 50;
    };
    class jetski_epoch
    {
        price = 500;
		// tax = 0.9;
    };
    class ebike_epoch
    {
        price = 3500;
		// tax = 0.9;
    };
    
    class mosquito_epoch
    {
        price = 10000;
		// tax = 0.9;
    };
    
    class K01
    {
        price = 300;
		// tax = 0.9;
    };
    class K02
    {
        price = 300;
		// tax = 0.9;
    };
    class K03
    {
        price = 300;
		// tax = 0.9;
    };
    class K04
    {
        price = 300;
		// tax = 0.9;
    };
    

    class CUP_C_Fishing_Boat_Chernarus
    {
        price = 800;
		// tax = 0.9;
    };

    class CUP_B_Zodiac_USMC
    {
        price = 800;
		// tax = 0.9;
    };

   // These are the Arma SUV which are a sort of large hatchback
    class C_SUV_01_EPOCH
    {
        price = 7500;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;           
    };
	class C_SUV_01_EPOCH1: C_SUV_01_EPOCH{};
	class C_SUV_01_EPOCH2: C_SUV_01_EPOCH{};
	class C_SUV_01_EPOCH3: C_SUV_01_EPOCH{};
	class C_SUV_01_EPOCH4: C_SUV_01_EPOCH{};

    // these are the A2 SUVs
	class A2_SUV_EPOCH
	{
        price = 15000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;         
	};
	class A2_SUV_load_EPOCH : A2_SUV_EPOCH {};
    class CUP_C_SUV_CIV : A2_SUV_EPOCH {};

    // And these the A2 Armed SUVs
	class A2_SUV_armed_EPOCH
	{
        price = 25000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
	};    
    class CUP_C_SUV_TK :A2_SUV_armed_EPOCH {};

    // Unarmed HMMWV
    class CUP_B_HMMWV_Transport_USA
    {
        price = 20000;
		// tax = 0.9;
        banditAccess = 2;
        heroAccess = 2;          
    };
    class CUP_B_HMMWV_Unarmed_USA : CUP_B_HMMWV_Transport_USA {};
    class CUP_B_HMMWV_Ambulance_USA : CUP_B_HMMWV_Transport_USA {};
	class A2_HMMWV_EPOCH : CUP_B_HMMWV_Transport_USA {};
	class A2_HMMWV_load_EPOCH : CUP_B_HMMWV_Transport_USA {};


    class CUP_B_nM1025_M240_NATO
    {
        price = 30000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;                
    };    
    class CUP_B_nM1025_M2_NATO : CUP_B_nM1025_M240_NATO {};
    class CUP_B_nM1025_SOV_Mk19_USA_DES : CUP_B_nM1025_M240_NATO {};
    class CUP_B_M1030 // Motorcycle
    {
        price = 5000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;         
    };

    // Land Rover Unarmed 
    class CUP_B_LR_Transport_CZ_D
    {
        price = 20000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;         
    };    
    class CUP_B_LR_Transport_CZ_W : CUP_B_LR_Transport_CZ_D {};
    class CUP_C_LR_Transport_CTK : CUP_B_LR_Transport_CZ_D {};

    // Landrover Armed
    class CUP_B_LR_MG_GB_W
    {
        price = 30000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
    class CUP_B_LR_Special_GMG_GB_W : CUP_B_LR_MG_GB_W {};

    class CUP_C_Datsun_Covered
    {
        price = 7500;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;             
    };
    class CUP_C_Datsun_Plain : CUP_C_Datsun_Covered {};
    class CUP_C_Datsun_Tubeframe : CUP_C_Datsun_Covered {};
    class CUP_C_Datsun_4seat : CUP_C_Datsun_Covered {};
    class CUP_C_Datsun : CUP_C_Datsun_Covered {};

    class CUP_C_Golf4_green_Civ
    {
        price = 7500;
		// tax = 0.9;
        banditAccess = 2;
        heroAccess = 2;         
    };
	class A2_Golf_EPOCH : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_red_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_blue_Civ  : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_black_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_kitty_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_reptile_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_camodigital_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_camodark_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_camo_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_white_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_whiteblood_Civ : CUP_C_Golf4_green_Civ {};
    class CUP_C_Golf4_yellow_Civ : CUP_C_Golf4_green_Civ {};

    class CUP_C_Ural_Civ_03
    {
        price = 15000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;          
    };
    class CUP_C_Ural_Open_Civ_03 : CUP_C_Ural_Civ_03 {};
    class CUP_C_Ural_Civ_02 : CUP_C_Ural_Civ_03 {};
    class CUP_C_Ural_Civ_01 : CUP_C_Ural_Civ_03 {};
    class CUP_C_Ural_Open_Civ_01 : CUP_C_Ural_Civ_03 {};
     class CUP_B_Ural_CDF : CUP_C_Ural_Civ_03 {};
    class CUP_B_Ural_Open_CDF : CUP_C_Ural_Civ_03 {};
    class CUP_C_Ural_Open_Civ_02 : CUP_C_Ural_Civ_03 {};
    class CUP_B_Ural_Empty_CDF : CUP_C_Ural_Civ_03 {};
	class A2_Ural_EPOCH : CUP_C_Ural_Civ_03 {};

    class CUP_B_TowingTractor_USMC 
    {
        price = 800;
		//tax = 0.9;
        banditAccess = 2;
        heroAccess = 2;         
    };

    class CUP_C_C47_CIV
    {
        price = 16000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
    };


    class CUP_C_Octavia_CIV
    {
        price = 7500;
		// tax = 0.9;
        banditAccess = 2;
        heroAccess = 2;          
    };


    // Unarmed UAZ
	class A2_UAZ_EPOCH
	{
        price = 7500;
		// tax = 0.9;
        banditAccess = 1;
        heroAccess = 1;          
	};
	class A2_UAZ_Open_EPOCH : A2_UAZ_EPOCH {};
    class CUP_C_UAZ_Unarmed_TK_CIV: A2_UAZ_EPOCH {};
    class CUP_B_UAZ_Unarmed_CDF : A2_UAZ_EPOCH {};

    // Armed UAZ
    class CUP_C_UAZ_Open_TK_CIV
    {
        price = 15000;
		// tax = 0.9;
        banditAccess = 3;
        heroAccess = 3;            
    };
    class CUP_B_UAZ_AGS30_CDF : CUP_C_UAZ_Open_TK_CIV {};
    class CUP_B_UAZ_MG_CDFCUP_C_UAZ_Open_TK_CIV {};
 
    class CUP_C_DC3_CIV
    {
        price = 24000;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
    };

    class CUP_B_AW159_HIL
    {
        price = 45000;
        // tax = 0.9;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;           
    };
    class CUP_B_412_Mil_Transport_HIL 
    {
        price = 25000;
        // tax = 0.9;
		// tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;           
    };
    class CUP_B_MH6J_OBS_USA 
    {
        price = 25000;
        // tax = 0.9;
        banditAccess = 4;
        heroAccess = 4;         
    };

    class CUP_B_UH1Y_UNA_USMC 
    {
        price = 75000;
        // tax = 0.9;
        banditAccess = 5;
        heroAccess = 5;         
    };
    
    class C_Boat_Transport_02_F
    {
        price = 12000;
		// tax = 0.9;
    };
    class C_Scooter_Transport_01_F
    {
        price = 12000;
		// tax = 0.9;
    };
  
    class B_T_VTOL_01_vehicle_blue_EPOCH
    {
        price = 10000;
		// tax = 0.9;
        banditAccess = 5;
        heroAccess = 5;        
    };
    class B_T_VTOL_01_infantry_olive_EPOCH : B_T_VTOL_01_vehicle_blue_EPOCH {};
	class O_T_VTOL_02_infantry_EPOCH : B_T_VTOL_01_vehicle_blue_EPOCH {};
	class O_T_VTOL_02_vehicle_grey_EPOCH: B_T_VTOL_01_vehicle_blue_EPOCH {};
    
    class C_Plane_Civil_01_F
    {
        price = 50000;
		// tax = 0.9;
    };
    class C_Plane_Civil_01_racing_F
    {
        price = 50000;
		// tax = 0.9;
    };