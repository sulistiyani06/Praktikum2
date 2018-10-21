# Praktikum2


## Latihan1.cpp : program menghitung bilangan terbesar dari 3 bilangan

**Alur algoritma**

1. Mendeklarasikan variabel `int A, B, C` sebagai variabel input.
2. Membaca input dari keyboard `cin >> A >> B >> C`
3. Membandingkan nilai variabel **A** dan **B**
4. Kondisi **TRUE** , maka bandingkan nilai variabel **A** dengan **C**
5. Kondisi **FALSE** , maka bandingkan nilai variabel **B** dengan **C**

**Flowchart Program**
![Flowchart](https://raw.githubusercontent.com/sulistiyani06/Praktikum2/master/latihan1/Flowchart%20Lt.1.png)

**code program lengkap:**
```c++
#include<iostream>

using namespace std;

int main() {
    int A,B,C;

    cout << "Masukkan bilang 1: ";
    cin >> A;

    cout << "Masukkan bilang 2: ";
    cin >> B;

    cout << "Masukkan bilang 3: ";
    cin >> C;

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
```

hasilnya:
![ing](https://raw.githubusercontent.com/sulistiyani06/Praktikum2/master/latihan1/screenshot%20latihan1.png)

## Latihan2.cpp

**Alur algoritma**
1. Mendeklarasikan variabel `int A, B, C, D` sebagai variabel input.
2. Membaca input dari keyboard `cin >> A >> B >> C >> D`
3. Membandingkan nilai variabel **A** dengan variable **B** & C & D**
4. jika kondisi **TRUE** , maka cetaklah variable **A**
5. dan bandingkan nilai **B** dengan **A , C & D**
6. jika kondisi **TRUSE** ,maka cetak **B**
7. dan variable **C** dibandingkan lagi dengan **B , A & D**
8. jika kondisi **TRUE** , maka cetaklah **C**
9. Dan jika kondisi **FALSE** , maka cetaklah **D**

**Flowchart program**
![flowchart](https://raw.githubusercontent.com/sulistiyani06/Praktikum2/master/latihan2/Flowchart%20Lt.2.png)

**cpde program lengkap:**
```c++
 
#include <iostream>

using namespace std;

int main()
{
    int A,B,C,D;
    cout<<"masukan bilangan 1: ":
    cin>> A;
    cout<<"masukan bilangan 2: ":
    cin>> B;
    cout<<"masukan bilangan 3: ":
    cin>> C;
    cout<<"masukan bilangan 4: ":
    cin>> D;

    if (A>B && A>C && A>D) cout << "bilangan terbesar= " << A << endl;
    else

    if (B>A && B>C && B>D) cout << "bilangan terbesar= " << B << endl;

    else{
        if (C>A && C>B && C>D) cout << "bilangan terbesar= " << C << endl;
        else
            cout << "bilngan terbesar = " << D;
    }
}
```

hasilnya:
![ing](https://raw.githubusercontent.com/sulistiyani06/Praktikum2/master/latihan2/Screenshot%20(3).png)