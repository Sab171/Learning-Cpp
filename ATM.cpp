#include <iostream>
#include <stdlib.h>
#include <windows.h>

using namespace std;



void menu(){
    cout<<"==================================="<<endl;
    cout<<"************PICSOU BANK************\n";
    cout<<"==================================="<<endl;
    cout<<"Please select an option :\n"<<endl;
    cout<<"    1. Check Balance"<<endl;
    cout<<"    2. Withdraw"<<endl;
    cout<<"    3. Deposit"<<endl;
}




int main(){
SetConsoleOutputCP(65001); // codage utf8 

int option;
float solde,montant;
string rep;
bool continuer,opValid;


do {
menu();

do{
cin>>option;

switch(option){
    case 1 :
        cout<<"Balance : "<<solde<<endl;
        opValid=true;
        break;

    case 2 : //add confirmation?
        cout<<"Type the amount to withdraw : "<<endl;
        cin>>montant;
        if(solde-montant>=0){
        cout<<"Balance after transaction : "<<solde<<endl;
        solde-=montant;}
        else{cout<<"Insufficient funds"<<endl;break;
        opValid=true;
        break;
    case 3 : //add confirmation?, check if <0?
        opValid=true;
        cout<<"Type the amount to deposit : "<<endl;
        cin>>montant;
        solde+=montant;
        cout<<"Balance after transaction : "<<solde<<endl;
        break;

    default :
        cout<<"Please choose an option from the list :"<<endl;
        cout<<"    1. Check Balance"<<endl;
        cout<<"    2. Withdraw"<<endl;
        cout<<"    3. Deposit"<<endl;
        opValid=false;
}
}while(!opValid);

cout<<"Would you like to complete another transaction (y/n)"<<endl;
cin>>rep;
if (rep=="n"){continuer=false;}
else{continuer=true;}
}
while(continuer);

















return 0;

}







