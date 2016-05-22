/*
 * Author: r4vn
 *
 * Description:
 * Configuration of lair.caches addon
 */

class CfgCaches {
    maxCount = 6;
    areaSize = 100;
    // This array stores all buildings in which a cache can spawn.
    // The first array entry of a building array is its class name and the
    // second is the buildingPos representing the location above terrain level
    // inside the building where the cache will be located.
    //
    // buildings[] = {
    //     {"house_class_name", 0},
    //     {"another_house_class_name", 1}
    // };
    buildings[] = {
        {"Land_i_Stone_HouseSmall_V1_F", 0},
        {"Land_i_Shed_Ind_F", 0},
        {"Land_Unfinished_Building_01_F", 2},
        {"Land_Slum_House02_F", 1}
    };
};
