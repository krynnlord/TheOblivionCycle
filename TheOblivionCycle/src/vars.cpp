#include "../headers/functions.h"

// Variables

/////////////////////////////////////////
// Trinkets /////////////////////////////
/////////////////////////////////////////
 
// OFFENSIVE
trinket rabbit_foot = { 1, "RABBIT FOOT", "A rabbit foot on a chain", 1, 1, 1};
trinket dragon_talon = { 2, "DRAGON TALON", "A dark talon of a dragon", 1, 0, 0 };

//DEFENSIVE
trinket azure_neclace = { 4, "AZURE NECKLACE", "A blue necklace of divine power", 2, 0, 1 };
trinket witch_effegy = { 5, "WITCH EFFEGY", "A crude stick figure shaped like a man", 2, 0, 0 };
trinket vail_blood = { 5, "VAIL OF BLOOD", "A small vial filled with blood", 2, 0, 0 };

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
weapon hands = { 1, "Hands", "blunt", 0, "1d2","Your bare hands" };

// Blunt
weapon club = { 2, "Club", "blunt", 200, "1d4", "" };
weapon mace = { 3, "Mace", "blunt", 500, "1d6", "" };
weapon lighthammer = { 4, "Light Hammer", "blunt", 1000, "1d8", "" };
weapon warhammer = { 5, "warhammer", "blunt", 1000, "1d10", "" };
weapon maul = { 6, "Maul", "blunt", 5000, "2d6", "" };

// Slashing
weapon dagger = { 7, "Dagger", "slashing", 200, "1d4", "" };
weapon handaxe = { 8, "Handaxe", "slashing", 500, "1d6", "" };
weapon shortsword = { 9, "Short Sword", "slashing", 1000, "1d8", "" };
weapon longsword = { 10, "Long Sword", "slashing", 1500, "1d10", "" };
weapon greatsword = { 11, "Great Sword", "slashing", 5000, "2d6", "" };

/////////////////////////////////////////
// Armor ////////////////////////////////
/////////////////////////////////////////
// No Armor
armor tunic = { 1, "Tunic", "Light", 0, 1,"A Plain shirt" };

// Light
armor cloth_armor = { 2, "Cloth Armor", "Light", 50, 5, "" };
armor leather_armor = { 3, "Leather Armor", "Light", 100, 11, "" };

// Medium
armor chain_armor = { 4, "Chain Armor", "Medium", 500, 13, "" };
armor scale_armor = { 5, "Scale Armor", "Medium", 600, 14, "" };

// Heavy
armor splint_armor = { 6, "Splint Armor", "Heavy", 2000, 17, "" };
armor plate_armor = { 7, "Plate Armor", "Heavy", 3000, 18, "" };

/////////////////////////////////////////
// Monsters /////////////////////////////
/////////////////////////////////////////
monster zombie = { "Zombie",22,22,0,0,0,0,1,1,8,"1d2" };
monster zombie2 = { "Zombie",200,200,0,0,0,0,1,1,8,"2d3" }; //test unit
monster skeleton = { "Skeleton",13,13,0,0,0,0,1,1,13,"1d2" };
monster giant_bat = { "Giant Bat",22,22,0,0,0,0,1,1,13,"1d2" };
monster giant_boar = { "Giant Boar",42,42,0,0,0,0,1,1,12,"1d2" };

// Hero Initial Creation
player hero_player = { "Player", 100, 100, 0, 0, 0, 0, 1, 1, 0, 1, 2, 1 };
weapon hero_weapon = hands;
armor hero_armor = tunic;
