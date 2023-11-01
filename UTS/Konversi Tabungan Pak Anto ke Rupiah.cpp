#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
double tabungan_usd = 12000;
double tabungan_euro = 20000;
double kurs_usd_to_idr = 15000; //Konversi 1 US Dollar = Rp. 15.000
double kurs_euro_to_usd = 0.997;//Konversi 1 Euro = 0.997 US Dollar
double total_usd_in_idr = tabungan_usd * kurs_usd_to_idr;
double total_euro_in_usd = tabungan_euro * kurs_euro_to_usd;
double total_euro_in_idr = total_euro_in_usd * kurs_usd_to_idr;
double total_tabungan_in_idr = total_usd_in_idr + total_euro_in_idr;
double harga_mobil_in_idr = 425000000; //Harga Mobil Rp. 425.000.000
double sisa_uang_in_idr = total_tabungan_in_idr - harga_mobil_in_idr;
    
cout << "Total tabungan Pak Anto dalam USD: "<< fixed << setprecision(0) << total_usd_in_idr << " IDR" << endl;
cout << "Total tabungan Pak Anto dalam Euro: "<< fixed << setprecision(0) << total_euro_in_idr << " IDR" << endl;
cout << "Total tabungan Pak Anto dalam Rupiah: "<< fixed << setprecision(0) << total_tabungan_in_idr  << " IDR" << endl;
cout << "Harga mobil baru: "<< fixed << setprecision(0) << harga_mobil_in_idr << " IDR" << endl;
cout << "Sisa uang Pak Anto setelah membeli mobil: "<< fixed << setprecision(0) << sisa_uang_in_idr << " IDR" << endl;
return 0;
}