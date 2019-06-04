class CfgVehicle {
	class FlagCarrier;
    	class EC_Flag_Main : FlagCarrier {
    		author="Capwell";
            class SimpleObject
            {
                eden=0;
                animate[]=
                {
                    
                    {
                        "flag",
                        0
                    }
                };
                hide[]={};
                verticalOffset=3.977;
                verticalOffsetWorld=0;
                init="''";
            };
            editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Flag_F.jpg";
            scope=2;
            scopeCurator=2;
            displayName="Flag (EC)";
            class EventHandlers
            {
                init="(_this select 0) setFlagTexture '\EC_Data\Textures\EC_Flag_Main_CO.paa'";
            };
    	};
    class Land_Billboard_F;
        class EC_Billboard_Main: Land_Billboard_F {
            author="Capwell";
            scope=2;
            scopeCurator=2;
            displayName="Billboard (EC)";
            hiddenSelectionsTextures[]=
            {
                "\EC_Data\Textures\EC_Billboard_Main_CO.paa"
            };

        };
};