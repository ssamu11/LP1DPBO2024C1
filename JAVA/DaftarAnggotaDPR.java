import java.util.ArrayList;
import java.util.List;

public class DaftarAnggotaDPR {
    private List<AnggotaDPR> anggotaDPRs;

    public DaftarAnggotaDPR() {
        this.anggotaDPRs = new ArrayList<>();
    }

    public void tambahAnggota(int id, String nama, String bidang, String partai) {
        anggotaDPRs.add(new AnggotaDPR(id, nama, bidang, partai));
    }

    public void tampilkanAnggota() {
        System.out.println("Daftar Anggota DPR:");
        for (AnggotaDPR anggota : anggotaDPRs) {
            System.out.println("ID: " + anggota.getId() + ", Nama: " + anggota.getNama() +
                    ", Bidang: " + anggota.getBidang() + ", Partai: " + anggota.getPartai());
        }
    }

    public void ubahAnggota(int id, String nama, String bidang, String partai) {
        for (AnggotaDPR anggota : anggotaDPRs) {
            if (anggota.getId() == id) {
                anggota.setNama(nama);
                anggota.setBidang(bidang);
                anggota.setPartai(partai);
                return;
            }
        }
        System.out.println("Anggota dengan ID " + id + " tidak ditemukan.");
    }

    public void hapusAnggota(int id) {
        for (int i = 0; i < anggotaDPRs.size(); i++) {
            if (anggotaDPRs.get(i).getId() == id) {
                anggotaDPRs.remove(i);
                System.out.println("Anggota dengan ID " + id + " telah dihapus.");
                return;
            }
        }
        System.out.println("Anggota dengan ID " + id + " tidak ditemukan.");
    }
}
