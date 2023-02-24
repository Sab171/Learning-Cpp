#include<stdio.h>
#include <windows.h>
#include<iostream>

using namespace std;

int x, y, xf, yf, taille;

void affich_plateau(int taille) {
    for(int i = 1; i<=taille; i++){
        for(int j = 1; j<=taille; j++){cout<< j; }
       cout<<i<< 
       endl;
    }
}

int main() {
SetConsoleOutputCP(65001); // codage utf8 

affich_plateau(20);

}