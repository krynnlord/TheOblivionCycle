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

// Battle
void hero_display();
void enemy_display(monster enemy);
void battle_log(monster, string, string, int);
void hero_turn(monster&, string&, int&, int&, int, int&);
void enemy_turn(monster&, string&, bool&);
int trinket_run(int&);
int magic_attack(int, int, int);
void magic_aid(int, int, int);
void magic_persistent_attack(int);
void trinket_start();
void trinket_cleanup();

// Conversations
void conversation_king();

// Utilities
void debug_screens();
void battle_sim(monster);
void battle_loop(int);
void player_death();
void loot(monster);
void vault();
void buy_weapons();
void buy_armor();
void weapon_equipper(weapon);
void armor_equipper(armor);
void trinket_equipper(trinket);
void buy_trinket();
void craft_prism();
void Color(int color);
void CreateHero();
void intro();
void king_ressurect();
void checklevelup();
int options(int i);
void check_music_vol();
void stream_music(int);
void music_player();
void load_game();
void save_game();
void info_screen();
void player_score();
void spellbook();
void memorize_spells();
string convert_spell(int);
string spell_level_checker(spell);
void fill_flask();
void trinkets();
void help_screen();
void weapons_display();
void armor_display();
void printroll(int, int, int);
void change_weapon();
void change_armor();
void change_trinket();
void gambling();
void show_statbar();
void ShowConsoleCursor(bool);
void typer(std::string&, int);
void trinket_checker(trinket);
void weapon_checker(weapon);
void armor_checker(armor);
void check_weapon_purchase(weapon&);
void check_armor_purchase(armor&);
void check_trinket_purchase(trinket&);

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
void print_intro_castle();
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
void print_music_player();
void print_rip();