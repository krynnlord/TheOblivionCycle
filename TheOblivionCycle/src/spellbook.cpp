#include "../headers/functions.h"

void spellbook()
{
    int c11 = heal.qty; int c12 = cure.qty; int c13 = conjure_elixer.qty; int c14 = magic_missle.qty;
    int c21 = greater_heal.qty; int c22 = barrier.qty; int c23 = escape.qty; int c24 = fireball.qty;
    int c31 = regeneration.qty; int c32 = holy_ground.qty; int c33 = doubleme.qty; int c34 = immolation.qty;
    
    print_spellbook();
    cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
    cout << "1ST CIRCLE         2ND CIRCLE          3RD CIRCLE       " << endl;
    cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;
    cout << "["; Color(6); cout << c11; Color(7);cout << "]HEAL";
    cout << "            ["; Color(6); cout << c21; Color(7); cout << "]GREATER HEAL";
    cout << "     ["; Color(6); cout << c31; Color(7); cout << "]REGENERATION" << endl;
    cout << "["; Color(6); cout << c12; Color(7); cout << "]CURE";
    cout << "            ["; Color(6); cout << c22; Color(7); cout << "]BARRIER          ";
    cout << "["; Color(6); cout << c32; Color(7); cout << "]HOLY GROUND" << endl;
    cout << "["; Color(6); cout << c13; Color(7); cout << "]CONJURE ELIXER";
    cout << "  ["; Color(6); cout << c23; Color(7); cout << "]ESCAPE";
    cout << "           ["; Color(6); cout << c33; Color(7); cout << "]DOUBLE" << endl;
    cout << "["; Color(6); cout << c14; Color(7); cout << "]MAGIC MISSLE";
    cout << "    ["; Color(6); cout << c24; Color(7); cout << "]FIREBALL";
    cout << "         ["; Color(6); cout << c34; Color(7); cout << "]IMMOLATION" << endl;
    cout << "----~~~---~~~---~~~----~~~~----~~~---~~~---~~~---~~~----" << endl;

    string ans;
    ans = _getch();

}