#include "../headers/functions.h"

// Variables

// Tickers
int poison_ticker = 0;
int resent_rez = 0;

// Stats
int total_kills = 0;
int total_deaths = 0;

// Battle Screen Toggle
bool display_fight_symbol = true;

// Prisms for Closing Gates
bool prism_red = false;
bool prism_blue = false;
bool prism_purple = false;
bool prism_yellow = false;
bool prism_shimmering = false;

// Trinket Battle Vars
bool rabbit_foot_trigger = false;

// GOLD VAULT
int gold_vault = 0;

/////////////////////////////////////////
// Trinkets /////////////////////////////
/////////////////////////////////////////
 
// OFFENSIVE
trinket rabbit_foot = { 1, "RABBIT FOOT", "A rabbit foot on a chain", 1000, 1, 0};
trinket dragon_talon = { 2, "DRAGON TALON", "A dark talon of a dragon", 5000, 1, 0 };

//DEFENSIVE
trinket azure_neclace = { 21, "AZURE NECKLACE", "A blue necklace of divine power", 1500, 2, 0 };
trinket witch_effegy = { 22, "WITCH EFFEGY", "A crude stick figure shaped like a man", 2000,2, 0 };
trinket vial_blood = { 23, "VAIL OF BLOOD", "A small vial filled with blood", 4000, 2, 0 };
trinket frozen_tear = { 24, "FROZEN TEAR", "A frozen tear of a fairy", 6000, 2, 0 };

/////////////////////////////////////////
// Spells ///////////////////////////////
/////////////////////////////////////////
// Circle 1
spell heal = { "HEAL", "Heals for a small amount", 1, 0, 15, 1, 2 };
spell cure = { "CURE", "Heals for a small amount", 1, 0, 15, 1, 3 };
spell conjure_elixir = { "CONJURE ELIXIR", "Fills the Celestial Flask 1 charge", 1, 0, 15, 1, 4 };
spell magic_missile = { "MAGIC MISSILE", "Heals for a small amount", 1, 0, 15, 1, 5 };

// Circle 2
spell greater_heal = { "GREATER HEAL", "Heals for a small amount", 1, 0, 15, 2, 6 };
spell barrier = { "BARRIER", "Creates a protective barrier around user", 1, 0, 1, 2, 7 };
spell escape = { "ESCAPE", "Heals for a small amount", 1, 0, 15, 2, 8 };
spell fireball = { "FIREBALL","Sends a hurl of fire at opponent.", 1, 0, 25, 2, 9 };

// Circle 3
spell regeneration = { "REGENERATION", "Heals for a small amount", 1, 0, 15, 3, 10 };
spell holy_ground = { "HOLY GROUND", "Heals for a small amount", 1, 0, 15, 3, 11 };
spell doubleme = { "DOUBLE", "Heals for a small amount", 1, 0, 15, 3, 12 };
spell immolation = { "IMMOLATION", "Heals for a small amount", 1, 0, 15, 3, 13 };

vector<spell> spells_all = { heal, cure, conjure_elixir, magic_missile, greater_heal, barrier, escape, fireball, regeneration, holy_ground, doubleme, immolation };
/////////////////////////////////////////
// Weapons //////////////////////////////
/////////////////////////////////////////

// No Weapon
weapon hands = { 1, "Hands", "BLUNT", 0, "1d2","Your bare hands", 1 };

// Blunt
weapon club = { 2, "Club", "BLUNT", 200, "1d4", "",0 };
weapon mace = { 3, "Mace", "BLUNT", 500, "1d6", "",0 };
weapon lighthammer = { 4, "Light Hammer", "BLUNT", 1000, "1d8", "",0 };
weapon warhammer = { 5, "Warhammer", "BLUNT", 1000, "1d9", "",0 };
weapon maul = { 6, "Maul", "BLUNT", 5000, "2d6", "",0 };

// Slashing
weapon dagger = { 7, "Dagger", "SLASHING", 200, "1d4", "",0 };
weapon handaxe = { 8, "Handaxe", "SLASHING", 500, "1d6", "",0 };
weapon shortsword = { 9, "Short Sword", "SLASHING", 1000, "1d8", "",0 };
weapon longsword = { 10, "Long Sword", "SLASHING", 1500, "1d9", "",0 };
weapon greatsword = { 11, "Great Sword", "SLASHING", 5000, "2d6", "",0 };

/////////////////////////////////////////
// Armor ////////////////////////////////
/////////////////////////////////////////

// No Armor
armor tunic = { 1, "Tunic", "LIGHT", 0, 0,"A Plain shirt", 1 };

// Light
armor cloth_armor = { 2, "Cloth Armor", "LIGHT", 50, 2, "", 0 };
armor leather_armor = { 3, "Leather Armor", "LIGHT", 100, 4, "", 0 };

// Medium
armor chain_armor = { 4, "Chain Armor", "MEDIUM", 500, 6, "", 0 };
armor scale_armor = { 5, "Scale Armor", "MEDIUM", 600, 8, "", 0 };

// Heavy
armor splint_armor = { 6, "Splint Armor", "HEAVY", 2000, 10, "", 0 };
armor plate_armor = { 7, "Plate Armor", "HEAVY", 3000, 12, "", 0 };

// Hero Initial Creation
// name, hp, hp_max, luck, level, prof, exp, stat, gold, trinket, quest_level, essence, flask;
// Stat = 1 Normal | 2 Posioned | 3 Burning
player hero_player = { "Player", 100, 100, 0, 1, 1, 0, 1, 0, 0, 0, 0, 3 };
weapon hero_weapon = hands;
armor hero_armor = tunic;

/////////////////////////////////////////
// Monsters /////////////////////////////
/////////////////////////////////////////

// name, hp, hp_max, luck, level, prof, ac, damage, exp, essence, stat
// enemy luck reduces crit chance.
// Stat = 1 Normal | 2 Posioned | 3 Burning
// LVL 1
monster zombie = { "Zombie",22,22,0,1,1,8,"1d2",10,10,1};
monster skeleton = { "Skeleton",13,13,0,1,1,13,"1d2",5,5,1};
monster giant_bat = { "Giant Bat",22,22,0,1,1,13,"1d2",10,10,1};
monster giant_boar = { "Giant Boar",26,26,0,1,1,12,"1d2",15,12,1};
// LVL 2
monster ash_zombie = { "Ash Zombie",40,40,1,2,2,8,"1d4",15,15,1};
monster skeleton_warrior = { "Skeletal Warrior",35,35,0,2,2,13,"1d4",9,9,1};
monster giant_centipede = { "Giant Centipede",38,38,0,2,2,13,"1d4",15,15,1};
monster goblin = { "Goblin",42,42,2,2,2,12,"1d4",20,18,1};
// LVL 3
monster wolf = { "Wolf",43,43,1,3,2,8,"1d4",22,18,1};
monster grimlock = { "Grimlock",45,45,0,3,2,13,"1d4",24,15,1};
monster ooze = { "Ooze",48,48,0,3,2,13,"1d3",21,20,1};
monster sprite = { "Sprite",46,46,2,3,2,12,"1d4",22,21,1};
// LVL 4
monster goblin_warrior = { "Goblin Warrior",52,52,2,4,2,12,"1d5",24,25,1};
monster gnoll = { "Gnoll",55,55,2,4,2,12,"1d5",25,22,1};
monster hobgoblin = { "Hobgoblin",56,56,2,4,2,12,"1d5",26,21,1};
monster satyr = { "Satyr",48,48,3,4,2,12,"1d5",28,23,1};
monster orc = { "Orc",50,50,2,4,2,12,"1d5",28,25,1};
// LVL 5
monster imp = { "Imp",65,65,3,5,3,14,"1d6",35,36,1};
monster mimic = { "Mimic",64,64,3,5,3,14,"1d6",40,38,1};
monster griffon = { "Griffon",66,66,2,5,3,14,"1d8",39,39,1};
monster draconian_mage = { "Draconian Mage",60,60,1,5,3,12,"1d8",38,38,1};
// LVL 6
monster druid = { "Druid",70,70,2,6,3,15,"1d8",45,50,1};
monster gargoyle = { "Gargoyle",72,72,2,6,3,15,"1d8",42,42,1};
monster hellhound = { "Hellhound",75,75,1,6,3,15,"1d8",44,46,1};
monster lizardman = { "Lizardman",74,74,2,6,3,15,"1d8",46,56,1};
// LVL 7
monster centaur = { "Centaur",76,76,3,7,3,16,"1d9",51,58,1};
monster golem = { "Golem",80,80,2,7,4,16,"1d9",52,60,1};
monster ogre = { "Ogre",80,80,1,7,4,16,"2d5",60,60,1};
monster vampire = { "Vampire",80,80,3,7,3,15,"2d3",50,60,1};
// LVL 8
monster banshee = { "Banshee",182,182,2,8,3,17,"2d4",65,62,1};
monster ettin = { "Ettin",185,185,1,8,3,17,"2d4",66,60,1};
monster gorgon = { "Gorgon",181,181,3,8,4,17,"2d4",64,64,1};
monster wraith = { "Wraith",180,180,2,8,3,17,"2d4",62,62,1};
// LVL 9
monster grey_wyvern = { "Grey Wyvern",200,200,2,9,5,20,"2d5",100,86,1 };
monster green_drake = { "Green Drake",205,205,2,9,5,20,"2d5",105,84,1 };
monster copper_drake = { "Copper Drake",200,200,2,9,5,20,"2d5",100,85,1 };
// LVL 10
monster sea_serpent = { "Sea Serpent",215,215,2,10,6,20,"2d6",125,100,1 };
monster drow = { "Drow",225,225,1,10,6,20,"2d6",120,100,1 };
monster treant = { "Treant",240,240,3,10,6,20,"2d6",128,110,1 };
// LVL 11
monster naga = { "Naga",240,240,2,11,7,22,"2d7",150,145,1 };
monster shade = { "Shade",245,245,1,11,7,22,"2d6",155,180,1 };
monster djiin = { "Djiin",250,250,3,11,8,22,"2d7",180,200,1 };
// LVL 12
monster fire_dragon = { "Fire Dragon",350,350,3,12,8,25,"3d4",200,175,1 };
monster ice_dragon = { "Ice Dragon",350,350,3,12,8,25,"3d3",200,180,1 };
monster swamp_dragon = { "Swamp Dragon",350,350,3,12,8,25,"3d3",180,200,1 };

// Bosses
monster redgate_boss = { "Orc Champion",120,120,3,4,3,12,"2d3",100,100,1 };

vector<monster> monsters_all_red = {zombie, skeleton, giant_bat, giant_boar, ash_zombie, skeleton_warrior, giant_centipede, goblin, wolf, grimlock, ooze, sprite, goblin_warrior, gnoll, hobgoblin, satyr, orc};
vector<monster> monsters_all_blue = {imp, mimic, griffon, draconian_mage, druid, gargoyle, hellhound, lizardman, centaur, golem, ogre, vampire, banshee, ettin, gorgon, wraith};
vector<monster> monsters_all_purple = {grey_wyvern, green_drake, copper_drake, sea_serpent, drow, treant, naga, shade, djiin, fire_dragon, ice_dragon, swamp_dragon };