// Latihan Conditional Statment No 1
#include <iostream>
using namespace std;
int main() {
    const double hargaKamarPerMalam = 100.00;
    const double diskon[] = {0.0, 0.10, 0.20, 0.30};
    const double diskonTambahan = 0.05;

    double biayasewakamar;
    int jumlahKamarDipesan;
    int jumlahHariDipesan;
    double pajakPenjualan;

  cout<< "|====================================|"<<endl;
  cout<< "|Selamat Datang,Silahkan Boking Hotel|"<<endl;
  cout<< "|====================================|"<<endl;
  cout<<endl;

    cout << "Masukkan biaya sewa satu kamar:$";
    cin >> biayasewakamar;
    cout << "Masukkan jumlah kamar yang dipesan: ";
    cin >> jumlahKamarDipesan;
    cout << "Masukkan jumlah hari kamar dipesan: ";
    cin >> jumlahHariDipesan;
    cout << "Pajak penjualan (sebagai persen): ";
    cin >> pajakPenjualan;

    double diskonKamar = (jumlahKamarDipesan >= 30) ? diskon[3] : ((jumlahKamarDipesan >= 20) ? diskon[2] : ((jumlahKamarDipesan >= 10) ? diskon[1] : diskon[0]));
    diskonKamar += (jumlahHariDipesan >= 3) ? diskonTambahan : 0.0;

    double totalBiayaKamarSebelumDiskon = biayasewakamar * jumlahKamarDipesan * jumlahHariDipesan;
    double totalDiskon = diskonKamar * totalBiayaKamarSebelumDiskon;
    double totalPajak = (pajakPenjualan / 100) * (totalBiayaKamarSebelumDiskon - totalDiskon);
    double totalTagihan = totalBiayaKamarSebelumDiskon - totalDiskon + totalPajak;

    cout << "Biaya sewa satu kamar per malam: $" << biayasewakamar << endl;
    cout << "Diskon pada setiap kamar sebagai persen: " << (diskonKamar * 100) << "%" << endl;
    cout << "Jumlah kamar yang dipesan: " << jumlahKamarDipesan << endl;
    cout << "Jumlah hari kamar dipesan: " << jumlahHariDipesan << endl;
    cout << "Total biaya kamar sebelum diskon:$" << totalBiayaKamarSebelumDiskon << endl;
    cout << "Total diskon:$" << totalDiskon << endl;
    cout << "Pajak penjualan:$" << totalPajak << endl;
    cout << "Jumlah tagihan total:$" << totalTagihan << endl;

    return 0;
}