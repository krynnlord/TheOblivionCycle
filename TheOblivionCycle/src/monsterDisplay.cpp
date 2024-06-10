#include "../headers/functions.h"

void monster_display(monster enemy)
{
    if (enemy.adj == "Rotten")
    {
        enemy.desc = "Rotting decay pours off the ";
    }
    else {enemy.desc = "A random "; }

    if (enemy.type == "Skeleton")
    {
        enemy.desc.append("figure made of no flesh and only bones.\nThey are usually found in cemeteries and old caverns.");
    }
    else { enemy.desc.append("monster."); }

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

        random_enemy.adj = enemy_adj[enemy_rand_adj];
        random_enemy.type = enemy_type[enemy_rand_type];
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

        random_enemy.adj = enemy_adj[enemy_rand_adj];
        random_enemy.type = enemy_type[enemy_rand_type];
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
        
        random_enemy.adj = enemy_adj[enemy_rand_adj];
        random_enemy.type = enemy_type[enemy_rand_type];
        random_enemy.name = enemy_adj[enemy_rand_adj] + " " + enemy_type[enemy_rand_type];
    }
    
    //SET Max Level Mod for Gates
    int max_level_mod = level; //SET BASE
    if (gate == 1 and hero_player.level > 4)  { max_level_mod = 4; }
    if (gate == 2 and hero_player.level > 8)  { max_level_mod = 8; }
    if (gate == 3 and hero_player.level > 12) { max_level_mod = 12; }
    if (gate == 4 and hero_player.level > 16) { max_level_mod = 16; }

    random_enemy.level = max_level_mod;                         //SET Monster Level
    random_enemy.prof = max_level_mod + 1;                      //SET Monster Profiecieny
    int roll = 0;
    roll = rand() % 15 + 1;
    random_enemy.hp = (20 * max_level_mod) + roll;              //SET Monster HP
    random_enemy.hp_max = random_enemy.hp;                      //SET Monster HP_MAX
    int levl_rand = max_level_mod * 3;
    roll = rand() % levl_rand + 1;
    random_enemy.damage = ((random_enemy.prof * 4) + 6) + roll; //SET Monster Damage
    random_enemy.ac = static_cast<int>(round((max_level_mod + 4) / 2)) ;          //SET Monster AC
    roll = rand() % (max_level_mod - levl_rand) + 1;
    random_enemy.exp = ((max_level_mod * 5) + 5) + roll;        //SET Monster EXP
    roll = rand() % (max_level_mod - levl_rand) + 1;
    random_enemy.essence = ((max_level_mod * 6) + 2) + roll;    //SET Monster ESSENCE

    return random_enemy;
}