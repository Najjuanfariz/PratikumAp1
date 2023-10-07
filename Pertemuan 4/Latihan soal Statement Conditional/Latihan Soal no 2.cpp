//LATIHAN SOAL NO 2
#include <iostream>
using namespace std;

int main() {
  double panjangKertas, lebarKertas, margin_atas, margin_bawah, margin_kanan, margin_kiri;
  double ukuran_titik;
  char spasi;
  double panjang_efektif = lebarKertas - margin_kiri - margin_kanan;
  int jumlah_karakter = static_cast<int>(panjang_efektif/(ukuran_titik/72.0));
  int jumlah_baris = static_cast<int>(panjangKertas - margin_atas - margin_bawah/(ukuran_titik/72.0));

  cout << "\n|-----------------|" <<endl;
  cout << "|  Ukuran Kertas  |" <<endl;
  cout << "|-----------------|\n" <<endl;
    
  cout << "Masukkan panjang kertas (inci):";
  cin >> panjangKertas;
  cout << "Masukkan lebar kertas (inci):";
  cin >> lebarKertas;
  cout << "Masukkan margin atas (inci):";
  cin >> margin_atas;
  cout << "Masukkan margin bawah (inci):";
  cin >> margin_bawah;
  cout << "Masukkan margin kanan (inci):";
  cin >> margin_kanan;
  cout << "Masukkan margin kiri (inci):";
  cin >> margin_kiri;
  cout << "Masukkan ukuran titik suatu garis (inci):";
  cin >> ukuran_titik;
  cout << "apakah garis diberi spasi ganda? (y/n):";
  cin >> spasi;

  if (spasi == 'y'|| spasi == 'Y'){
    ukuran_titik *= 2.0;
  }
  cout << "\n|=======================|" <<endl;
  cout << "|   Hasil Perhitungan   |" <<endl;
  cout << "|=======================|" <<endl;
  cout << "\nJumlah karakter dalam satu baris:" << jumlah_karakter << endl;
  cout << "Jumlah baris yang dapat dicetak:" << jumlah_baris << endl;

  return 0;
}