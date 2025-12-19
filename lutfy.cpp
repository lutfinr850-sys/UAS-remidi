#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "Masukkan tinggi segitiga : ";
    cin >> tinggi;

    cout << endl;

    for (int i = tinggi; i >= 1; i--) {
        // Spasi di kiri
        for (int spasi = tinggi - i; spasi > 0; spasi--) {
            cout << " ";
        }

        // Bintang
        for (int bintang = 1; bintang <= (2 * i - 1); bintang++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
