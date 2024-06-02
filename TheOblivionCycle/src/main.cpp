#include "../headers/functions.h"

// Game Settings
int intro_sequence = 1;
int music_setting = 1;
int music_vol = 100;
int music_track = 1;

//Battle Seq
int crit_result = 0;

int exit_mode = 0;

/////////////////////////////
//// ADVENTURE MENU /////////
/////////////////////////////
void adventure()
{
    exit_mode = 0;
    int i = 0;
    string ans = "";
    while (i==0) 
    {
        if (exit_mode == 1) { return; }
        
        system("cls");

        print_village();

        //Print Statbar
        show_statbar();

        // Print Menu Options
        cout << "("; Color(6); cout << "1"; Color(7); cout << ") The Circle of Stones" << endl;
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") The Castle" << endl;
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") The Temple" << endl;
        cout << "("; Color(6); cout << "4"; Color(7); cout << ") The Blacksmith" << endl;
        cout << "("; Color(6); cout << "5"; Color(7); cout << ") The Mystic" << endl;
        cout << "("; Color(6); cout << "6"; Color(7); cout << ") The Inn" << endl << endl;
        //cout << "("; Color(6); cout << "7"; Color(7); cout << ") Quit to Main Menu" << endl << endl;
        cout << "("; Color(6); cout << "ESC"; Color(7); cout << ") Menu" << endl;

        // Input Selection
        ShowConsoleCursor(false);
        ans = _getch();

        if (ans == "1")
        {   
            int i = 0;
            while (i==0) 
            {    
                print_stones();
                show_statbar();
                i = circleofstones(i);
            }
        }

        if (ans == "2")
        { 
            int i = 0;
            while (i==0) 
            {    
                i = castle(i);
            } 
        }

        if (ans == "3")
        { 
            int i = 0;
            while (i==0) 
            {    
                print_temple();
                show_statbar();
                i = temple(i);
            } 
        }

        if (ans == "4")
        { 
            int i = 0;
            while (i==0) 
            {    
                
                i = blacksmith(i);
            } 
        }

        if (ans == "5")
        { 
            int i = 0;
            while (i==0) 
            {    
                
                i = mystic(i);
            } 
        }

           if (ans == "6")
        { 
            int i = 0;
            while (i==0) 
            {    
                i = inn(i);
            } 
        }

        //if (ans == "7") 
        //{ 
        //   cout << "\nReturning to Main Menu!" << endl; Sleep(1); i = 1;
        //}

        if (ans == "\033")
        {
            info_screen();
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

    // Check for Sound Enabled or Disabled
    if (music_setting == 1) 
    { 
        stream_music(music_track);
        
    }
    
    // Check for Intro Enabled or Disabled
    if (intro_sequence == 1) { intro(); }
        
    int i = 0;
    string ans = "";
    while (i==0) 
    {

        print_title();

        // Print Choices
        if (hero_player.name != "Player") 
        {
            cout << "("; Color(6); cout << "1"; Color(7); cout << ") Play Game ["; Color(2); cout << hero_player.name; Color(7); cout << "]" << endl;
        }
        cout << "("; Color(6); cout << "2"; Color(7); cout << ") New Game" << endl; //To be NewGame
        cout << "("; Color(6); cout << "3"; Color(7); cout << ") Game Options" << endl;
        cout << "("; Color(6); cout << "4"; Color(7); cout << ") Quit Game" << endl;

        ShowConsoleCursor(false);
        ans = _getch();
        
        if (ans == "1" and hero_player.name != "Player")
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

        if (ans == "*") { debug_screens(); }
    }

    i = 0;

    system("cls");
    string test = "Thank you for playing The Oblivion Cycle!";
    typer(test,25); cout << endl;
    ShowConsoleCursor(true);
    Sleep(2000);
    return 0; // EXIT CODE

}

void debug_screens()
{
    int i = 0;
    while (i == 0)
    {
        system("cls");
        cout << "Debug Screens" << endl;
        cout << "-----------------" << endl;
        cout << "(1) Red Gate - Monster Listing" << endl;
        cout << "(2) Monster Display" << endl;

        
        cout << endl;
        cout << "[ESC] Exit";
        string ans;
        ans = _getch();

        if (ans == "\033") { i = 1; }
        if (ans == "1")
        {
            system("cls");
            cout << "Red Gate Monster List" << endl << endl;
            for (int i = 0; i < size(monsters_all_red); i++)
            {
               cout << monsters_all_red[i].level << ": " << monsters_all_red[i].name << endl;
               
            }
            cout << endl;
            system("pause");



        }

        if (ans == "2")
        {
            system("cls");
            
            for (int i = 0; i < size(monsters_all_red); i++)
            {
                cout << "[" << i << "] " << monsters_all_red[i].name << endl;
            }
            
            int ans;
            cout << "\nChoice> ";
            cin >> ans;
            

           monster_display(monsters_all_red[ans]);

        }



    }
}