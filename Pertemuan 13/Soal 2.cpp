#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double biaya900VA = 1350; 
    double biaya1300VA = 1440; 
    double biaya2200VA = 1450; 
    double biaya3500VA = 1500; 

    int daya_listrik;
    int AC, kulkas, setrika, mesinCuci, lampu, lainnya;

    cout << "Masukkan daya listrik rumah (900, 1300, 2200, atau 3500 (VA)): ";
    cin >> daya_listrik;

    cout << "Masukkan penggunaan AC (watt): ";
    cin >> AC;
    cout << "Masukkan penggunaan Kulkas (watt): ";
    cin >> kulkas;
    cout << "Masukkan penggunaan Setrika (watt): ";
    cin >> setrika;
    cout << "Masukkan penggunaan Mesin cuci (watt): ";
    cin >> mesinCuci;
    cout << "Masukkan penggunaan Lampu (watt): ";
    cin >> lampu;
    cout << "Masukkan penggunaan Lainnya (watt): ";
    cin >> lainnya;

    double penggunaan_perhari = (AC + kulkas + setrika + mesinCuci + lampu + lainnya) / 1000.0;

    double penggunaan_perbulan = penggunaan_perhari * 30; 

    double biaya_total = 0.0;
    if (daya_listrik == 900)
        biaya_total = penggunaan_perbulan * biaya900VA;
    else if (daya_listrik == 1300)
        biaya_total = penggunaan_perbulan * biaya1300VA;
    else if (daya_listrik == 2200)
        biaya_total = penggunaan_perbulan * biaya2200VA;
    else if (daya_listrik == 3500)
        biaya_total = penggunaan_perbulan * biaya3500VA;
    else
        cout << "Daya listrik tidak valid!" << endl;

    cout << fixed << setprecision(0);
    cout << "Biaya pembayaran listrik per bulan adalah: Rp. " << biaya_total << endl;

    return 0;
}