#include <iostream>
using namespace std;

int main (){
   cout << "Pertukaran Antara Nilai X dan Y"<<endl;
  string ulang;
  
  while (true) {
  int A, B;

  cout << "Massukan nilai X :";
  cin >> A;
  cout << "Massukan nilai Y :";
  cin >> B;
  cout << "Sebelum ditukar nilai X = "<< A << ", Y = " << B << endl;

  int tukar = A;
  A = B;
  B = tukar;

  cout << "Setelah ditukar nilai X = "<< A << ", Y = " << B << endl;
  cout << "\nIngin mengulangi program? (y/n) : ";	
  cin >> ulang;
    if (ulang != "y" && ulang != "Y"){
    break;}
  }
  return 0;
}