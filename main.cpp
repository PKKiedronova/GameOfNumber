#include "iostream" 
#include "color.h"

/*Hadani tajneho cisla*/
using namespace std; 
 int main (int argc,char *argv[]) { 
    system ("chcp 65001>nul");
    int tajneCislo;
    int hracovoCislo;
    tajneCislo = rand ()%5+1; //nahodne od1 do 5
    cout << "Zadej svůj typ na tajné číslo: ";
    cin >> hracovoCislo;
    return 0;
}