#include "../headers/functions.h"

int blacksmith(int i)
{


    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Buy Weapons" << endl;
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Buy Armor" << endl;
    cout << "("; Color(6); cout << "0"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    
    if (ans == "0")
        { 
            return 1; 
        }
    if (ans == "1")
    {
        buy_weapons();
    }

    else {return 0;}

    return 1;

}

void buy_weapons()
{
    print_blacksmith();
    show_statbar();
    if (dagger.have == 0) 
    { 
        cout << left << setw(20) << "[1] Dagger";
        cout << "Cost: ";
        cout << left << setw(10) << dagger.cost;
        cout << "Damage: " << dagger.damage << endl;
    }
    if (mace.have == 0)
    {
        cout << left << setw(20) << "[2] Mace";
        cout << "Cost: ";
        cout << left << setw(10) << mace.cost;
        cout << "Damage: " << mace.damage << endl;
    }
    if (shortsword.have == 0) 
    {
        cout << left << setw(20) << "[3] Short Sword";
        cout << "Cost: ";
        cout << left << setw(10) << shortsword.cost;
        cout << "Damage: " << shortsword.damage << endl;
    }
    if (lighthammer.have == 0) 
    { 
        cout << left << setw(20) << "[4] Light Hammer";
        cout << "Cost: ";
        cout << left << setw(10) << lighthammer.cost;
        cout << "Damage: " << lighthammer.damage << endl;
    }
    if (warhammer.have == 0) 
    { 
        cout << left << setw(20) << "[5] Warhammer";
        cout << "Cost: ";
        cout << left << setw(10) << warhammer.cost;
        cout << "Damage: " << warhammer.damage << endl;
    }
    if (longsword.have == 0)
    {
        cout << left << setw(20) << "[6] Long Sword";
        cout << "Cost: ";
        cout << left << setw(10) << longsword.cost;
        cout << "Damage: " << longsword.damage << endl;
    }
    if (greatsword.have == 0) 
    { 
        cout << left << setw(20) << "[7] Greatsword";
        cout << "Cost: ";
        cout << left << setw(10) << greatsword.cost;
        cout << "Damage: " << greatsword.damage << endl;
    }
    if (maul.have == 0) 
    { 
        cout << left << setw(20) << "[8] Maul";
        cout << "Cost: ";
        cout << left << setw(10) << maul.cost;
        cout << "Damage: " << maul.damage << endl;
    }
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    cout << "Have a look at my weapons. Are you interested in anything?" << endl;
    cout << "---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---~~~---" << endl;
    
    ShowConsoleCursor(true);
    string ansr;
    cout << "Purchase> ";
    cin >> ansr;


    ShowConsoleCursor(false);

}

void buy_armor()
{



}