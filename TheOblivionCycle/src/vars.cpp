#include "../headers/functions.h"

// Variables

// Tickers
int poison_ticker = 0;
int recent_rez = 0;
int regen_ticker = 0;   
int hg_ticker = 0;       
int barrier_ticker = 0;  
int immo_ticker = 0;
int double_ticker = 0;

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
bool trigger = false;

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
weapon hands = { 1, "Hands", "BLUNT", 0, 2,"Your bare hands", 1 };

// Blunt
weapon club = { 2, "Club", "BLUNT", 100, 4, "",0 };
weapon mace = { 3, "Mace", "BLUNT", 500, 5, "",0 };
weapon lighthammer = { 4, "Light Hammer", "BLUNT", 1000, 7, "",0 };
weapon warhammer = { 5, "Warhammer", "BLUNT", 5000, 10, "",0 };
weapon maul = { 6, "Maul", "BLUNT", 8000, 11, "",0 };

// Slashing
weapon dagger = { 7, "Dagger", "SLASHING", 50, 3, "",0 };
weapon handaxe = { 8, "Handaxe", "SLASHING", 800, 6, "",0 };
weapon shortsword = { 9, "Short Sword", "SLASHING", 2000, 8, "",0 };
weapon longsword = { 10, "Long Sword", "SLASHING", 5000, 9, "",0 };
weapon greatsword = { 11, "Great Sword", "SLASHING", 10000, 12, "",0 };

/////////////////////////////////////////
// Armor ////////////////////////////////
/////////////////////////////////////////

// No Armor
armor tunic = { 1, "Tunic", "LIGHT", 0, 0,"A Plain shirt", 1 };

// Light
armor cloth_armor = { 2, "Cloth Armor", "LIGHT", 50, 5, "", 0 };
armor leather_armor = { 3, "Leather Armor", "LIGHT", 500, 10, "", 0 };

// Medium
armor chain_armor = { 4, "Chain Armor", "MEDIUM", 1000, 15, "", 0 };
armor scale_armor = { 5, "Scale Armor", "MEDIUM", 2000, 20, "", 0 };

// Heavy
armor splint_armor = { 6, "Splint Armor", "HEAVY", 3000, 25, "", 0 };
armor plate_armor = { 7, "Plate Armor", "HEAVY", 5000, 30, "", 0 };

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
monster redgate_boss = { "Kilthar the Unbreakable",300,300,2,4,5,8,30,100,100,1 };
monster bluegate_boss = { "Rotting King Thomas",500,500,2,8,9,8,50,150,150,1 };
monster purplegate_boss = { "Undead Princess Zethla",700,700,2,12,13,8,70,200,200,1 };
monster yellowgate_boss = { "Proto-Drake Ithlyius",900,900,2,16,16,17,90,250,250,1 };
monster final_boss = { "Demon King Azuleus",1200,1200,2,20,21,8,110,300,300,1 };