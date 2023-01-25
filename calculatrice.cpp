#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <typeinfo>

using namespace std;

// g++ calculatrice.cpp -o calc

/*              BASIC CALCULATOR
Basic operations, no PEMDAS*/
int main(){
SetConsoleOutputCP(65001); // codage utf8 

float num1, num2;
char operateur;


cout<< "=========== CALCULATRICE ============\n\
+++++++++++++++++++++++++++++++++++++\n";

while (1){

cin >>num1>>operateur>>num2;}

switch(operateur){
    case '+':
        cout<<num1+num2<<endl;
        break;
    case '-':
        cout<<num1-num2<<endl;
        break;

    case '*':
        cout<<num1*num2<<endl;
        break;
    case '/':
        cout<<num1/num2<<endl;
        break;
        // cas puissance et racine carrée et modulo
    default :
        cout<<"Opération invalide"<<endl; 
        exit(1);
    }     
}

return 0;

}
