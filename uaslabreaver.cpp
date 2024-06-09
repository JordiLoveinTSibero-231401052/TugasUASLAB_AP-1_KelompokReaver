#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class TebakAngka {
private:
    int angkaRahasia;
    int maksTebakan;

    void inisialisasiPermainan() {
        srand(static_cast<unsigned int>(time(0))); 
        angkaRahasia = rand() % 100 + 1; 
    }

public:
    TebakAngka(int maksTebakan) : maksTebakan(maksTebakan) {
        inisialisasiPermainan();
    }

    void mainkan() {
        int tebakan;
        int tebakanKe = 0;

        cout << "---------------------------------------------\n";
        if (maksTebakan == 1) {
            cout << "Apakah Kamu Memiliki Hoki Seperti Raja Qondru?\n";
        } else {
            cout << "Selamat datang di permainan Tebak Angka!\n";
        }
        cout << "---------------------------------------------\n\n";

        cout << "Saya sudah memilih angka antara 1 dan 100.\n";
        cout << "Anda memiliki " << maksTebakan << " kesempatan untuk menebak.\n\n";

        while (tebakanKe < maksTebakan) {
            cout << "Tebakan ke-" << tebakanKe + 1 << ": ";
            cin >> tebakan;

            if (maksTebakan == 1 && tebakan == 69) {
                cout << "Selamat! Anda berhasil menebak angka dan mendapatkan gelar Raja Qondru.\n";
                break;
            } else if (tebakan == angkaRahasia) {
                cout << "Selamat! Anda berhasil menebak angka.\n";
                break;
            } else if (maksTebakan == 1 && tebakan != 69) {
                cout << "Sayang sekali, angka yang benar adalah " << angkaRahasia << ".\n";
                break;
            } else if (tebakan > angkaRahasia) {
                cout << "Tebakan terlalu tinggi!\n\n";
            } else {
                cout << "Tebakan terlalu rendah!\n\n";
            }

            tebakanKe++;
        }

        if (tebakanKe == maksTebakan) {
            cout << "Sayang sekali, Anda sudah menggunakan semua kesempatan.\n";
            cout << "Angka yang benar adalah " << angkaRahasia << ".\n\n";
        }

        cout << "---------------------------------------------\n\n";
    }
};

int main() {
    int maksTebakan = 7;
    int tingkatKesulitan;

    cout << "Pilih tingkat kesulitan:\n";
    cout << "1. Mudah (10 tebakan)\n";
    cout << "2. Sedang (7 tebakan)\n";
    cout << "3. Sulit (5 tebakan)\n";
    cout << "4. Kegelapan (1 tebakan)\n";
    cout << "Pilihan: ";
    cin >> tingkatKesulitan;

    switch (tingkatKesulitan) {
        case 1:
            maksTebakan = 10;
            break;
        case 2:
            maksTebakan = 7;
            break;
        case 3:
            maksTebakan = 5;
            break;
        case 4:
            maksTebakan = 1;
            break;
        default:
            cout << "Pilihan tidak valid, menggunakan tingkat kesulitan sedang.\n";
            maksTebakan = 7;
            break;
    }

    TebakAngka permainan(maksTebakan);
    permainan.mainkan();
    return 0;
}
