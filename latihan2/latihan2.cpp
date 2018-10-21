#include<iostream>

using namespace std;

int main() {

    int A,B,C,D;

    cout << "Masukan bilangan 1: ";
    cin >> A;
    cout << "Masukan bilangan 2: ";
    cin >> B;
    cout << "Masukan bilangan 3: ";
    cin >> C;
    cout << "Masukan bilangan 4: ";
    cin >> D;

     if (A>B && A>C && A>D) cout << "Bilangan terbesar adalah = " << A << endl;
     else
        if (A > C)
            cout << "bilangan terbesar adalah: " << A << endl;
     if (B>A && B>C && B>D) cout << "Bilangan terbesar adalah = " << B << endl;
    else {
        if (C>A && C>B && C>D) cout << "Bilangan terbesar adalah = " << C << endl;
        else
            cout << "Bilangan terbesar adalah = " << D;
    }
}
