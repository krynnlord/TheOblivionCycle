#include "../headers/functions.h"

void monster_display(monster enemy)
{
    if (enemy.name == zombie.name) 
    {
        enemy.desc = "Listless, humanoid corpses, reanimated as guardians by\n"
                     "powerful clerics or wizards.";
    }
    if (enemy.name == skeleton.name)
    {
        enemy.desc = "Skeletal remains of humanoids, reanimated as guardians\n"
                     "by powerful magic-users or clerics. Often encountered \n"
                     "in cemeteries, crypts, or other forlorn places.";
    }
    if (enemy.name == giant_boar.name)
    {
        enemy.desc = "Omnivorous wild boars that dwell primarily in forests.\n"
                     "Can be irascible and dangerous, if disturbed.";
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
        enemy.desc = "Small, grotesque humanoids with pallid, earth-coloured\n"
                     "skin and glowing, red eyes. Dwell underground.";
    }
    if (enemy.name == goblin_warrior.name)
    {
        enemy.desc = "Small, grotesque humanoids with pallid, earth-coloured\n"
                     "skin and glowing, red eyes. Dwell underground.";
    }
    
    system("cls");
    Color(10); cout << "Monster Information" << endl; Color(7);
    int bar1; for (bar1 = 0;bar1 < 55;bar1++) { cout << "-"; };
    cout << endl;
    Color(14); cout << "Name: ";Color(7); Color(7); cout << enemy.name << endl;
    Color(14); cout << "Level: ";Color(7); cout << enemy.level << endl;
    Color(14); cout << "HP: ";Color(7); cout << enemy.hp << "/" << left << setw(3); cout << enemy.hp_max << endl;
    Color(14); cout << "Damage: ";Color(7); cout << left << setw(3); cout << enemy.damage;
    cout << endl;
    for (bar1 = 0;bar1 < 55;bar1++) { cout << "-"; };
    Color(14); cout << endl << "Description:\n"; Color(7);
    cout << enemy.desc << endl;
    for (bar1 = 0;bar1 < 55;bar1++) { cout << "-"; } cout << endl;
    string ans;
    ans = _getch();
    return;
}