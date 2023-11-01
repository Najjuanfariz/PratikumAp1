#include <iostream>
#include <string>
using namespace std;

string konversiPass(const string& massukkanPass) {
    string convertedPassword = "";

    for (char c : massukkanPass) {
        if (isalpha(c)) {
            convertedPassword += char(c + 2);
        } else if (isdigit(c)) {
            int num = c - '0';
            int convertedNum = num * 2;
            convertedPassword += to_string(convertedNum);
        } else {
            convertedPassword += c;
        }
    }

    return convertedPassword;
}

int isValidPassword(const string& massukkanPass) {
    if (massukkanPass.length() != 8) {
        return 0;
    }

    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (massukkanPass[i] == massukkanPass[j] || massukkanPass[i] == ' ' || massukkanPass[j] == ' ') {
                return 0;
            }
        }
    }

    bool memilikiHuruf = false;
    bool memilikiAngka = false;

    for (char c : massukkanPass) {
        if (isalpha(c)) {
          memilikiHuruf = true;
        } else if (isdigit(c)) {
          memilikiAngka= true;
        }
    }

    return memilikiHuruf && memilikiAngka;
}

int main() {
    cout << "MENYIMPAN PASSWORD\n" << endl;
    string inputPassword;
    cout << "Masukkan password(8 Digit): ";
    cin >> inputPassword;
    int passwordIsValid = isValidPassword(inputPassword);

    if (passwordIsValid) {
        string convertedPassword = konversiPass(inputPassword);
        cout << "Password yang diinput: " << inputPassword << endl;
        cout << "Password yang tersimpan (hasil konversi): " << convertedPassword << endl;
    } else {
        cout << "Password Tidak Valid, tidak sesuai dengan aturan a" << endl;
    }
    return 0;
}