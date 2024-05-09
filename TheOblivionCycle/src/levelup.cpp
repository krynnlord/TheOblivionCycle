#include "../headers/functions.h"

//////////////////////////////////////////////////////////////////
// Level - Up Calculator - Takes exp - sends new level and prof #
//////////////////////////////////////////////////////////////////

void checklevelup()
{

    if (hero_player.exp >= 300 and hero_player.exp < 900)
    {
        hero_player.level = 2;
        hero_player.prof = 4;
    }
    if (hero_player.exp >= 900 and hero_player.exp < 2700)
    {
        hero_player.level = 3;
        hero_player.prof = 6;
    }
    if (hero_player.exp >= 2700 and hero_player.exp < 6500)
    {
        hero_player.level = 4;
        hero_player.prof = 8;
    }
    if (hero_player.exp >= 6500 and hero_player.exp < 14000)
    {
        hero_player.level = 5;
        hero_player.prof = 11;
    }
    if (hero_player.exp >= 14000 and hero_player.exp < 23000)
    {
        hero_player.level = 6;
        hero_player.prof = 14;
    }
    if (hero_player.exp >= 23000 and hero_player.exp < 34000)
    {
        hero_player.level = 7;
        hero_player.prof = 17;
    }
    if (hero_player.exp >= 34000 and hero_player.exp < 48000)
    {
        hero_player.level = 8;
        hero_player.prof = 20;
    }
    if (hero_player.exp >= 48000 and hero_player.exp < 64000)
    {
        hero_player.level = 9;
        hero_player.prof = 24;
    }
    if (hero_player.exp >= 64000 and hero_player.exp < 85000)
    {
        hero_player.level = 10;
        hero_player.prof = 28;
    }
    if (hero_player.exp >= 85000 and hero_player.exp < 100000)
    {
        hero_player.level = 11;
        hero_player.prof = 32;
    }
    if (hero_player.exp >= 100000 and hero_player.exp < 120000)
    {
        hero_player.level = 12;
        hero_player.prof = 36;
    }
    if (hero_player.exp >= 120000 and hero_player.exp < 140000)
    {
        hero_player.level = 13;
        hero_player.prof = 41;
    }
    if (hero_player.exp >= 140000 and hero_player.exp < 165000)
    {
        hero_player.level = 14;
        hero_player.prof = 46;
    }
    if (hero_player.exp >= 165000 and hero_player.exp < 195000)
    {
        hero_player.level = 15;
        hero_player.prof = 51;
    }
    if (hero_player.exp >= 195000 and hero_player.exp < 225000)
    {
        hero_player.level = 16;
        hero_player.prof = 56;
    }
    if (hero_player.exp >= 225000 and hero_player.exp < 265000)
    {
        hero_player.level = 17;
        hero_player.prof = 62;
    }
    if (hero_player.exp >= 265000 and hero_player.exp < 305000)
    {
        hero_player.level = 18;
        hero_player.prof = 68;
    }
    if (hero_player.exp >= 305000 and hero_player.exp < 355000)
    {
        hero_player.level = 19;
        hero_player.prof = 74;
    }
    if (hero_player.exp > 355000)
    {
        hero_player.level = 20;
        hero_player.prof = 80;
    }


}