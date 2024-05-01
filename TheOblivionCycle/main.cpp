#include "headers/header.h"
#include "headers/vars.h"
#include "headers/colors.h"
#include "headers/togglecursor.h"
#include "headers/typer.h"
#include "headers/circle.h"
#include "headers/blacksmith.h"
#include "headers/castle.h"
#include "headers/inn.h"
#include "headers/provisioner.h"
#include "headers/temple.h"
#include "headers/statbar.h"
#include "headers/printgraphics.h"
#include "headers/options.h"
#include "headers/diceroller.h"
#include "headers/savegameSystem.h"
#include "headers/createhero.h"
#include "headers/levelup.h"
#include "headers/battle.h"
#include "headers/intro.h"

/////////////////////////////
//// ADVENTURE MENU /////////
/////////////////////////////
void adventure()
{
    
    int i =0;
    string ans = "";
    while (i==0) 
    {
        system("cls");

        print_village();

        //Print Statbar
        show_statbar(hero_player.name, hero_player.level,hero_player.exp, hero_weapon.name, hero_armor.name);

        // Print Menu Options
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") The Circle of Stones" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") The Castle" << endl;
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") The Temple" << endl;
        cout << "("; Color(6); cout << "4"; Color(7); cout << ") The Blacksmith" << endl;
        cout << "("; Color(6); cout << "5"; Color(7); cout << ") The Provisioner" << endl;
        cout << "("; Color(6); cout << "6"; Color(7); cout << ") The Inn" << endl;
        cout << "("; Color(6); cout << "7"; Color(7); cout << ") Quit to Main Menu" << endl;

        // Input Selection
        ShowConsoleCursor(false);
        ans = _getch();

        if (ans == "1")
        {   
            int i = 0;
            while (i==0) 
            {    
                print_stones();
                show_statbar(hero_player.name, hero_player.level,hero_player.exp, hero_weapon.name, hero_armor.name);
                i = circleofstones(i);
            }
        }

        if (ans == "2")
        { 
            int i = 0;
            while (i==0) 
            {    
                print_castle();
                show_statbar(hero_player.name, hero_player.level,hero_player.exp, hero_weapon.name, hero_armor.name);
                i = castle(i);
            } 
        }

        if (ans == "3")
        { 
            int i = 0;
            while (i==0) 
            {    
                print_temple();
                show_statbar(hero_player.name, hero_player.level,hero_player.exp, hero_weapon.name, hero_armor.name);
                i = temple(i);
            } 
        }

        if (ans == "4")
        { 
            int i = 0;
            while (i==0) 
            {    
                print_blacksmith();
                show_statbar(hero_player.name, hero_player.level,hero_player.exp, hero_weapon.name, hero_armor.name);
                i = blacksmith(i);
            } 
        }

        if (ans == "5")
        { 
            int i = 0;
            while (i==0) 
            {    
                print_provisions();
                show_statbar(hero_player.name, hero_player.level,hero_player.exp, hero_weapon.name, hero_armor.name);
                i = provisioner(i);
            } 
        }

           if (ans == "6")
        { 
            int i = 0;
            while (i==0) 
            {    
                print_inn();
                show_statbar(hero_player.name, hero_player.level,hero_player.exp, hero_weapon.name, hero_armor.name);
                i = inn(i);
            } 
        }

        if (ans == "7") 
        { 
            cout << "\nReturning to Main Menu!" << endl; Sleep(1); i = 1;
        }

    }
}

/////////////////////////////
//// MAIN ///////////////////
/////////////////////////////
int main() 
{
    
    // Loads Game
    load_game();

    // Check for Intro Enabled or Disables
    if (intro_sequence == 1) { intro(); }
    
    
    int i = 0;
    string ans = "";
    while (i==0) 
    {

        print_title();
        string subtitle = "                          Chapter I: The Shimmering Gate";    
        // typer(subtitle,50); cout << endl; sleep(1);
        cout<< (subtitle) << endl;

        // Print Choices
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") Play Game" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") New Game" << endl; //To be NewGame
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") Game Options" << endl;
        cout << "("; Color(6); cout << "4"; Color(7); cout << ") Quit Game" << endl;

        ShowConsoleCursor(false);
        ans = _getch();
        
        if (ans == "1") 
        { 
            adventure(); 
        }

        if (ans == "2") 
        { 
            
            print_createhero();      
            CreateHero();
            
        }

        if (ans == "3")
        { 
            int i = 0;
            while (i==0) 
            {    
                print_options();
                cout << endl;
                i = options(i);
            } 
        }

        if (ans == "4") 
        { 
            save_game();
            i=1; 
        }

        if (ans == "d" or ans =="D") 
        { 
            cout << "\nDice Roll 2d6> ";
            cout << diceroller(3,8,19,2); // number, sides, luck ,mod
            Sleep(2000); 
        }

        if (ans == "b" or ans == "B")
        {
            battle_sim();
        }
    }

    i = 0;

    system("cls");
    string test = "Thank you for playing The Oblivion Cycle!";
    typer(test,25); cout << endl;
    ShowConsoleCursor(true);
    
    return 0; // EXIT CODE

}