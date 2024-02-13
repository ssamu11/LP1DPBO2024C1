import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        DaftarAnggotaDPR daftarAnggota = new DaftarAnggotaDPR();
        Scanner scanner = new Scanner(System.in);

        char pilihan;
        do {
            System.out.println("\nPilih:");
            System.out.println("1. Tambah anggota");
            System.out.println("2. Tampilkan anggota");
            System.out.println("3. Ubah anggota");
            System.out.println("4. Hapus anggota");
            System.out.println("5. Keluar");
            System.out.print("Pilihan: ");
            pilihan = scanner.next().charAt(0);

            switch (pilihan) {
                case '1':
                    int id;
                    String nama, bidang, partai;
                    System.out.print("Masukkan ID: ");
                    id = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Masukkan Nama: ");
                    nama = scanner.nextLine();
                    System.out.print("Masukkan Bidang: ");
                    bidang = scanner.nextLine();
                    System.out.print("Masukkan Partai: ");
                    partai = scanner.nextLine();
                    daftarAnggota.tambahAnggota(id, nama, bidang, partai);
                    break;
                case '2':
                    daftarAnggota.tampilkanAnggota();
                    break;
                case '3':
                    System.out.print("Masukkan ID anggota yang ingin diubah: ");
                    id = scanner.nextInt();
                    scanner.nextLine(); 
                    System.out.print("Masukkan Nama baru: ");
                    nama = scanner.nextLine();
                    System.out.print("Masukkan Bidang baru: ");
                    bidang = scanner.nextLine();
                    System.out.print("Masukkan Partai baru: ");
                    partai = scanner.nextLine();
                    daftarAnggota.ubahAnggota(id, nama, bidang, partai);
                    break;
                case '4':
                    System.out.print("Masukkan ID anggota yang ingin dihapus: ");
                    id = scanner.nextInt();
                    daftarAnggota.hapusAnggota(id);
                    break;
                case '5':
                    System.out.println("Keluar dari program.");
                    break;
                default:
                    System.out.println("Pilihan tidak valid.");
                    break;
            }
        } while (pilihan != '5');

        scanner.close();
    }
}
