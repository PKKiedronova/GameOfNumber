#include "iostream" 
#include "color.h"
#include "ctime"

/*Hadani tajneho cisla*/
using namespace std; 
 int main (int argc,char *argv[]) { 
    system ("chcp 65001>nul");
    srand(time(0));
    int tajneCislo;
    int hracovoCislo;
    tajneCislo = rand ()%5+1; //nahodne od1 do 5
    cout << "Zadej svůj typ na tajné číslo: ";
    cin >> hracovoCislo;
    if (tajneCislo == hracovoCislo){
        cout << BLUE << "Spravně!"<< WHITE << endl;
    }else cout << RED << "Neuhodl!" << WHITE << endl;
    return 0;
}
