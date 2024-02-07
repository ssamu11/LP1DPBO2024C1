/*Saya Muhammad Rafie Alhabsyi Setiawan NIM 2202400
mengerjakan soal Latihan Praktikum 1
dalam mata kuliah DESAIN DAN PEMROGRAMAN BERORIENTASI
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class AnggotaDPR {
private:
    int id;
    string nama;
    string bidang;
    string partai;

public:
    AnggotaDPR(int _id, const string& _nama, const string& _bidang, const string& _partai) :
        id(_id), nama(_nama), bidang(_bidang), partai(_partai) {}

    int getId() const { return id; }
    string getNama() const { return nama; }
    string getBidang() const { return bidang; }
    string getPartai() const { return partai; }

    void setNama(const string& _nama) { nama = _nama; }
    void setBidang(const string& _bidang) { bidang = _bidang; }
    void setPartai(const string& _partai) { partai = _partai; }
};

class DaftarAnggotaDPR {
private:
    vector<AnggotaDPR> anggotaDPRs;

public:
    void tambahAnggota(int id, const string& nama, const string& bidang, const string& partai) {
        anggotaDPRs.emplace_back(id, nama, bidang, partai);
    }

    void tampilkanAnggota() const {
        cout << "Daftar Anggota DPR:\n";
        for (const auto& anggota : anggotaDPRs) {
            cout << "ID: " << anggota.getId() << ", Nama: " << anggota.getNama() << ", Bidang: " << anggota.getBidang() << ", Partai: " << anggota.getPartai() << endl;
        }
    }

    void ubahAnggota(int id, const string& nama, const string& bidang, const string& partai) {
        for (auto& anggota : anggotaDPRs) {
            if (anggota.getId() == id) {
                anggota.setNama(nama);
                anggota.setBidang(bidang);
                anggota.setPartai(partai);
                return;
            }
        }
        cout << "Anggota dengan ID " << id << " tidak ditemukan.\n";
    }

    void hapusAnggota(int id) {
        for (auto it = anggotaDPRs.begin(); it != anggotaDPRs.end(); ++it) {
            if (it->getId() == id) {
                anggotaDPRs.erase(it);
                cout << "Anggota dengan ID " << id << " telah dihapus.\n";
                return;
            }
        }
        cout << "Anggota dengan ID " << id << " tidak ditemukan.\n";
    }
};