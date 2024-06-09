#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

struct HasilTebak {
    int tebakan;
    string respons;
};

class TebakAngka {
private:
    int angkaRahasia;
    vector<HasilTebak> riwayatTebakan;
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

        cout << "Halo, selamat datang di permainan Tebak Angka!\n";
        cout << "Saya sudah memilih angka antara 1 dan 100. Yuk, tebak angkanya!\n";

        while (tebakanKe < maksTebakan) {
            cout << "Tebakanku yang ke-" << tebakanKe + 1 << ": ";
            cin >> tebakan;

            HasilTebak hasil;
            hasil.tebakan = tebakan;
            tebakanKe++;

            if (tebakan > angkaRahasia) {
                hasil.respons = "Tebakanmu terlalu tinggi! Coba lagi, ya.";
            } else if (tebakan < angkaRahasia) {
                hasil.respons = "Tebakanmu terlalu rendah! Ayo, coba lagi.";
            } else {
                hasil.respons = "Yeay! Kamu berhasil menebak angkanya.";
                riwayatTebakan.push_back(hasil);
                break;
            }

            riwayatTebakan.push_back(hasil);
            cout << hasil.respons << "\n";
        }

        if (tebakanKe == maksTebakan) {
            cout << "Wah, sayang sekali! Kamu sudah mencapai batas maksimum tebakan. Angka yang benar adalah " << angkaRahasia << ".\n";
        }

        cout << "Pssst, sebenarnya angka rahasianya adalah " << angkaRahasia << ". Jangan beritahu siapa-siapa ya!\n";

        tampilkanRiwayatTebakan();
    }

    void tampilkanRiwayatTebakan() const {
        cout << "Riwayat Tebakanmu:\n";
        for (const auto& hasil : riwayatTebakan) {
            cout << "Tebakan: " << hasil.tebakan << ", Respons: " << hasil.respons << "\n";
        }
    }
};

int main() {
    int maksTebakan = 7;
    TebakAngka permainan(maksTebakan);
    permainan.mainkan();
    return 0;
}