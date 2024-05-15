#include "../headers/functions.h"

extern player hero_player;
extern weapon hero_weapon;
extern armor hero_armor;
extern int intro_sequence;
extern int music_setting; // 1-on 0-off
extern int music_vol; //0 mut 100 full

// SAVE GAME
void save_game()
{

ofstream txtOut("TOC1.sav");

txtOut << "*** HERO ***" << endl;
txtOut << hero_player.name << endl;
txtOut << hero_player.hp << endl;
txtOut << hero_player.hp_max << endl;
txtOut << hero_player.luck << endl;
txtOut << hero_player.level << endl;
txtOut << hero_player.prof << endl;
txtOut << hero_player.exp << endl;
txtOut << hero_player.stat << endl;
txtOut << hero_player.gold << endl;
txtOut << hero_player.trinket << endl;
txtOut << hero_player.quest_level << endl;
txtOut << hero_player.essence << endl;
txtOut << hero_player.flask << endl;
txtOut << "*** WEAPON ***" << endl;
txtOut << hero_weapon.id << endl;
txtOut << hero_weapon.name << endl;
txtOut << hero_weapon.type << endl;
txtOut << hero_weapon.cost << endl;
txtOut << hero_weapon.damage << endl;
txtOut << hero_weapon.description << endl;
txtOut << "*** ARMOR ***" << endl;
txtOut << hero_armor.id << endl;
txtOut << hero_armor.name << endl;
txtOut << hero_armor.type << endl;
txtOut << hero_armor.cost << endl;
txtOut << hero_armor.armorclass << endl;
txtOut << hero_armor.description << endl;
txtOut << "*** GAME SETTINGS ***" << endl;
txtOut << intro_sequence << endl;
txtOut << music_setting << endl;
txtOut << music_vol << endl;
txtOut << music_track << endl;
txtOut << "*** TRINKETS ***" << endl;
txtOut << rabbit_foot.have << endl;
txtOut << dragon_talon.have << endl;
txtOut << azure_neclace.have << endl;
txtOut << witch_effegy.have << endl;
txtOut << vial_blood.have << endl;
txtOut << frozen_tear.have << endl;
txtOut << "*** PRISMS ***" << endl;
txtOut << prism_red << endl;
txtOut << prism_blue << endl;
txtOut << prism_purple << endl;
txtOut << prism_yellow << endl;
txtOut << prism_shimmering << endl;
txtOut << "*** SPELLS ***" << endl;
txtOut << heal.ready << endl;
txtOut << cure.ready << endl;
txtOut << heal.ready << endl;
txtOut << conjure_elixer.ready << endl;
txtOut << magic_missle.ready << endl;
txtOut << greater_heal.ready << endl;
txtOut << barrier.ready << endl;
txtOut << escape.ready << endl;
txtOut << fireball.ready << endl;
txtOut << regeneration.ready << endl;
txtOut << holy_ground.ready << endl;
txtOut << doubleme.ready << endl;
txtOut << immolation.ready;
txtOut.close();

};

// LOAD GAME
void load_game()
{

string emptyline;
string filename = "TOC1.sav";
ifstream txtIn(filename);
if (txtIn) 
{

getline(txtIn,emptyline);
getline(txtIn,hero_player.name);
getline(txtIn,emptyline); istringstream s1(emptyline); s1 >> hero_player.hp;
getline(txtIn,emptyline); istringstream s2(emptyline); s2 >> hero_player.hp_max;
getline(txtIn,emptyline); istringstream s3(emptyline); s3 >> hero_player.luck;
getline(txtIn,emptyline); istringstream s7(emptyline); s7 >> hero_player.level;
getline(txtIn,emptyline); istringstream s8(emptyline); s8 >> hero_player.prof;
getline(txtIn,emptyline); istringstream s9(emptyline); s9 >> hero_player.exp;
getline(txtIn,emptyline); istringstream s10(emptyline); s10 >> hero_player.stat;
getline(txtIn,emptyline); istringstream s11(emptyline); s11 >> hero_player.gold;
getline(txtIn,emptyline); istringstream s90(emptyline); s90 >> hero_player.trinket;
getline(txtIn, emptyline); istringstream s91(emptyline); s91 >> hero_player.quest_level;
getline(txtIn, emptyline); istringstream s92(emptyline); s92 >> hero_player.essence;
getline(txtIn, emptyline); istringstream s93(emptyline); s93 >> hero_player.flask;
getline(txtIn,emptyline);
getline(txtIn,emptyline); istringstream s12(emptyline); s12 >> hero_weapon.id;
getline(txtIn,hero_weapon.name);
getline(txtIn,emptyline); istringstream s13(emptyline); s13 >> hero_weapon.type;
getline(txtIn,emptyline); istringstream s14(emptyline); s14 >> hero_weapon.cost;
getline(txtIn,emptyline); istringstream s15(emptyline); s15 >> hero_weapon.damage;
getline(txtIn,hero_weapon.description);
getline(txtIn,emptyline);
getline(txtIn,emptyline); istringstream s16(emptyline); s16 >> hero_armor.id;
getline(txtIn,hero_armor.name);
getline(txtIn,emptyline); istringstream s17(emptyline); s17 >> hero_armor.type;
getline(txtIn,emptyline); istringstream s18(emptyline); s18 >> hero_armor.cost;
getline(txtIn,emptyline); istringstream s19(emptyline); s19 >> hero_armor.armorclass;
getline(txtIn,hero_armor.description);
getline(txtIn, emptyline);
getline(txtIn, emptyline); istringstream s20(emptyline); s20 >> intro_sequence;
getline(txtIn, emptyline); istringstream s21(emptyline); s21 >> music_setting;
getline(txtIn, emptyline); istringstream s22(emptyline); s22 >> music_vol;
getline(txtIn, emptyline); istringstream s94(emptyline); s94 >> music_track;
getline(txtIn, emptyline); // TRINKETS
getline(txtIn, emptyline); istringstream s23(emptyline); s23 >> rabbit_foot.have;
getline(txtIn, emptyline); istringstream s24(emptyline); s24 >> dragon_talon.have;
getline(txtIn, emptyline); istringstream s25(emptyline); s25 >> azure_neclace.have;
getline(txtIn, emptyline); istringstream s26(emptyline); s26 >> witch_effegy.have;
getline(txtIn, emptyline); istringstream s27(emptyline); s27 >> vial_blood.have;
getline(txtIn, emptyline); istringstream s28(emptyline); s28 >> frozen_tear.have;
getline(txtIn, emptyline); // PRISMS
getline(txtIn, emptyline); istringstream s29(emptyline); s29 >> prism_red;
getline(txtIn, emptyline); istringstream s30(emptyline); s30 >> prism_blue;
getline(txtIn, emptyline); istringstream s31(emptyline); s31 >> prism_purple;
getline(txtIn, emptyline); istringstream s32(emptyline); s32 >> prism_yellow;
getline(txtIn, emptyline); istringstream s33(emptyline); s33 >> prism_shimmering;
getline(txtIn, emptyline); // SPELLS
getline(txtIn, emptyline); istringstream s34(emptyline); s34 >> heal.ready;
getline(txtIn, emptyline); istringstream s35(emptyline); s35 >> cure.ready;
getline(txtIn, emptyline); istringstream s36(emptyline); s36 >> conjure_elixer.ready;
getline(txtIn, emptyline); istringstream s37(emptyline); s37 >> magic_missle.ready;
getline(txtIn, emptyline); istringstream s38(emptyline); s38 >> greater_heal.ready;
getline(txtIn, emptyline); istringstream s39(emptyline); s39 >> barrier.ready;
getline(txtIn, emptyline); istringstream s40(emptyline); s40 >> escape.ready;
getline(txtIn, emptyline); istringstream s41(emptyline); s41 >> fireball.ready;
getline(txtIn, emptyline); istringstream s42(emptyline); s42 >> regeneration.ready;
getline(txtIn, emptyline); istringstream s43(emptyline); s43 >> holy_ground.ready;
getline(txtIn, emptyline); istringstream s44(emptyline); s44 >> doubleme.ready;
getline(txtIn, emptyline); istringstream s45(emptyline); s45 >> immolation.ready;
txtIn.close();

}

};