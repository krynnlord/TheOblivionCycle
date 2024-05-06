#include "../headers/functions.h"

int trinket_run(int hero_total_atk, int trinket)
{
    
    int trinket_modded_atk = 0;

    if (trinket == 1) // Rabbit's Foot
    {
        srand((unsigned)time(0));
        int rand_chance = (rand() % 10) + 1;

        if (rand_chance >= 8)
        { trinket_modded_atk = hero_total_atk * 1.2; }
        else { trinket_modded_atk = hero_total_atk; }

    }

    if (trinket == 2) // Stick Man
    { }

    return trinket_modded_atk;
}