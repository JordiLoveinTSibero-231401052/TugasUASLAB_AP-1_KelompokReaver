# TugasUASLAB_AP-1_KelompokReaver
UAS LAB LAB AP-1 Kelompok Reaver
Jordi Lovein T. Sibero (231401052)
Wayne Fabel Charles Sirait (231401064)

Deskripsi Program

1. Pemilihan Angka Rahasia:

Program menggunakan fungsi rand() dari pustaka <cstdlib> untuk memilih sebuah angka rahasia secara acak antara 1 dan 100. Fungsi ini diinisialisasi dengan srand(static_cast<unsigned int>(time(0))) agar hasilnya acak setiap kali program dijalankan.
Tingkat Kesulitan:

2. Program menawarkan empat tingkat kesulitan yang berbeda:
   
Mudah: Pengguna diberikan 10 kesempatan untuk menebak angka rahasia.
Sedang: Pengguna diberikan 7 kesempatan untuk menebak angka rahasia.
Sulit: Pengguna diberikan 5 kesempatan untuk menebak angka rahasia.
Kegelapan: Pengguna hanya diberikan 1 kesempatan untuk menebak angka rahasia.

3. Tebakan Pengguna:

Pengguna memasukkan tebakan mereka dan program memberikan umpan balik apakah tebakan tersebut terlalu tinggi, terlalu rendah, atau benar.
Jika pengguna menebak dengan benar, program menampilkan pesan selamat.
Jika pengguna salah menebak di tingkat kesulitan "Kegelapan", program mengungkapkan angka rahasia dan menyatakan bahwa pengguna telah kalah.

4. Fitur Spesial di Tingkat "Kegelapan":

Ada fitur khusus pada tingkat kesulitan "Kegelapan". Jika pengguna menebak angka 69, mereka akan mendapatkan pesan khusus dan diberi gelar "Raja Qondru", terlepas dari apakah angka rahasia sebenarnya adalah 69 atau tidak.
Penanganan Input Tidak Valid:

5. Fitur default
Jika pengguna memilih tingkat kesulitan yang tidak valid, program secara otomatis mengatur tingkat kesulitan ke "Sedang" dengan 7 kesempatan untuk menebak.
Pengulangan Permainan:

6. Menampilkan Hasil
Setelah permainan selesai, program menampilkan pesan hasil dan menyatakan apakah pengguna menang atau kalah, serta mengungkapkan angka rahasia jika pengguna gagal menebak dengan benar.


