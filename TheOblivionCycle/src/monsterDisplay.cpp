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

monster monster_generator(int level, int gate)
{


    if (level >= 1 and gate == 1)
    {
        string enemy_adj[] = { "Rotten","Decayed","Broken", "Red","Green", "Wilted", "Perfect", "Grand", "Young", "Sacred", "Golden", "Rusted" };
        string enemy_type[] = { "Skeleton","Zombie","Giant Bat","Giant Boar", "Skeletal Warrior", "Wolf", "Grimlock", "Ooze", "Centipede", "Sprite", "Goblin", "Goblin Warrior","Gnoll", "Hobgoblin","Saytr","Orc", "Ash Zombie"};
        int enemy_rand_adj = 0;
        int enemy_rand_type = 0;
        srand((unsigned) time(NULL));
        enemy_rand_adj = rand() % (end(enemy_adj) - begin(enemy_adj));
        enemy_rand_type = rand() % (end(enemy_type) - begin(enemy_type));

        random_enemy.name = enemy_adj[enemy_rand_adj] + " " + enemy_type[enemy_rand_type];
    }
    
    if (level >= 5 and gate == 2)
    {
        string enemy_adj[] = { "Rotten","Decayed","Broken", "Red","Green", "Wilted", "Perfect", "Grand", "Young", "Sacred", "Golden", "Rusted" };
        string enemy_type[] = { "Imp", "Mimic", "Griffon", "Draconian Mage", "Druid", "Gargoyle", "Hellhound", "Lizardman","Centaur","Golem","Ogre","Vampire","Banshee","Ettin","Gorgon","Wraith"};
        int enemy_rand_adj = 0;
        int enemy_rand_type = 0;
        srand((unsigned)time(NULL));
        enemy_rand_adj = rand() % (end(enemy_adj) - begin(enemy_adj));
        enemy_rand_type = rand() % (end(enemy_type) - begin(enemy_type));

        random_enemy.name = enemy_adj[enemy_rand_adj] + " " + enemy_type[enemy_rand_type];
    }
    
    if (level >= 9 and gate == 3)
    {
        string enemy_adj[] = { "Rotten","Decayed","Broken", "Red","Green", "Wilted", "Perfect", "Grand", "Young", "Sacred", "Golden", "Rusted" };
        string enemy_type[] = { "Wyvern", "Drake", "Sea Serpent", "Drow", "Treant", "Naga", "Shade", "Djiin", "Dragon"};
        int enemy_rand_adj = 0;
        int enemy_rand_type = 0;
        srand((unsigned)time(NULL));
        enemy_rand_adj = rand() % (end(enemy_adj) - begin(enemy_adj));
        enemy_rand_type = rand() % (end(enemy_type) - begin(enemy_type));

        random_enemy.name = enemy_adj[enemy_rand_adj] + " " + enemy_type[enemy_rand_type];
    }

    random_enemy.level = level;
    int roll = 0;
    roll = rand() % 15 + 1;
    random_enemy.hp = 50 * level + roll;
    random_enemy.hp_max = random_enemy.hp;
    int levl_rand = level * 3;
    roll = rand() % levl_rand + 1;
    //random_enemy.damage = roll;
    random_enemy.ac = level + 1;
    roll = rand() % (level - levl_rand) + 1;
    random_enemy.exp = (level * 15) + roll;
    roll = rand() % (level - levl_rand) + 1;
    random_enemy.essence = (level * 10) + roll;

    cout << "Name: " << random_enemy.name << endl;
    cout << "HP: " << random_enemy.hp << endl;
    cout << "Attack: " << random_enemy.damage << endl;
    cout << "AC: " << random_enemy.ac << endl;
    cout << "Level: " << random_enemy.level << endl;
    cout << "EXP: " << random_enemy.exp << endl;
    cout << "ESSENCE: " << random_enemy.essence << endl;
    cout << endl;
    
    return random_enemy;
}