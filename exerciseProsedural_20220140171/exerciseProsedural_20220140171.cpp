#include <iostream>
using namespace std;

int main() {
    const int JumlahPeserta = 2;
    string nama[JumlahPeserta];
    int nilM[JumlahPeserta];
    int nilB[JumlahPeserta];
    bool Terima[JumlahPeserta] = { false };


    for (int i = 0; i < JumlahPeserta; i++) {
        cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
        getline(cin, nama[i], '\n');
        cout << "Masukkan nilai matematika kandidat ke-" << i + 1 << ": ";
        cin >> nilM[i];
        cout << "Masukkan nilai bahasa Inggris kandidat ke-" << i + 1 << ": ";
        cin >> nilB[i];
        cin.ignore();
    }


    int Diterima = 0;
    for (int i = 0; i < JumlahPeserta; i++) {
        double rata2 = (nilM[i] + nilB[i]) / 2.0;
        if (rata2 >= 70 || nilM[i] > 80) {
            Terima[i] = true;
            Diterima++;
        }
    }


    cout << "Nama\tStatus\n";
    for (int i = 0; i < JumlahPeserta; i++) {
        cout << nama[i] << "\t";
        if (Terima[i]) {
            cout << "diterima\n";
        }
        else {
            cout << "tidak diterima\n";
        }
    }


    cout << "Jumlah kandidat diterima: " << Diterima << endl;
    cout << "Jumlah kandidat tidak diterima: " << JumlahPeserta - Diterima << endl;

    return 0;
}