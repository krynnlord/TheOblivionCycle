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
txtOut << "NAME:" << hero_player.name << endl;
txtOut << "HP:" << hero_player.hp << endl;
txtOut << "HPMAX:" << hero_player.hp_max << endl;
txtOut << "LUCK:" << hero_player.luck << endl;
txtOut << "LEVEL:" << hero_player.level << endl;
txtOut << "PROF:" << hero_player.prof << endl;
txtOut << "EXP:" << hero_player.exp << endl;
txtOut << "STAT:" << hero_player.stat << endl;
txtOut << "GOLD:" << hero_player.gold << endl;
txtOut << "TRINKET:" << hero_player.trinket << endl;
txtOut << "QUESTLVL:" << hero_player.quest_level << endl;
txtOut << "ESSENCE:" << hero_player.essence << endl;
txtOut << "FLASK:" << hero_player.flask << endl;
txtOut << "GOLDVAULT:" << gold_vault << endl;
txtOut << "MINEXP:" << min_exp << endl;
txtOut << "*** WEAPON ***" << endl;
txtOut << "ID:" << hero_weapon.id << endl;
txtOut << "NAME:" << hero_weapon.name << endl;
txtOut << "TYPE:" << hero_weapon.type << endl;
txtOut << "COST:" << hero_weapon.cost << endl;
txtOut << "DAMAGE:" << hero_weapon.damage << endl;
txtOut << "DESC:" << hero_weapon.description << endl;
txtOut << "*** ARMOR ***" << endl;
txtOut << "ID:" << hero_armor.id << endl;
txtOut << "NAME:" << hero_armor.name << endl;
txtOut << "TYPE:" << hero_armor.type << endl;
txtOut << "COST:" << hero_armor.cost << endl;
txtOut << "AC:" << hero_armor.armorclass << endl;
txtOut << "DESC:" << hero_armor.description << endl;
txtOut << "*** GAME SETTINGS ***" << endl;
txtOut << "INTRO:" << intro_sequence << endl;
txtOut << "MUSIC:" << music_setting << endl;
txtOut << "VOLUME:" << music_vol << endl;
txtOut << "TRACK:" << music_track << endl;
txtOut << "*** TRINKETS ***" << endl;
txtOut << "RABBITFOOT:" << rabbit_foot.have << endl;
txtOut << "DRAGONTALON:" << dragon_talon.have << endl;
//txtOut << "AZURENECKLACE:" << azure_neclace.have << endl;
//txtOut << "WITCHEFFEGY:" << witch_effegy.have << endl;
//txtOut << "VIALBLOOD:" << vial_blood.have << endl;
//txtOut << "FROZENTEAR:" << frozen_tear.have << endl;
txtOut << "UNHOLYPENTAGRAM:" << unholy_pentagram.have << endl;
txtOut << "BONECALTROPS:" << bone_caltrops.have << endl;
txtOut << "*** PRISMS ***" << endl;
txtOut << "RED:" << prism_red << endl;
txtOut << "BLUE:" << prism_blue << endl;
txtOut << "PURPLE:" << prism_purple << endl;
txtOut << "YELLOW:" << prism_yellow << endl;
txtOut << "SHIMMERING:" << prism_shimmering << endl;
txtOut << "*** SPELLS ***" << endl;
txtOut << "HEAL:" << heal.ready << endl;
txtOut << "CURE:" << cure.ready << endl;
txtOut << "CONJURE:" << conjure_elixir.ready << endl;
txtOut << "MISSILE:" << magic_missile.ready << endl;
txtOut << "GTRHEAL:" << greater_heal.ready << endl;
txtOut << "BARRIER:" << barrier.ready << endl;
txtOut << "ESCAPE:" << escape.ready << endl;
txtOut << "FIREBALL:" << fireball.ready << endl;
txtOut << "REGEN:" << regeneration.ready << endl;
txtOut << "HLYGROUND:" << holy_ground.ready << endl;
txtOut << "DOUBLE:" << doubleme.ready << endl;
txtOut << "IMMOLATION:" << immolation.ready << endl;
txtOut << "*** STATS ***" << endl;
txtOut << "TOTALKILLS:" << total_kills << endl;
txtOut << "TOTALDEATHS:" << total_deaths;
txtOut.close();

};

// LOAD GAME
void load_game()
{

string emptyline;
char temp;
string filename = "TOC1.sav";
ifstream txtIn(filename);
if (txtIn) 
{

getline(txtIn,emptyline); // HERO
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,hero_player.name);
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s1(emptyline); s1 >> hero_player.hp;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s2(emptyline); s2 >> hero_player.hp_max;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s3(emptyline); s3 >> hero_player.luck;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s7(emptyline); s7 >> hero_player.level;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s8(emptyline); s8 >> hero_player.prof;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s9(emptyline); s9 >> hero_player.exp;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s10(emptyline); s10 >> hero_player.stat;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s11(emptyline); s11 >> hero_player.gold;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s90(emptyline); s90 >> hero_player.trinket;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s91(emptyline); s91 >> hero_player.quest_level;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s92(emptyline); s92 >> hero_player.essence;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s93(emptyline); s93 >> hero_player.flask;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s95(emptyline); s95 >> gold_vault;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s96(emptyline); s96 >> min_exp;
getline(txtIn,emptyline); // WEAPON
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s12(emptyline); s12 >> hero_weapon.id;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,hero_weapon.name);
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s13(emptyline); s13 >> hero_weapon.type;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s14(emptyline); s14 >> hero_weapon.cost;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s15(emptyline); s15 >> hero_weapon.damage;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,hero_weapon.description);
getline(txtIn,emptyline); // ARMOR
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s16(emptyline); s16 >> hero_armor.id;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,hero_armor.name);
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s17(emptyline); s17 >> hero_armor.type;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s18(emptyline); s18 >> hero_armor.cost;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,emptyline); istringstream s19(emptyline); s19 >> hero_armor.armorclass;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn,hero_armor.description);
getline(txtIn, emptyline); // SETTINGS
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s20(emptyline); s20 >> intro_sequence;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s21(emptyline); s21 >> music_setting;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s22(emptyline); s22 >> music_vol;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s94(emptyline); s94 >> music_track;
getline(txtIn, emptyline); // TRINKETS
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s23(emptyline); s23 >> rabbit_foot.have;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s24(emptyline); s24 >> dragon_talon.have;
//while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s25(emptyline); s25 >> azure_neclace.have;
//while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s26(emptyline); s26 >> witch_effegy.have;
//while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s27(emptyline); s27 >> vial_blood.have;
//while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s28(emptyline); s28 >> frozen_tear.have;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s88(emptyline); s88 >> unholy_pentagram.have;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s89(emptyline); s89 >> bone_caltrops.have;
getline(txtIn, emptyline); // PRISMS
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s29(emptyline); s29 >> prism_red;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s30(emptyline); s30 >> prism_blue;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s31(emptyline); s31 >> prism_purple;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s32(emptyline); s32 >> prism_yellow;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s33(emptyline); s33 >> prism_shimmering;
getline(txtIn, emptyline); // SPELLS
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s34(emptyline); s34 >> heal.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s35(emptyline); s35 >> cure.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s36(emptyline); s36 >> conjure_elixir.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s37(emptyline); s37 >> magic_missile.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s38(emptyline); s38 >> greater_heal.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s39(emptyline); s39 >> barrier.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s40(emptyline); s40 >> escape.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s41(emptyline); s41 >> fireball.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s42(emptyline); s42 >> regeneration.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s43(emptyline); s43 >> holy_ground.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s44(emptyline); s44 >> doubleme.ready;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s45(emptyline); s45 >> immolation.ready;
getline(txtIn, emptyline); // STATS
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s97(emptyline); s97 >> total_kills;
while (txtIn >> temp) { if (temp == ':') break; } getline(txtIn, emptyline); istringstream s98(emptyline); s98 >> total_deaths;
txtIn.close();

}

};