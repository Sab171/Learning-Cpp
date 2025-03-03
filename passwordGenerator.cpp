using namespace std;
#include <stdio.h>
#include <iostream>
#include <string>
#include <time.h>


string alphabet = "azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN";
string chiffres = "12345689";
string charSpecial = "!”#$%&'()*+,-./:;<=>?@[\\]^_`{|}~£";
string characters = alphabet+chiffres+charSpecial;

string generatePassword(int length){

    string pswd;

    srand(time(0)); // heure actuelle comme seed

    for(int i=0; i<length; i++){

        int x = rand() % characters.size();

        pswd.push_back(characters.at(x));

    }

    return pswd;

}

int main()
{
    int len; //longueur du mot de passe saisie
    cout << "Bienvenue dans le générateur de mot de passe"<<endl;
    cout << "Veuillez saisir la longueur du mot de passe souhaitée : ";
    cin>> len;
    string mdp = generatePassword(len);
    cout << "Voici votre mot de passe : "<<mdp;
    return 0;
}
