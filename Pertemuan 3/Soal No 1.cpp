#include <iostream>
using namespace std;

int main(){
  int bilangan;
  cout<<"Masukan Angka:";
  cin>>bilangan;
  cout<<endl;
  
  if(bilangan%2==0){
   cout<<"bilangan Genap"<<endl;
  }else{
   cout<<"bilangan Ganjil"<<endl;
  }
}