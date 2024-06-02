#include "../headers/functions.h"

void monster_display(monster enemy)
{
    string temp_monsterdescription;
    
    string emptyline;
	string filename = "MON.DAT";
	ifstream txtIn(filename);
    
    size_t pos;
    while (txtIn.good())
    {
        getline(txtIn, emptyline); // get line from file
        pos = emptyline.find(enemy.name); // search
        if (pos != string::npos) // string::npos is returned if string is not found
        {
            getline(txtIn, temp_monsterdescription);     
            break;
        }

    }

    cout << "Name: " << enemy.name << endl;
    cout << "HP: " << enemy.hp << "/" << enemy.hp_max << endl;
    cout << "Damage: " << enemy.damage << endl;
    cout << "\nDescription: \n" << temp_monsterdescription << endl;
    cout << endl << endl; system("pause");

	return;
}