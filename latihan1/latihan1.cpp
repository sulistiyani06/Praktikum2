#include<iostream>

using namespace std;

int main() {
    int A, B, C;

    cout << "Masukan bilang 1: ";
    cin >> A;

    cout << "Masukan bilang 2: ";
    cin >> B;

    cout << "Masukan bilang 3: ";

    cin >> C;

    cout << "masukan bilang 4: ";

    if (A > B) {
        if (A > C)
            cout << "Bilangan terbesar adalah: " << A << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    } else {
        if (B > C)
            cout << "Bilangan terbesar adalah: " << B << endl;
        else
            cout << "Bilangan terbesar adalah: " << C << endl;
    }
}

