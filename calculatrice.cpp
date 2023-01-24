#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

/*              BASIC CALCULATOR
Basic operations, no PEMDAS*/
int main(){
SetConsoleOutputCP(65001); // codage utf8 

float num1, num2;
char operateur;

cout<< "=========== CALCULATRICE ============\n\
+++++++++++++++++++++++++++++++++++++\n";
cin >>num1>>operateur>>num2;

switch(operateur){
    case '+':
        cout<<num1+num2;
        break;
    case '-':
        cout<<num1-num2;
        break;

    case '*':
        cout<<num1*num2;
        break;
    case '/':
        cout<<num1/num2;
        break;
        // cas puissance et racine carrée
    default :
        cout<<"Mauvais opérateur";
}

return 0;

}
