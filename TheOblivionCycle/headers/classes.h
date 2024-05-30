#include "header.h"
#pragma once

extern int intro_sequence; // Game Settings
extern int music_setting; // 1-on 0-off
extern int music_vol; //0 mut 100 full
extern int music_track; // Music Selected 1-12
extern int crit_result0; //Battle Seq

extern int min_exp;
extern int gold_vault;
extern int poison_ticker;
extern int resent_rez;

extern int total_kills;
extern int total_deaths;

// Trinket Battle Vars
extern bool rabbit_foot_trigger;

// Classes

class player
{
public:
    string name;
    int hp;
    int hp_max;
    int luck;
    int level;
    int prof;
    int exp;
    int stat;
    int gold;
    int trinket;
    int quest_level;
    int essence;
    int flask;
};

class monster
{
public:
    string name;
    int hp;
    int hp_max;
    int luck;
    int level;
    int prof;
    int ac;
    string damage;
    int exp;
    int essence;
    int stat;
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

class trinket
{
public:
    int id;
    string name;
    string desc;
    int cost;
    int mod_type; //(1)Attack (2)Defense
    int have; //(0) No (1) Yes
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
    int have; //(0) No (1) Yes
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
    int have; //(0) No (1) Yes
};

// Variables

/////////////////////////////////////////
// Prisms ///////////////////////////////
/////////////////////////////////////////
extern bool prism_red;
extern bool prism_blue; 
extern bool prism_purple;
extern bool prism_yellow;
extern bool prism_shimmering;

/////////////////////////////////////////
// Trinkets /////////////////////////////
/////////////////////////////////////////

// OFFENSIVE
extern trinket rabbit_foot;
extern trinket dragon_talon;

// DEFENSIVE
extern trinket azure_neclace;
extern trinket witch_effegy;
extern trinket vial_blood;
extern trinket frozen_tear;

/////////////////////////////////////////
// Spells ///////////////////////////////
/////////////////////////////////////////
// Circle 1
extern spell heal;
extern spell cure;
extern spell conjure_elixir;
extern spell magic_missile;

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

// Hero Initial Creation
extern player hero_player;
extern weapon hero_weapon;
extern armor hero_armor;

/////////////////////////////////////////
// Monsters /////////////////////////////
/////////////////////////////////////////
extern monster zombie;
extern monster zombie2;
extern monster skeleton;
extern monster giant_bat;
extern monster giant_boar;
extern monster ash_zombie;
extern monster skeleton_warrior;
extern monster giant_centipede;
extern monster goblin;
extern monster wolf;
extern monster grimlock;
extern monster ooze;
extern monster sprite;
extern monster goblin_warrior;
extern monster gnoll;
extern monster hobgoblin;
extern monster satyr;
extern monster orc;

extern monster redgate_boss;

extern vector<monster> monsters_all_red;
extern vector<spell> spells_all;