///////////////////////////////////////////////////////////
// New Dice Roller Takes in string value template like 1d4 
///////////////////////////////////////////////////////////
void WeaponDice(weapon weapondice, int& dice_i, int& sides_i)
{

string dice; dice = weapondice.damage[0]; dice_i = stoi(dice); // # of dice
string sides; sides = weapondice.damage[2]; sides_i = stoi(sides); // # of sides

}


void diceroller(int numdice, int sides, int luck, int prof, int& hero_total_atk)
{
    int total = 0;

    // Crit role
    int	crit = 0;
    srand(time(NULL));
    int critroll = (rand() % 20) + 1;
    if (critroll >= 20-luck) { crit = 1;} //crit
    else if (critroll == 1) { crit = 2;} //miss
    else { crit = 0;} // normal
    
    // Dice Roll
    int final=0;
    srand(time(NULL));
    for (int i=0; i < numdice; ++i)
    { 
        
        int roll = (rand() % sides) + 1;
        cout << roll << " ";
        final += roll;
        roll = 0;
    }
	
    // add modifiers
    if (crit == 1)
    {   
        total = (final * prof) * 2 ;
        //cout << "CRIT ";
    }
    else if (crit == 2)
    {
        total = 0;
        //cout << "MISS ";
    }
    else 
    {
        total = (final * prof);
    }

    hero_total_atk = total;
};