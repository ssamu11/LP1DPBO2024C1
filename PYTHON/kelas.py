class AnggotaDPR:
    def __init__(self, _id, _nama, _bidang, _partai):
        self.id = _id
        self.nama = _nama
        self.bidang = _bidang
        self.partai = _partai

    def getId(self):
        return self.id

    def getNama(self):
        return self.nama

    def getBidang(self):
        return self.bidang

    def getPartai(self):
        return self.partai

    def setNama(self, _nama):
        self.nama = _nama

    def setBidang(self, _bidang):
        self.bidang = _bidang

    def setPartai(self, _partai):
        self.partai = _partai

class DaftarAnggotaDPR:
    def __init__(self):
        self.anggotaDPRs = []

    def tambahAnggota(self, id, nama, bidang, partai):
        self.anggotaDPRs.append(AnggotaDPR(id, nama, bidang, partai))

    def tampilkanAnggota(self):
        print("Daftar Anggota DPR:")
        for anggota in self.anggotaDPRs:
            print("ID:", anggota.getId(), ", Nama:", anggota.getNama(), ", Bidang:", anggota.getBidang(), ", Partai:", anggota.getPartai())

    def ubahAnggota(self, id, nama, bidang, partai):
        for anggota in self.anggotaDPRs:
            if anggota.getId() == id:
                anggota.setNama(nama)
                anggota.setBidang(bidang)
                anggota.setPartai(partai)
                return
        print("Anggota dengan ID", id, "tidak ditemukan.")

    def hapusAnggota(self, id):
        for anggota in self.anggotaDPRs:
            if anggota.getId() == id:
                self.anggotaDPRs.remove(anggota)
                print("Anggota dengan ID", id, "telah dihapus.")
                return
        print("Anggota dengan ID", id, "tidak ditemukan.")
