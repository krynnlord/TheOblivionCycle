#include "../headers/functions.h"

// Variables

/////////////////////////////////////////
// Trinkets /////////////////////////////
/////////////////////////////////////////
 
// OFFENSIVE
trinket rabbit_foot = { 1, "RABBIT FOOT", "A rabbit foot on a chain", 1, 0};
trinket dragon_talon = { 2, "DRAGON TALON", "A dark talon of a dragon", 1, 0 };

//DEFENSIVE
trinket azure_neclace = { 21, "AZURE NECKLACE", "A blue necklace of divine power", 2, 0 };
trinket witch_effegy = { 22, "WITCH EFFEGY", "A crude stick figure shaped like a man", 2, 0 };
trinket vail_blood = { 23, "VAIL OF BLOOD", "A small vial filled with blood", 2, 0 };
trinket frozen_tear = { 24, "FROZEN TEAR", "A frozen tear of a fairy", 2, 0 };

/////////////////////////////////////////
// Spells ///////////////////////////////
/////////////////////////////////////////
// Circle 1
spell heal = { "Heal", "Heals for a small amount", 3, 1, 15, 1, 1 };
spell cure = { "Cure", "Heals for a small amount", 0, 0, 15, 1, 2 };
spell create_food = { "Create Food", "Heals for a small amount", 0, 0, 15, 1, 3 };
spell magic_missle = { "Magic Missle", "Heals for a small amount", 0, 0, 15, 1, 4 };

// Circle 2
spell greater_heal = { "Greater Heal", "Heals for a small amount", 0, 0, 15, 2, 5 };
spell barrier = { "Barrier", "Creates a protective barrier around user", 0, 0, 1, 2, 6 };
spell escape = { "Escape", "Heals for a small amount", 0, 0, 15, 2, 7 };
spell fireball = { "Fireball","Sends a hurl of fire at opponent.", 2, 1, 25, 2, 8 };

// Circle 3
spell regeneration = { "Regeneration", "Heals for a small amount", 0, 0, 15, 3, 9 };
spell holy_ground = { "Holy Ground", "Heals for a small amount", 0, 0, 15, 3, 10 };
spell doubleme = { "Double", "Heals for a small amount", 0, 0, 15, 3, 11 };
spell immolation = { "Immolation", "Heals for a small amount", 0, 0, 15, 3, 12 };

/////////////////////////////////////////
// Weapons //////////////////////////////
/////////////////////////////////////////
// No Weapon
weapon hands = { 1, "Hands", "BLUNT", 0, "1d2","Your bare hands" };

// Blunt
weapon club = { 2, "Club", "BLUNT", 200, "1d4", "" };
weapon mace = { 3, "Mace", "BLUNT", 500, "1d6", "" };
weapon lighthammer = { 4, "Light Hammer", "BLUNT", 1000, "1d8", "" };
weapon warhammer = { 5, "warhammer", "BLUNT", 1000, "1d10", "" };
weapon maul = { 6, "Maul", "BLUNT", 5000, "2d6", "" };

// Slashing
weapon dagger = { 7, "Dagger", "SLASHING", 200, "1d4", "" };
weapon handaxe = { 8, "Handaxe", "SLASHING", 500, "1d6", "" };
weapon shortsword = { 9, "Short Sword", "SLASHING", 1000, "1d8", "" };
weapon longsword = { 10, "Long Sword", "SLASHING", 1500, "1d10", "" };
weapon greatsword = { 11, "Great Sword", "SLASHING", 5000, "2d6", "" };

/////////////////////////////////////////
// Armor ////////////////////////////////
/////////////////////////////////////////
// No Armor
armor tunic = { 1, "Tunic", "LIGHT", 0, 1,"A Plain shirt" };

// Light
armor cloth_armor = { 2, "Cloth Armor", "LIGHT", 50, 5, "" };
armor leather_armor = { 3, "Leather Armor", "LIGHT", 100, 11, "" };

// Medium
armor chain_armor = { 4, "Chain Armor", "MEDIUM", 500, 13, "" };
armor scale_armor = { 5, "Scale Armor", "MEDIUM", 600, 14, "" };

// Heavy
armor splint_armor = { 6, "Splint Armor", "HEAVY", 2000, 17, "" };
armor plate_armor = { 7, "Plate Armor", "HEAVY", 3000, 18, "" };

// Hero Initial Creation
// name, hp, hp_max, luck, DEF_m, DEF_s, DEF_b, level, prof, exp, stat, gold, trinket, quest_level, essence, flask;
player hero_player = { "Player", 100, 100, 0, 0, 0, 0, 1, 1, 0, 1, 2, 1, 0, 0, 3 };
weapon hero_weapon = hands;
armor hero_armor = tunic;

/////////////////////////////////////////
// Monsters /////////////////////////////
/////////////////////////////////////////
// name, hp, hp_max, luck, DEF_m, DEF_s, DEF_b, level, prof, ac, damage, exp, essence

// LVL 1
monster zombie = { "Zombie",22,22,0,0,0,0,1,1,8,"1d2",10,10};
monster skeleton = { "Skeleton",13,13,0,0,0,0,1,1,13,"1d2",5,5};
monster giant_bat = { "Giant Bat",22,22,0,0,0,0,1,1,13,"1d2",10,10};
monster giant_boar = { "Giant Boar",26,26,0,0,0,0,1,1,12,"1d2",15,12};
// LVL 2
monster ash_zombie = { "Ash Zombie",30,30,0,0,0,0,1,1,8,"1d4",15,15 };
monster skeleton_warrior = { "Skeletal Warriror",25,25,0,0,0,0,1,1,13,"1d4",9,9 };
monster giant_centipede = { "Giant Centipede",28,28,0,0,0,0,1,1,13,"1d4",15,15 };
monster goblin = { "Goblin",32,32,0,0,0,0,1,1,12,"1d4",20,18 };