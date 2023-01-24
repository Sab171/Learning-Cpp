/* #include <iostream>
#include <windows.h>
using namespace std;

    // g++ intro.cpp -o intro

int main(){

SetConsoleOutputCP(65001); // windows.h codage utf8 

/*   // PARITÉ
     int nb;

    cout << "Entrez un entier : ";
    cin >> nb;
    if(nb%2==0) {cout<< "Ce chiffre est pair";}
    else {cout<< "Ce chiffre est impair";} */

/* // Classification triangle
float a, b, c;
cout<<"Entrez les mesures de chaque coté : ";
cin>> a>>b>>c;

if (a==b && b==c) cout << "Ce triangle est eqilatéral";
else{
    if(a!=b && a!=c && b!=c){cout<< "Ce triangle est scalene";}
    else{cout<<"Ce triangle est isocele";}
} 
    return 0;
} */

#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Create and open a text file
  fstream MyFile("filename.txt");

  // Write to the file
  MyFile << "Files can be tricky, but it is fun enough!";
//   MyFile.close();
// Create a text string, which is used to output the text file
string myText;

// Read from the text file
// ifstream MyReadFile("filename.txt");

// Use a while loop together with the getline() function to read the file line by line
while (getline (MyFile, myText)) {
  // Output the text from the file
  cout << myText;}
  // Close the file
  MyFile.close();
}