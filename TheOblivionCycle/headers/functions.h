#include "classes.h"
#pragma once

// Functions

// Places
int blacksmith(int i);
int castle(int i);
int circleofstones(int i);
int inn(int i);
void adventure();
int provisioner(int i);
int temple(int i);

// Utilities
void battle_sim(monster);
void Color(int color);
void CreateHero();
void intro();
void checklevelup(int level, int prof, int exp);
int options(int i);
void load_game();
void save_game();
void info_screen();
void player_score();
void spellbook();
void inventory();
void help_screen();
void weapons_display();
void armor_display();
void printroll(int roll1, int roll2, int roll3);
void gambling();
void show_statbar(string name, int level, int exp, string weapon, string armor);
void ShowConsoleCursor(bool showFlag);
void typer(std::string& str, int speed);

// Print Images
void print_blacksmith();
void print_castle();
void print_createhero();
void print_gameinfo();
void print_inn();
void print_options();
void print_provisions();
void print_rlm();
void print_score();
void print_spellbook();
void print_stones();
void print_temple();
void print_title();
void print_village();
void print_inventory();
void print_weapons();
void print_armor();
void print_infoscreen();
void print_preparecombat();
void print_help();
void print_king();
void print_gambling();
void print_flask();