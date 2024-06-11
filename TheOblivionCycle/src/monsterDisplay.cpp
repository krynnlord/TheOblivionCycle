#include "../headers/functions.h"

void monster_display(monster enemy)
{
    
    // ADJECTIVES
    if (enemy.adj == "Rotten") { enemy.desc = "Rotting decay pours off the "; }
    if (enemy.adj == "Perfect") { enemy.desc = "A seemingly flawless "; }
    if (enemy.adj == "Grand") { enemy.desc = "A well built "; }
    if (enemy.adj == "Young") { enemy.desc = "A under-developed "; }
    if (enemy.adj == "Sacred") { enemy.desc = "Covered in jewels and auromatic scents the "; }
    if (enemy.adj == "Old") { enemy.desc = "The barely able to move "; }
    if (enemy.adj == "Weak") { enemy.desc = "A desperate joke of a "; }
        
    // TYPES
    if (enemy.type == "Skeleton") { enemy.desc.append("figure made of no flesh and only bones.\nThey are usually found in cemeteries and old caverns.");}
    if (enemy.type == "Zombie") { enemy.desc.append("animated dead that smells of rot and decay."); }
    if (enemy.type == "Giant Bat") { enemy.desc.append("nocturnal flying hunter that hunts its prey\nusing soundwaves due to being blind."); }
    if (enemy.type == "Giant Boar") { enemy.desc.append("animal covered in coarse greyish-blak fur."); }
    if (enemy.type == "Skeletal Warrior") { enemy.desc.append("figure made of no flesh and only bones\nAdorned with a rusted sword and shield."); }
    if (enemy.type == "Wolf") { enemy.desc.append("pack hunter known for their cunning."); }
    if (enemy.type == "Grimlock") { enemy.desc.append("muscular humanoid with thick, grey scaly\nskin and blank, eyeless eye sockets."); }
    if (enemy.type == "Ooze") { enemy.desc.append("amorphous creatures that lives only to eat."); }
    if (enemy.type == "Centipede") { enemy.desc.append("100 legges creature that stunns it prey."); }
    if (enemy.type == "Sprite") { enemy.desc.append("small flying fairy like creature."); }
    if (enemy.type == "Goblin") { enemy.desc.append("green humanoid that incites mischief and terror."); }
    if (enemy.type == "Goblin Warrior") { enemy.desc.append("muscular green humanoid that lives\nto stalk and kill its prey."); }
    if (enemy.type == "Gnoll") { enemy.desc.append("hyena-headed, evil humanoids that wander in\nloose tribes."); }
    if (enemy.type == "Hobgoblin") { enemy.desc.append("larger cousin of the gobline which\nare more agressive."); }
    if (enemy.type == "Satyr") { enemy.desc.append("half-man, half-goat like creature ofter seen\nplaying a flute."); }
    if (enemy.type == "Orc") { enemy.desc.append("agressive humanoid that raid, pillage, and\nbattle other creatures."); }
    if (enemy.type == "Ash Zombie") { enemy.desc.append("animated dead that smells of rot and decay.\nThe skin is burned, and resembles ashes"); }

    system("cls");
    Color(10); cout << "Monster Information" << endl; Color(7);
    int bar1; for (bar1 = 0;bar1 < 55;bar1++) { cout << "-"; };
    cout << endl;
    Color(14); cout << "Name: ";Color(7); Color(7); cout << enemy.name << endl;
    Color(14); cout << "Level: ";Color(7); cout << enemy.level << endl;
    Color(14); cout << "HP: ";Color(7); cout << enemy.hp << "/" << left << setw(3); cout << enemy.hp_max << endl;
    Color(14); cout << "Damage: ";Color(7); cout << left << setw(3); cout << enemy.damage << endl;
    Color(14); cout << "Status: ";Color(7); cout << left << setw(3); 
    if (enemy.stat == 1) { cout << "Normal"; }
    if (enemy.stat == 2) { cout << "Poisoned"; }
    if (enemy.stat == 3) { cout << "Burning"; }
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
        string enemy_adj[] = { "Perfect", "Grand", "Young", "Sacred", "Old", "Weak"};
        string enemy_type[] = { "Skeleton","Zombie","Giant Bat","Giant Boar", "Skeletal Warrior", "Wolf", "Grimlock", "Ooze", "Centipede", "Sprite", "Goblin", "Goblin Warrior","Gnoll", "Hobgoblin","Satyr","Orc", "Ash Zombie"};
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

    // SET HP
    random_enemy.hp = (20 * max_level_mod) + roll;              //SET Monster HP
    random_enemy.hp_max = random_enemy.hp;                      //SET Monster HP_MAX

    // HP Modifiers
    if (random_enemy.adj == "Old") { random_enemy.hp -= (random_enemy.level * 3); random_enemy.hp_max = random_enemy.hp; }

    int levl_rand = max_level_mod * 3;
    roll = rand() % levl_rand + 1;
    random_enemy.damage = ((random_enemy.prof * 4) + 6) + roll; //SET Monster Damage

    // Attack Modifiers
    if (random_enemy.adj == "Weak") { random_enemy.damage -= (random_enemy.level + 3); }

    random_enemy.ac = static_cast<int>(round((max_level_mod + 4) / 2)) ;          //SET Monster AC
    roll = rand() % (max_level_mod - levl_rand) + 1;
    random_enemy.exp = ((max_level_mod * 5) + 5) + roll;        //SET Monster EXP
    roll = rand() % (max_level_mod - levl_rand) + 1;
    random_enemy.essence = ((max_level_mod * 6) + 2) + roll;    //SET Monster ESSENCE

    return random_enemy;
}