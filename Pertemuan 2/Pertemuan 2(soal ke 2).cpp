#include <iostream>
using namespace std;

int main() {
    float jarak, waktu, kecepatan;

    cout << "jarak yang ditempuh (dalam km): ";
    cin >> jarak;

    cout << "waktu yang diperlukan (dalam jam): ";
    cin >> waktu;

    kecepatan = jarak / waktu;

    cout << "Kecepatan rata-rata kendaraan: " << kecepatan << " km per jam";

    return 0;
}