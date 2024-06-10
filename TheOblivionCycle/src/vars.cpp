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
player hero_player = { "Player", 270, 270, 0, 1, 2, 0, 1, 0, 0, 0, 0, 3 };
weapon hero_weapon = hands;
armor hero_armor = tunic;

/////////////////////////////////////////
// Monsters /////////////////////////////
/////////////////////////////////////////
// name, hp, hp_max, luck, level, prof, ac, damage, exp, essence, stat
// enemy luck reduces crit chance.
// Stat = 1 Normal | 2 Posioned | 3 Burning
monster random_enemy = { "Zombie",22,22,0,1,1,8,2,10,10,1 };

// Bosses
monster redgate_boss = { "Orc Champion",120,120,3,4,3,12,2,100,100,1 };