#include <iostream>
using namespace std;
int main(){
  float nomor1, nomor2, hasil;
  char operasi;

  cout<< "Masukkan Angka :";
  cin>>nomor1;
  cout<<endl;

  cout<< "Masukkan Pengoperasian (+,-,*,/):";
  cin>>operasi;
  cout<<endl;

  cout<<"Masukkan Angka :";
  cin>>nomor2;
  cout<<endl;

  if (operasi == '+'){
    hasil = nomor1 + nomor2;
   }else if (operasi == '-'){
    hasil = nomor1 - nomor2;
   }else if (operasi == '*'){
    hasil = nomor1 * nomor2;
   }else if (operasi == '/') {
      if (nomor2 != 0) {
         hasil = nomor1 / nomor2;
   } else {
     cout << "Pembagian nol tidak diperbolehkan." << endl;
    return 1;
        }
   } else {
     cout << "Operasi yang anda masukkan tidak valid." << endl;
        return 1;
    }
    cout << "Hasil dari " << nomor1 << operasi << nomor2 << " = " << hasil << endl;

    return 0;
}