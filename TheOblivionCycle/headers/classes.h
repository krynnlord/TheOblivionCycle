#include "header.h"
#pragma once

extern int intro_sequence; // Game Settings
extern int crit_result0; //Battle Seq

// Classes

class player
{
public:
    string name;
    int hp;
    int hp_max;
    int luck;
    int DEF_m;
    int DEF_s;
    int DEF_b;
    int level;
    int prof;
    int exp;
    int stat;
    int gold;
};

class monster
{
public:
    string name;
    int hp;
    int hp_max;
    int luck;
    int DEF_m;
    int DEF_s;
    int DEF_b;
    int level;
    int prof;
    int ac;
    string damage;
};

class spell
{
public:
    string name;
    string desc;
    int qty;
    int ready;
    int modifier;
    int circle;
    int levelreq;
};

class item
{
public:
    string name;
    string type;
    int value;
    int qty;
    string desc;
};

class weapon
{
public:
    int id;
    string name;
    string type;
    int cost;
    string damage;
    string description;
};

class armor
{
public:
    int id;
    string name;
    string type;
    int cost;
    int armorclass;
    string description;
};

// Variables

/////////////////////////////////////////
// Items ////////////////////////////////
/////////////////////////////////////////
extern item potion;

/////////////////////////////////////////
// Spells ///////////////////////////////
/////////////////////////////////////////
// Circle 1
extern spell heal;
extern spell cure;
extern spell create_food;
extern spell magic_missle;

// Circle 2
extern spell greater_heal;
extern spell barrier;
extern spell escape;
extern spell fireball;

// Circle 3
extern spell regeneration;
extern spell holy_ground;
extern spell doubleme;
extern spell immolation;

/////////////////////////////////////////
// Weapons //////////////////////////////
/////////////////////////////////////////
// No Weapon
extern weapon hands;

// Blunt
extern weapon club;
extern weapon mace;
extern weapon lighthammer;
extern weapon warhammer;
extern weapon maul;

// Slashing
extern weapon dagger;
extern weapon handaxe;
extern weapon shortsword;
extern weapon longsword;
extern weapon greatsword;

/////////////////////////////////////////
// Armor ////////////////////////////////
/////////////////////////////////////////
// No Armor
extern armor tunic;

// Light
extern armor cloth_armor;
extern armor leather_armor;

// Medium
extern armor chain_armor;
extern armor scale_armor;

// Heavy
extern armor splint_armor;
extern armor plate_armor;

/////////////////////////////////////////
// Monsters /////////////////////////////
/////////////////////////////////////////
extern monster zombie;
extern monster zombie2;
extern monster skeleton;
extern monster giant_bat;
extern monster giant_boar;

// Hero Initial Creation
extern player hero_player;
extern weapon hero_weapon;
extern armor hero_armor;