#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukkan bilangan : ";
    cin >> bilangan;

    cout << endl;

    if (bilangan % 2 != 0) {
        cout << "Ganjil" << endl;
    }
    else {
        cout << "Genap" << endl;
    }

    if (bilangan > 10) {
        cout << "Di atas 10";
    }
    else {
        cout << "Tidak di atas 10";
    }

    return 0;
}