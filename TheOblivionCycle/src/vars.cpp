#include "../headers/functions.h"

// Variables

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
weapon warhammer = { 5, "Warhammer", "BLUNT", 1000, "1d10", "",0 };
weapon maul = { 6, "Maul", "BLUNT", 5000, "2d6", "",0 };

// Slashing
weapon dagger = { 7, "Dagger", "SLASHING", 200, "1d4", "",0 };
weapon handaxe = { 8, "Handaxe", "SLASHING", 500, "1d6", "",0 };
weapon shortsword = { 9, "Short Sword", "SLASHING", 1000, "1d8", "",0 };
weapon longsword = { 10, "Long Sword", "SLASHING", 1500, "1d10", "",0 };
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

vector<monster> monsters_all_red = {zombie, skeleton, giant_bat, giant_boar, ash_zombie, skeleton_warrior, giant_centipede, goblin, wolf, grimlock, ooze, sprite, goblin_warrior, gnoll, hobgoblin, satyr, orc};