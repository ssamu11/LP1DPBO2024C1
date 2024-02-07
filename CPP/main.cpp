/*Saya Muhammad Rafie Alhabsyi Setiawan NIM 2202400
mengerjakan soal Latihan Praktikum 1
dalam mata kuliah DESAIN DAN PEMROGRAMAN BERORIENTASI
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "kelas.cpp"

int main() {
    DaftarAnggotaDPR daftarAnggota;

    char pilihan;
    do {
        cout << "\nPilih:\n";
        cout << "1. Tambah anggota\n";
        cout << "2. Tampilkan anggota\n";
        cout << "3. Ubah anggota\n";
        cout << "4. Hapus anggota\n";
        cout << "5. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case '1': {
                int id;
                string nama, bidang, partai;
                cout << "Masukkan ID: ";
                cin >> id;
                cout << "Masukkan Nama: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Bidang: ";
                getline(cin, bidang);
                cout << "Masukkan Partai: ";
                getline(cin, partai);
                daftarAnggota.tambahAnggota(id, nama, bidang, partai);
                break;
            }
            case '2':
                daftarAnggota.tampilkanAnggota();
                break;
            case '3': {
                int id;
                string nama, bidang, partai;
                cout << "Masukkan ID anggota yang ingin diubah: ";
                cin >> id;
                cout << "Masukkan Nama baru: ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Bidang baru: ";
                getline(cin, bidang);
                cout << "Masukkan Partai baru: ";
                getline(cin, partai);
                daftarAnggota.ubahAnggota(id, nama, bidang, partai);
                break;
            }
            case '4': {
                int id;
                cout << "Masukkan ID anggota yang ingin dihapus: ";
                cin >> id;
                daftarAnggota.hapusAnggota(id);
                break;
            }
            case '5':
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                break;
        }
    } while (pilihan != '5');

    return 0;
}
