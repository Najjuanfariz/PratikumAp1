#include <iostream>
using namespace std;
int main(){
  int a, b, c ;
  int maksimal;

  cout<< "Masukkan Angka Pertama :";
  cin>> a;

  cout<< "Masukkan Angka Kedua :";
  cin>> b;

  cout<<"Masukkan Angka Ketiga :";
  cin>> c;

  if (a > b and a > c){
    maksimal = a;
  }else if (b > a and b > c){
    maksimal = b;
  }else{
    maksimal = c;
  }
  cout<< "Bilangan Maksimal =" <<maksimal << endl;
  return 0;
}