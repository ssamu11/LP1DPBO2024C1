from kelas import AnggotaDPR, DaftarAnggotaDPR

if __name__ == "__main__":
    daftarAnggota = DaftarAnggotaDPR()

    while True:
        print("\nPilih:")
        print("1. Tambah anggota")
        print("2. Tampilkan anggota")
        print("3. Ubah anggota")
        print("4. Hapus anggota")
        print("5. Keluar")
        pilihan = input("Pilihan: ")

        if pilihan == '1':
            id = int(input("Masukkan ID: "))
            nama = input("Masukkan Nama: ")
            bidang = input("Masukkan Bidang: ")
            partai = input("Masukkan Partai: ")
            daftarAnggota.tambahAnggota(id, nama, bidang, partai)
        elif pilihan == '2':
            daftarAnggota.tampilkanAnggota()
        elif pilihan == '3':
            id = int(input("Masukkan ID anggota yang ingin diubah: "))
            nama = input("Masukkan Nama baru: ")
            bidang = input("Masukkan Bidang baru: ")
            partai = input("Masukkan Partai baru: ")
            daftarAnggota.ubahAnggota(id, nama, bidang, partai)
        elif pilihan == '4':
            id = int(input("Masukkan ID anggota yang ingin dihapus: "))
            daftarAnggota.hapusAnggota(id)
        elif pilihan == '5':
            print("Keluar dari program.")
            break
        else:
            print("Pilihan tidak valid.")
