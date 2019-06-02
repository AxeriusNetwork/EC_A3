class CfgGroups
{
    class WEST
    {
        class B_EC
        {
            name="[EC] Army";
            class Infantry
            {
                name="Infantry";
                class b_ec_infantry_platoon_1
                {
                    name="Platoon 1";
                    side=1;
                    faction="EC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup=0.5;
                    class Unit0
                    {
                        position[]={0,0,0};
                        rank="LIEUTENANT";
                        side=1;
                        vehicle="B_EC_Platoon_Leader_01";
                    };
                    class Unit1
                    {
                        position[]={5,-5,0};
                        rank="SERGEANT";
                        side=1;
                        vehicle="B_EC_Platoon_Sergeant_01";
                    };
                };
                class b_ec_infantry_squad_default
                {
                    name="Squad Default";
                    side=1;
                    faction="EC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup=0.5;
                    class Unit0
                    {
                        position[]={0,0,0};
                        rank="SERGEANT";
                        side=1;
                        vehicle="B_EC_Squad_Leader_01";
                    };
                    class Unit1
                    {
                        position[]={5,-5,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_Team_Leader_01";
                    };
                    class Unit2
                    {
                        position[]={-5,-5,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit3
                    {
                        position[]={10,-10,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit4
                    {
                        position[]={-10,-10,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit5
                    {
                        position[]={15,-15,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit6
                    {
                        position[]={-15,-15,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit7
                    {
                        position[]={20,-20,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_SARC_01";
                    };
                    class Unit8
                    {
                        position[]={-20,-20,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_Team_Leader_01";
                    };
                    class Unit9
                    {
                        position[]={25,-25,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit10
                    {
                        position[]={-25,-25,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit11
                    {
                        position[]={30,-30,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit12
                    {
                        position[]={-30,-30,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit13
                    {
                        position[]={35,-35,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_SARC_01";
                    };
                };
                class b_ec_infantry_squad_1
                {
                    name="Squad 1";
                    side=1;
                    faction="EC";
                    icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
                    rarityGroup=0.5;
                    class Unit0
                    {
                        position[]={0,0,0};
                        rank="SERGEANT";
                        side=1;
                        vehicle="B_EC_Squad_Leader_01";
                    };
                    class Unit1
                    {
                        position[]={5,-5,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_Team_Leader_01";
                    };
                    class Unit2
                    {
                        position[]={-5,-5,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_AT_Specialist_01";
                    };
                    class Unit3
                    {
                        position[]={10,-10,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit4
                    {
                        position[]={-10,-10,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_SARC_01";
                    };
                    class Unit5
                    {
                        position[]={15,-15,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit6
                    {
                        position[]={-15,-15,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Auto_Rifleman_01";
                    };
                    class Unit7
                    {
                        position[]={20,-20,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_Team_Leader_01";
                    };
                    class Unit8
                    {
                        position[]={-20,-20,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                    class Unit9
                    {
                        position[]={25,-25,0};
                        rank="CORPORAL";
                        side=1;
                        vehicle="B_EC_SARC_01";
                    };
                    class Unit10
                    {
                        position[]={-25,-25,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Auto_Rifleman_01";
                    };
                    class Unit11
                    {
                        position[]={30,-30,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Rifleman_01";
                    };
                };
            };
            class SpecOps
            {
                name="Special Forces";
            };
            class Motorized
            {
                name="Motorized Infantry";
            };
            class Motorized_MTP
            {
                name="Motorized Infantry (MTP)";
            };
            class Support
            {
                name="Support Infantry";
            };
            class Mechanized
            {
                name="Mechanized Infantry";
            };
            class Armored
            {
                name="Armor";
            };
            class Artillery
            {
                name="Artillery";
            };
            class Naval
            {
                name="Naval";
            };
            class Air
            {
                name="Air";
                class b_ec_infantry_section_1
                {
                    name="Section 1";
                    side=1;
                    faction="EC";
                    icon="\A3\ui_f\data\map\markers\nato\b_air.paa";
                    rarityGroup=0.5;
                    class Unit0
                    {
                        position[]={0,0,0};
                        rank="SERGEANT";
                        side=1;
                        vehicle="B_EC_Section_Leader_01";
                    };
                    class Unit1
                    {
                        position[]={5,-5,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Helicopter_Pilot_01";
                    };
                    class Unit2
                    {
                        position[]={-5,-5,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Helicopter_Pilot_01";
                    };
                    class Unit3
                    {
                        position[]={10,-10,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Crewman_01";
                    };
                    class Unit4
                    {
                        position[]={-10,-10,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Fighter_Pilot_01";
                    };
                    class Unit5
                    {
                        position[]={15,-15,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Fighter_Pilot_01";
                    };
                    class Unit6
                    {
                        position[]={-15,-15,0};
                        rank="PRIVATE";
                        side=1;
                        vehicle="B_EC_Crewman_01";
                    };
                };
            };
        };
    };
};