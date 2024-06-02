#include "../headers/functions.h"

void monster_display(monster enemy)
{
    if (enemy.name == zombie.name) 
    {
        enemy.desc = "Listless, humanoid corpses, reanimated as guardians by powerful clerics or wizards.";
    }
    if (enemy.name == skeleton.name)
    {
        enemy.desc = "Skeletal remains of humanoids, reanimated as guardians by powerful magic-users or clerics. Often encountered in cemeteries, crypts, or other forlorn places.";
    }
    if (enemy.name == skeleton.name)
    {
        enemy.desc = "Skeletal remains of humanoids, reanimated as guardians by powerful magic-users or clerics. Often encountered in cemeteries, crypts, or other forlorn places.";
    }
    if (enemy.name == giant_boar.name)
    {
        enemy.desc = "Omnivorous wild boars that dwell primarily in forests. Can be irascible and dangerous, if disturbed.";
    }
    if (enemy.name == giant_bat.name)
    {
        enemy.desc = "Nocturnal, flying mammals that roost in caves or ruins.";
    }
    if (enemy.name == giant_centipede.name)
    {
        enemy.desc = "1 foot long centipedes that dwell in dark, damp locations.";
    }
    if (enemy.name == goblin.name)
    {
        enemy.desc = "Small, grotesque humanoids with pallid, earth-coloured skin and glowing, red eyes. Dwell underground.";
    }
    
    system("cls");
    cout << enemy.name << endl;
    cout << "-----------------" << endl;
    cout << enemy.desc << endl << endl;
    cout << "HP: " << enemy.hp << "/" << enemy.hp_max << endl;
    cout << "Damage: " << enemy.damage << endl << endl;
    
    cout << endl << endl; system("pause");
    return;
}