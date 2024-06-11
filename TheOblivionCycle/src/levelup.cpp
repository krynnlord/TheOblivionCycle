#include "../headers/functions.h"

//////////////////////////////////////////////////////////////////
// Level - Up Calculator - Takes exp - sends new level and prof #
//////////////////////////////////////////////////////////////////
int min_exp = 0;

void checklevelup()
{

    if (hero_player.exp >= 300 and hero_player.exp < 900 and hero_player.level == 1)
    {
        hero_player.level = 2;
        hero_player.prof = 3;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 300;
    }
    if (hero_player.exp >= 900 and hero_player.exp < 2700 and hero_player.level == 2)
    {
        hero_player.level = 3;
        hero_player.prof = 4;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 900;
    }
    if (hero_player.exp >= 2700 and hero_player.exp < 6500 and hero_player.level == 3)
    {
        hero_player.level = 4;
        hero_player.prof = 5;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 2700;
    }
    if (hero_player.exp >= 6500 and hero_player.exp < 14000 and hero_player.level == 4)
    {
        hero_player.level = 5;
        hero_player.prof = 6;
        hero_player.luck = 1;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 6500;
    }
    if (hero_player.exp >= 14000 and hero_player.exp < 23000 and hero_player.level == 5)
    {
        hero_player.level = 6;
        hero_player.prof = 7;
        hero_player.luck = 1;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 14000;
    }
    if (hero_player.exp >= 23000 and hero_player.exp < 34000 and hero_player.level == 6)
    {
        hero_player.level = 7;
        hero_player.prof = 8;
        hero_player.luck = 1;
        hero_player.hp_max += (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 23000;
    }
    if (hero_player.exp >= 34000 and hero_player.exp < 48000 and hero_player.level == 7)
    {
        hero_player.level = 8;
        hero_player.prof = 9;
        hero_player.luck = 1;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 34000;
    }
    if (hero_player.exp >= 48000 and hero_player.exp < 64000 and hero_player.level == 8)
    {
        hero_player.level = 9;
        hero_player.prof = 10;
        hero_player.luck = 1;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 48000;
    }
    if (hero_player.exp >= 64000 and hero_player.exp < 85000 and hero_player.level == 9)
    {
        hero_player.level = 10;
        hero_player.prof = 11;
        hero_player.luck = 2;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 64000;
    }
    if (hero_player.exp >= 85000 and hero_player.exp < 100000 and hero_player.level == 10)
    {
        hero_player.level = 11;
        hero_player.prof = 12;
        hero_player.luck = 2;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 85000;
    }
    if (hero_player.exp >= 100000 and hero_player.exp < 120000 and hero_player.level == 11)
    {
        hero_player.level = 12;
        hero_player.prof = 13;
        hero_player.luck = 2;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 100000;
    }
    if (hero_player.exp >= 120000 and hero_player.exp < 140000 and hero_player.level == 12)
    {
        hero_player.level = 13;
        hero_player.prof = 14;
        hero_player.luck = 2;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 120000;
    }
    if (hero_player.exp >= 140000 and hero_player.exp < 165000 and hero_player.level == 13)
    {
        hero_player.level = 14;
        hero_player.prof = 15;
        hero_player.luck = 2;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 140000;
    }
    if (hero_player.exp >= 165000 and hero_player.exp < 195000 and hero_player.level == 14)
    {
        hero_player.level = 15;
        hero_player.prof = 16;
        hero_player.luck = 3;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 165000;
    }
    if (hero_player.exp >= 195000 and hero_player.exp < 225000 and hero_player.level == 15)
    {
        hero_player.level = 16;
        hero_player.prof = 17;
        hero_player.luck = 3;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 195000;
    }
    if (hero_player.exp >= 225000 and hero_player.exp < 265000 and hero_player.level == 16)
    {
        hero_player.level = 17;
        hero_player.prof = 18;
        hero_player.luck = 3;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 225000;
    }
    if (hero_player.exp >= 265000 and hero_player.exp < 305000 and hero_player.level == 17)
    {
        hero_player.level = 18;
        hero_player.prof = 19;
        hero_player.luck = 3;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 265000;
    }
    if (hero_player.exp >= 305000 and hero_player.exp < 355000 and hero_player.level == 18)
    {
        hero_player.level = 19;
        hero_player.prof = 20;
        hero_player.luck = 3;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 305000;
    }
    if (hero_player.exp > 355000 and hero_player.level == 19)
    {
        hero_player.level = 20;
        hero_player.prof = 21;
        hero_player.luck = 4;
        hero_player.hp_max = (hero_player.level * 95) + 175;
        hero_player.hp = hero_player.hp_max;
        min_exp = 355000;
    }


}