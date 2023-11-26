#include <iostream>
#include <string>
using namespace std;

struct itemPenjualan {
    string kodeBarang;
    string namaBarang;
    double hargaSatuan;
    int jumlah; 
};

int main() {
    const int jumlahDataMax = 20;
    itemPenjualan dataPenjualan[jumlahDataMax];

    double totalHarga = 0;

    cout << "Masukkan data penjualan untuk 20 item:" << endl;
    for (int i = 0; i < jumlahDataMax; ++i) {
        cout << "Data ke-" << i + 1 << ":" << endl;
        cout << "Kode Barang: ";
        cin >> dataPenjualan[i].kodeBarang;
        cout << "Nama Barang: ";
        cin >> dataPenjualan[i].namaBarang;
        cout << "Jumlah: ";
        cin >> dataPenjualan[i].jumlah;
        cout << "Harga Satuan: Rp.";
        cin >> dataPenjualan[i].hargaSatuan;
        cout << endl;

        totalHarga += dataPenjualan[i].jumlah * dataPenjualan[i].hargaSatuan;
    }

    double keuntungan = 0.1 * totalHarga;
    cout << "Total Harga Penjualan: Rp." << totalHarga << endl;
    cout << "Keuntungan: Rp." << keuntungan << endl;

    return 0;
}