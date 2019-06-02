class Box_NATO_Ammo_F;
class Box_NATO_Wps_F;
class Box_NATO_Support_F;
class Box_NATO_WpsLaunch_F;
class Box_NATO_Uniforms_F;
class B_SupplyCrate_F;

class EC_AmmoBox : Box_NATO_Ammo_F {
    author = ALiVE ORBAT CREATOR;
    displayName = [EC] Ammo Box;
    class TransportMagazines {
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag,50);
        mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,50);
        mag_xx(rhs_mag_an_m8hc,50);
        mag_xx(rhs_mag_m18_red,50);
        mag_xx(rhs_mag_m18_green,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow,50);
        mag_xx(rhs_mag_m18_yellow,50);
        mag_xx(rhs_mag_m18_purple,50);
        mag_xx(Chemlight_red,50);
        mag_xx(rhs_mag_m67,50);
        mag_xx(rhs_mag_M441_HE,50);
        mag_xx(rhs_mag_M585_white,50);
        mag_xx(rhsusf_50Rnd_762x51,50);
        mag_xx(rhs_fim92_mag,50);
        mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,50);
    };
    class TransportWeapons {
    };
    class TransportItems {
    };
};
class EC_WeaponsBox : Box_NATO_Wps_F {
    author = ALiVE ORBAT CREATOR;
    displayName = [EC] Weapons Box;
    class TransportMagazines {
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag,50);
        mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,50);
        mag_xx(rhs_mag_M441_HE,50);
        mag_xx(rhsusf_50Rnd_762x51,50);
        mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,50);
    };
    class TransportWeapons {
        weap_xx(rhs_m4_acog_usmc,10);
        weap_xx(rhsusf_weap_m9,10);
        weap_xx(rhs_m4_acog2_usmc,10);
        weap_xx(rhs_weap_m4_carryhandle_grip3,10);
        weap_xx(rhs_m4_m203_acog_usmc,10);
        weap_xx(rhs_weap_m240b_usmc,10);
        weap_xx(rhs_weap_m16a4_carryhandle_grip2,10);
        weap_xx(rhs_weap_m16a4_acog_usmc,10);
        weap_xx(rhs_weap_sr25_usmc,10);
        weap_xx(rhs_weap_m16a4_m203_acog_usmc,10);
        weap_xx(rhs_weap_m27iar_bipod_acog_usmc,10);
        weap_xx(rhs_weap_m4_carryhandle,10);
    };
    class TransportItems {
        item_xx(rhsusf_acc_anpeq16a_top,10);
        item_xx(rhsusf_acc_ACOG_USMC,10);
        item_xx(rhsusf_acc_ACOG2_USMC,10);
        item_xx(rhsusf_acc_anpeq16a,10);
        item_xx(rhsusf_acc_ACOG3_USMC,10);
        item_xx(rhsusf_acc_grip3,10);
        item_xx(rhsusf_acc_ACOG_MDO,10);
        item_xx(rhsusf_acc_premier,10);
        item_xx(rhsusf_acc_harris_bipod,10);
    };
};
class EC_LaunchersBox : Box_NATO_WpsLaunch_F {
    author = ALiVE ORBAT CREATOR;
    displayName = [EC] Launchers Box;
    class TransportMagazines {
        mag_xx(rhs_fgm148_magazine_AT,5);
        mag_xx(rhs_fim92_mag,5);
    };
    class TransportWeapons {
        weap_xx(rhs_weap_fgm148,5);
        weap_xx(rhs_weap_fim92,5);
    };
    class TransportItems {
    };
};
class EC_UniformBox : Box_NATO_Uniforms_F {
    author = ALiVE ORBAT CREATOR;
    displayName = [EC] Uniform Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(rhs_uniform_FROG01_wd,15);
        item_xx(U_B_HeliPilotCoveralls,15);
    };
};
class EC_SupportBox : Box_NATO_Support_F {
    author = ALiVE ORBAT CREATOR;
    displayName = [EC] Support Box;
    class TransportWeapons {
    };
    class TransportMagazines {
    };
    class TransportItems {
        item_xx(Binocular,10);
        item_xx(rhsusf_spc_squadleader,10);
        item_xx(rhs_8point_marpatwd,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(rhsusf_bino_lerca_1200_black,10);
        item_xx(rhsusf_mich_helmet_marpatwd_alt_headset,10);
        item_xx(rhsusf_lwh_helmet_marpatwd_headset,10);
        item_xx(rhsusf_spc_teamleader,10);
        item_xx(rhsusf_lwh_helmet_marpatwd_ess,10);
        item_xx(rhsusf_falconii_coy_gr,10);
        item_xx(rhsusf_spc_mg,10);
        item_xx(rhsusf_assault_eagleaiii_coy_mg,10);
        item_xx(rhsusf_spc_rifleman,10);
        item_xx(rhsusf_lwh_helmet_marpatwd,10);
        item_xx(rhsusf_spc_light,10);
        item_xx(rhsusf_assault_eagleaiii_coy_aa,10);
        item_xx(rhsusf_assault_eagleaiii_coy_engineer,10);
        item_xx(rhs_googles_clear,10);
        item_xx(rhsusf_spc_marksman,10);
        item_xx(rhsusf_mich_helmet_marpatwd_norotos_arc,10);
        item_xx(rhsusf_spc_iar,10);
        item_xx(rhsusf_assault_eagleaiii_coy_m27,10);
        item_xx(RHS_jetpilot_usaf,10);
        item_xx(ItemGPS,10);
        item_xx(H_Cap_headphones,10);
        item_xx(rhsusf_spc_crewman,10);
        item_xx(rhsusf_cvc_green_ess,10);
    };
};
class EC_SupplyBox : B_SupplyCrate_F {
    author = ALiVE ORBAT CREATOR;
    displayName = [EC] Supply Box;
    class TransportMagazines {
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag,50);
        mag_xx(rhsusf_mag_15Rnd_9x19_FMJ,50);
        mag_xx(rhs_mag_an_m8hc,50);
        mag_xx(rhs_mag_m18_red,50);
        mag_xx(rhs_mag_m18_green,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Red,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Green,50);
        mag_xx(rhs_mag_30Rnd_556x45_M855_Stanag_Tracer_Yellow,50);
        mag_xx(rhs_mag_m18_yellow,50);
        mag_xx(rhs_mag_m18_purple,50);
        mag_xx(Chemlight_red,50);
        mag_xx(rhs_mag_m67,50);
        mag_xx(rhs_mag_M441_HE,50);
        mag_xx(rhs_mag_M585_white,50);
        mag_xx(rhsusf_50Rnd_762x51,50);
        mag_xx(rhs_fim92_mag,50);
        mag_xx(rhsusf_20Rnd_762x51_SR25_m118_special_Mag,50);
    };
    class TransportWeapons {
        weap_xx(rhs_m4_acog_usmc,10);
        weap_xx(rhsusf_weap_m9,10);
        weap_xx(rhs_m4_acog2_usmc,10);
        weap_xx(rhs_weap_m4_carryhandle_grip3,10);
        weap_xx(rhs_m4_m203_acog_usmc,10);
        weap_xx(rhs_weap_m240b_usmc,10);
        weap_xx(rhs_weap_m16a4_carryhandle_grip2,10);
        weap_xx(rhs_weap_m16a4_acog_usmc,10);
        weap_xx(rhs_weap_sr25_usmc,10);
        weap_xx(rhs_weap_m16a4_m203_acog_usmc,10);
        weap_xx(rhs_weap_m27iar_bipod_acog_usmc,10);
        weap_xx(rhs_weap_m4_carryhandle,10);
        weap_xx(rhs_weap_fgm148,10);
        weap_xx(rhs_weap_fim92,10);
    };
    class TransportItems {
        item_xx(rhsusf_acc_anpeq16a_top,10);
        item_xx(rhsusf_acc_ACOG_USMC,10);
        item_xx(rhsusf_acc_ACOG2_USMC,10);
        item_xx(rhsusf_acc_anpeq16a,10);
        item_xx(rhsusf_acc_ACOG3_USMC,10);
        item_xx(rhsusf_acc_grip3,10);
        item_xx(rhsusf_acc_ACOG_MDO,10);
        item_xx(rhsusf_acc_premier,10);
        item_xx(rhsusf_acc_harris_bipod,10);
        item_xx(Binocular,10);
        item_xx(rhsusf_spc_squadleader,10);
        item_xx(rhs_8point_marpatwd,10);
        item_xx(ItemMap,10);
        item_xx(ItemCompass,10);
        item_xx(ItemWatch,10);
        item_xx(ItemRadio,10);
        item_xx(rhsusf_bino_lerca_1200_black,10);
        item_xx(rhsusf_mich_helmet_marpatwd_alt_headset,10);
        item_xx(rhsusf_lwh_helmet_marpatwd_headset,10);
        item_xx(rhsusf_spc_teamleader,10);
        item_xx(rhsusf_lwh_helmet_marpatwd_ess,10);
        item_xx(rhsusf_falconii_coy_gr,10);
        item_xx(rhsusf_spc_mg,10);
        item_xx(rhsusf_assault_eagleaiii_coy_mg,10);
        item_xx(rhsusf_spc_rifleman,10);
        item_xx(rhsusf_lwh_helmet_marpatwd,10);
        item_xx(rhsusf_spc_light,10);
        item_xx(rhsusf_assault_eagleaiii_coy_aa,10);
        item_xx(rhsusf_assault_eagleaiii_coy_engineer,10);
        item_xx(rhs_googles_clear,10);
        item_xx(rhsusf_spc_marksman,10);
        item_xx(rhsusf_mich_helmet_marpatwd_norotos_arc,10);
        item_xx(rhsusf_spc_iar,10);
        item_xx(rhsusf_assault_eagleaiii_coy_m27,10);
        item_xx(RHS_jetpilot_usaf,10);
        item_xx(ItemGPS,10);
        item_xx(H_Cap_headphones,10);
        item_xx(rhsusf_spc_crewman,10);
        item_xx(rhsusf_cvc_green_ess,10);
        item_xx(rhs_uniform_FROG01_wd,10);
        item_xx(U_B_HeliPilotCoveralls,10);
    };
};