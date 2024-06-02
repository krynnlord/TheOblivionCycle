#include "../headers/functions.h"

void monster_display(monster enemy)
{
    if (enemy.name == "Zombie")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Skeleton")
    {
        enemy.desc = "Skeletons arise when animated by dark magic. They heed the summons of spellcasters who call them from their stony tombs and ancient battlefields, or rise of their own accord in places saturated with death and loss, awakened by stirrings of necromantic energy or the presence of corrupting evil.";
    }
    if (enemy.name == "Giant Bat")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Giant Boar")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Ash Zombie")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Skeletal Warrior")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Giant Centipede")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Goblin")
    {
        enemy.desc = "Goblins are small, black-hearted, selfish humanoids that lair in caves, abandoned mines, despoiled dungeons, and other dismal settings. Individually weak, goblins gather in large sometimes overwhelming numbers. They crave power and regularly abuse whatever authority they obtain.";
    }
    if (enemy.name == "Wolf")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Grimlock")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Ooze")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Sprite")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Goblin Warrior")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Gnoll")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Hobgoblin")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Satyr")
    {
        enemy.desc = "";
    }
    if (enemy.name == "Orc")
    {
        enemy.desc = "";
    }



    cout << "Name: " << enemy.name << endl;
    cout << "HP: " << enemy.hp << "/" << enemy.hp_max << endl;
    cout << "Damage: " << enemy.damage << endl;
    cout << "\nDescription: \n" << enemy.desc << endl;
    cout << endl << endl; system("pause");
    return;
}