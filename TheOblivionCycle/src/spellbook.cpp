#include "../headers/functions.h"

void spellbook()
{
    int c11 = heal.ready; int c12 = cure.ready; int c13 = conjure_elixer.ready; int c14 = magic_missle.ready;
    int c21 = greater_heal.ready; int c22 = barrier.ready; int c23 = escape.ready; int c24 = fireball.ready;
    int c31 = regeneration.ready; int c32 = holy_ground.ready; int c33 = doubleme.ready; int c34 = immolation.ready;
    


    print_spellbook();
    cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
    cout << "1ST CIRCLE         2ND CIRCLE          3RD CIRCLE       " << endl;
    cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
    cout << "["; Color(6); cout << convert_spell(c11); Color(7);cout << "]"; cout << spell_level_checker(heal); Color(7);
    cout << "            ["; Color(6); cout << convert_spell(c21); Color(7); cout << "]"; cout << spell_level_checker(greater_heal);Color(7);
    cout << "     ["; Color(6); cout << convert_spell(c31); Color(7); cout << "]"; cout << spell_level_checker(regeneration) << endl;Color(7);
    cout << "["; Color(6); cout << convert_spell(c12); Color(7); cout << "]"; cout << spell_level_checker(cure);Color(7);
    cout << "            ["; Color(6); cout << convert_spell(c22); Color(7); cout << "]"; cout << spell_level_checker(barrier);Color(7);
    cout << "          ["; Color(6); cout << convert_spell(c32); Color(7); cout << "]"; cout << spell_level_checker(holy_ground) << endl;Color(7);
    cout << "["; Color(6); cout << convert_spell(c13); Color(7); cout << "]"; cout << spell_level_checker(conjure_elixer);Color(7);
    cout << "  ["; Color(6); cout << convert_spell(c23); Color(7); cout << "]"; cout << spell_level_checker(escape);Color(7);
    cout << "           ["; Color(6); cout << convert_spell(c33); Color(7); cout << "]"; cout << spell_level_checker(doubleme) << endl;Color(7);
    cout << "["; Color(6); cout << convert_spell(c14); Color(7); cout << "]"; cout << spell_level_checker(magic_missle);Color(7);
    cout << "    ["; Color(6); cout << convert_spell(c24); Color(7); cout << "]"; cout << spell_level_checker(fireball);Color(7);
    cout << "         ["; Color(6); cout << convert_spell(c34); Color(7); cout << "]"; cout << spell_level_checker(immolation) << endl;Color(7);
    cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;

    string ans;
    ans = _getch();

}

string convert_spell(int a)
{
    string stringval;
    if (a == 1)
    {
        stringval = "X";
        return stringval;
    }
    else
    {
        stringval = " ";
        return stringval;
    }

    
}

string spell_level_checker(spell spellname)
{
    if (hero_player.level >= spellname.levelreq)
    {
        Color(7);
        return spellname.name;
    }
    else
    {
        Color(8);
        return spellname.name;
    }


}