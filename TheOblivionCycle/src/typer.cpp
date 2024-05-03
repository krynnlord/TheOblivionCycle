#include "../headers/header.h"

void typer(std::string& str, int speed)
{   
    int i;
    for (i=0;str[i]!='\0';i++){std::cout<<str[i];Sleep(speed);}
}