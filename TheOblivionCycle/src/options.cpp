#include "../headers/functions.h"

extern int intro_sequence;
extern int music_setting; // 1-on 0-off
extern int music_vol; //0 mut 100 full

int options(int i)
{
    string vol_bar = "";
    int bar_ticks = 0;
    string vol_line;

    // Print Menu Options
    cout << "("; Color(6); cout << "1"; Color(7); cout << ") Show Intro: ";
    cout << "Currently ";
    if (intro_sequence == 1) { Color(2); cout << "(On)"; Color(7); cout << endl; }
    if (intro_sequence == 0) { Color(4); cout << "(Off)"; Color(7); cout << endl; }
    cout << "("; Color(6); cout << "2"; Color(7); cout << ") Music On/Off: ";
    cout << "Currently ";
    if (music_setting == 1) { Color(2); cout << "(On)"; Color(7); cout << endl; }
    if (music_setting == 0) { Color(4); cout << "(Off)"; Color(7); cout << endl; }
    //Volume
    Color(6); cout << "- +"; Color(7); cout << "";
    cout << " Music Volume: [";
    
    // Print Volume HPbar
    bar_ticks += music_vol / 5;
    while (bar_ticks > 0)
    {
        vol_bar += ":";
        bar_ticks -= 1;
    }
    vol_line = vol_bar;
    Color(2); cout << left << setw(20); cout << vol_line; Color(7); cout << "] " << endl;
    





    cout << "("; Color(6); cout << "3"; Color(7); cout << ") Information" << endl;
    cout << "("; Color(6); cout << "4"; Color(7); cout << ") Back" << endl;

    // Input Selection
    string ans = "";
    ShowConsoleCursor(false);
    ans = _getch();

    if (ans == "1") 
        if (intro_sequence == 1) { intro_sequence = 0; }
        else { intro_sequence = 1; }
    
    if (ans == "2")
        if (music_setting == 1) { music_setting = 0; }
        else { music_setting = 1; }

    if (ans == "3")
        { 
        print_gameinfo();
        Color(6); cout  << "\n\nGame:"; Color(7); cout << " The Oblivion Cycle, Part I: The Shimmering Gate" << endl;
        Color(6); cout << "Version:"; Color(7); cout<< " .01" << endl;
        Color(6); cout << "Copyright:"; Color(7); cout << " RLM Productions"; cout << endl;
        Color(6); cout << "Author:" ; Color(7); cout << " Richard Miller"; cout << endl;
            string temp;
            temp = _getch();
        }

    //music Vol
    if (ans == "=" or ans == "+")
    {
        if (music_vol == 100)
        {
            music_vol = 100;
        }
        else
        {
            music_vol += 20;
        }
    }

    if (ans == "-" or ans == "_")
    {
        if (music_vol == 0)
        {
            music_vol = 0;
        }
        else
        {
            music_vol -= 20;
        }
    }



    if (ans == "4") { return 1; }

    return 0;

}


void info_screen()
{
    
    int zz = 0;
    while (zz == 0)
    {
        print_infoscreen();

        string ans;
        ans = _getch();

        if (ans == "1")
        {
            player_score();
        }

        if (ans == "2")
        {
            trinkets();
        }

        if (ans == "3")
        {
            spellbook();
        }

        if (ans == "4")
        {
            weapons_display();
        }

        if (ans == "5")
        {
            armor_display();
        }

        if (ans == "6")
        {
            help_screen();
        }

        if (ans == "7")
        {
            int i = 0;
            while (i == 0)
            {
                print_options();
                cout << endl;
                i = options(i);
            }
        }

        if (ans == "8")
        {

        }

        if (ans == "0" or ans == "\033")
        {
            zz = 1;
        }
    }




}

void help_screen()
{
    print_help();

    string ans;
    ans = _getch();


}