public class AnggotaDPR {
    private int id;
    private String nama;
    private String bidang;
    private String partai;

    public AnggotaDPR(int id, String nama, String bidang, String partai) {
        this.id = id;
        this.nama = nama;
        this.bidang = bidang;
        this.partai = partai;
    }

    public int getId() {
        return id;
    }

    public String getNama() {
        return nama;
    }

    public String getBidang() {
        return bidang;
    }

    public String getPartai() {
        return partai;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    public void setPartai(String partai) {
        this.partai = partai;
    }
}
