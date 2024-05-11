#include "classes.h"
#pragma once

// Functions

// Places
int blacksmith(int i);
int castle(int i);
int circleofstones(int i);
int inn(int i);
void adventure();
int mystic(int i);
int temple(int i);

// Conversations
void conversation_king();

// Utilities
void battle_sim(monster);
void battle_loop(int);
void loot(monster);
void buy_weapons();
void buy_armor();
void Color(int color);
void CreateHero();
void intro();
void checklevelup();
int options(int i);
void load_game();
void save_game();
void info_screen();
void player_score();
void spellbook();
void fill_flask();
void trinkets();
void help_screen();
void weapons_display();
void armor_display();
void printroll(int roll1, int roll2, int roll3);
void gambling();
void show_statbar();
void ShowConsoleCursor(bool showFlag);
void typer(std::string& str, int speed);
void trinket_checker(trinket temp_trinket);
int master_damage_roller(int dice_i, int sides_i);
int trinket_run(int hero_total_atk);
int crit_roller();
int baseDamage_roller(int dice_i, int sides_i);
int final_calculations(int crit, int final);

// Print Images
void print_blacksmith();
void print_castle();
void print_createhero();
void print_gameinfo();
void print_inn();
void print_options();
void print_mystic();
void print_rlm();
void print_score();
void print_spellbook();
void print_stones();
void print_temple();
void print_title();
void print_village();
void print_trinkets();
void print_weapons();
void print_armor();
void print_infoscreen();
void print_preparecombat();
void print_help();
void print_king();
void print_gambling();
void print_flask();
void print_portal();
