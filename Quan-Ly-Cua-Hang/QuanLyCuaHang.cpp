#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string
#define db double
#define fl float
class Person
{
private:
    str ten, diaChi, soDienThoai, email, gioiTinh;
    int tuoi;

public:
    Person()
    {
        ten = diaChi = soDienThoai = email = gioiTinh = "";
        tuoi = 0;
    }

    Person(str t, str dc, str sdt, str email, str gt, int tuoi)
    {
        this->ten = t;
        this->diaChi = dc;
        this->soDienThoai = sdt;
        this->email = email;
        this->gioiTinh = gt;
        this->tuoi = tuoi;
    }

    void setName(str ten)
    {
        ten = ten;
    }

    str getName()
    {
        return ten;
    }

    void setTuoi(int tuoi)
    {
        tuoi = tuoi;
    }

    int getTuoi()
    {
        return tuoi;
    }

    void setDiaChi(str diaChi)
    {
        this->diaChi = diaChi;
    }
    str getDiaChi()
    {
        return diaChi;
    }
    void setSoDienThoai(str soDienThoai)
    {
        this->soDienThoai = soDienThoai;
    }
    str getSoDienThoai()
    {
        return soDienThoai;
    }
    void setEmail(str email)
    {
        this->email = email;
    }
    str getEmail()
    {
        return email;
    }
    void setGioiTinh(str gioiTinh)
    {
        this->gioiTinh = gioiTinh;
    }
    str getGioiTinh()
    {
        return gioiTinh;
    }
    // Ham nhap va xuat du lieu
    virtual void input()
    {
        cin.ignore();
        ofstream ps("dsps.txt", ios::app);
        cout << " Ten: ";
        getline(cin, ten);
        cout << " Tuoi: ";
        cin >> tuoi;
        cin.ignore();
        cout << " Gioi tinh (Nam / Nu / Khac) : ";
        getline(cin, gioiTinh);
        cout << " Dia chi (Thanh Pho/ Quan): ";
        getline(cin, diaChi);
        cout << " So dien thoai: ";
        getline(cin, soDienThoai);
        cout << " Email: ";
        getline(cin, email);

        ps << " Ten: " << ten << endl;
        ps << " Tuoi: " << tuoi << endl;
        ps << " Gioi tinh (Nam / Nu / Khac) : " << gioiTinh << endl;
        ps << " Dia chi (Thanh Pho/ Quan): " << diaChi << endl;
        ps << " So dien thoai: " << soDienThoai << endl;
        ps << " Email: " << email << endl;
        ps << "-----------------------------------------\n";
        ps.close();
    }

    virtual void output()
    {
        cout << " Ten: " << ten << endl;
        cout << " Tuoi: " << tuoi << endl;
        cout << " Gioi tinh (Nam / Nu / Khac) : " << gioiTinh << endl;
        cout << " Dia chi (Thanh Pho/ Quan): " << diaChi << endl;
        cout << " So dien thoai: " << soDienThoai << endl;
        cout << " Email: " << email << endl;
    }
};

class NhanVien : public Person
{
private:
    str chucVu, lichLamViec, trinhDoHocVan, ngayVaoLam, trangThaiLamViec, soCaLam;
    int soLanViPham, soLanNghiPhep;
    fl luong;

public:
    NhanVien()
    {
        chucVu = lichLamViec = trinhDoHocVan = ngayVaoLam = trangThaiLamViec = soCaLam = "";
        soLanViPham = soLanNghiPhep = luong = 0;
    }
    NhanVien(str cv, str llv, fl luong, str tdhv, str nvl, str ttlv, int slvp, str scl, int slnp)
    {
        this->chucVu = cv;
        this->lichLamViec = llv;
        this->trinhDoHocVan = tdhv;
        this->ngayVaoLam = nvl;
        this->trangThaiLamViec = ttlv;
        this->soLanViPham = slvp;
        this->soCaLam = scl;
        this->soLanNghiPhep = slnp;
        this->luong = luong;
    }

    void setChucVu(str chucVu)
    {
        this->chucVu = chucVu;
    }
    void setLichLamViec(str lichLamViec)
    {
        this->lichLamViec = lichLamViec;
    }
    void setLuong(ll luong)
    {
        this->luong = luong;
    }
    /*
    void setTrinhDoHocVan(str trinhDoHocVan)
    {
        this->trinhDoHocVan = trinhDoHocVan;
    }
    */
    void setNgayVaoLam(str ngayVaoLam)
    {
        this->ngayVaoLam = ngayVaoLam;
    }
    void setTrangThaiLamViec(str trangThaiLamViec)
    {
        this->trangThaiLamViec = trangThaiLamViec;
    }
    void setSoLanViPham(int soLanViPham)
    {
        this->soLanViPham = soLanViPham;
    }
    void setSoCaLam(int soCaLam)
    {
        this->soCaLam = soCaLam;
    }
    void setSoLanNghiPhep(int soLanNghiPhep)
    {
        this->soLanNghiPhep = soLanNghiPhep;
    }

    str getChucVu()
    {
        return chucVu;
    }

    str getLichLamViec()
    {
        return lichLamViec;
    }

    ll getLuong()
    {
        return luong;
    }
    str getTrinhDoHocVan()
    {
        return trinhDoHocVan;
    }
    str getNgayVaoLam()
    {
        return ngayVaoLam;
    }
    str getTrangThaiLamViec()
    {
        return trangThaiLamViec;
    }
    int getSoLanViPham()
    {
        return soLanViPham;
    }
    str getSoCaLam()
    {
        return soCaLam;
    }
    int getSoLanNghiPhep()
    {
        return soLanNghiPhep;
    }

    string generateRandomString(int length)
    {
        string randomString;
        const char charset[] =
            "0123456789";

        const int max_index = sizeof(charset) - 1;

        // Seed the random number generator
        srand(static_cast<unsigned int>(time(nullptr)));

        for (int i = 0; i < length; ++i)
        {
            randomString += charset[rand() % max_index];
        }

        return randomString;
    }

    void input()
    {
        ofstream nv("dsnv.txt", ios::app);
        Person::input();
        cout << " Chuc vu: ";
        getline(cin, chucVu);
        cout << " Lich lam viec (trong 1 tuan): ";
        getline(cin, lichLamViec);
        cout << " Trinh do hoc van: ";
        getline(cin, trinhDoHocVan);
        cout << " Ngay vao lam: ";
        getline(cin, ngayVaoLam);
        cout << " Trang thai lam viec (fulltime / part time): ";
        getline(cin, trangThaiLamViec);
        cout << " Luong nhan vien: ";
        cin >> luong;
        cout << " So lan vi pham: ";
        cin >> soLanViPham;
        cout << " So ca lam: ";
        cin >> soCaLam;
        cout << " So lan nghi phep: ";
        cin >> soLanNghiPhep;

        // Ghi du lieu nhan vien vao file
        string randomString = generateRandomString(12);
        nv << "Ten: " << getName() << endl;
        nv << "ID: " << randomString << endl;
        nv << "Tuoi: " << getTuoi() << endl;
        nv << "Gioi tinh: " << getGioiTinh() << endl;
        nv << "Chuc vu: " << chucVu << endl;
        nv << "Lich lam viec: " << lichLamViec << endl;
        nv << "Trinh do hoc van: " << trinhDoHocVan << endl;
        nv << "Ngay vao lam: " << ngayVaoLam << endl;
        nv << "Trang thai lam viec (fulltime / part time): " << trangThaiLamViec << endl;
        nv << "Luong: " << luong << endl;
        nv << "So lan vi pham: " << soLanViPham << endl;
        nv << "So ca lam: " << soCaLam << endl;
        nv << "So lan nghi phep: " << soLanNghiPhep << endl;
        nv << "-----------------------------------------\n";
        nv.close();
    }

    void output()
    {
        Person::output();
        cout << " Chuc vu: " << chucVu << endl;
        cout << " Lich lam viec (trong 1 tuan): " << lichLamViec << endl;
        cout << " Trinh do hoc van: " << trinhDoHocVan << endl;
        cout << " Ngay vao lam: " << ngayVaoLam << endl;
        cout << " Trang thai lam viec (fulltime / part time): " << trangThaiLamViec << endl;
        cout << " Luong: " << luong << endl;
        cout << " So lan vi pham: " << soLanViPham << endl;
        cout << " So ca lam: " << soCaLam << endl;
        cout << " So lan nghi phep: " << soLanNghiPhep << endl;
    }
};

class KhachHang : public Person
{
private:
    str loaiKhachHang, theThanhVien, ngayCapThe, tinhTrangThe;

public:
    KhachHang()
    {
        loaiKhachHang = theThanhVien = ngayCapThe = tinhTrangThe = "";
    }

    KhachHang(str loaiKhachHang, str theThanhVien, str ngayCapThe, str tinhTrangThe)
    {
        this->loaiKhachHang = loaiKhachHang;
        this->theThanhVien = theThanhVien;
        this->ngayCapThe = ngayCapThe;
        this->tinhTrangThe = tinhTrangThe;
    }

    void setLoaiKhachHang(str loaiKhachHang)
    {
        this->loaiKhachHang = loaiKhachHang;
    }
    void setTheThanhVien(str theThanhVien)
    {
        this->theThanhVien = theThanhVien;
    }
    void setNgayCapThe(str ngayCapThe)
    {
        this->ngayCapThe = ngayCapThe;
    }
    void setTinhTrangThe(str tinhTrangThe)
    {
        this->tinhTrangThe = tinhTrangThe;
    }
    str getLoaiKhachHang()
    {
        return loaiKhachHang;
    }
    str getTheThanhVien()
    {
        return theThanhVien;
    }
    str getNgayCapThe()
    {
        return ngayCapThe;
    }
    str getTinhTrangThe()
    {
        return tinhTrangThe;
    }

    string generateRandomString(int length)
    {
        string randomString;
        const char charset[] =
            "0123456789";

        const int max_index = sizeof(charset) - 1;

        // Seed the random number generator
        srand(static_cast<unsigned int>(time(nullptr)));

        for (int i = 0; i < length; ++i)
        {
            randomString += charset[rand() % max_index];
        }

        return randomString;
    }

    void input() override
    {
        Person::input();
        ofstream kh("dskh.txt", ios::app);
        cout << " Loai khach hang (giao vien, hoc sinh, ...) : ";
        getline(cin, loaiKhachHang);
        cout << " The thanh vien (Dong, Bac, ...): ";
        getline(cin, theThanhVien);
        cout << " Ngay cap the: ";
        getline(cin, ngayCapThe);
        cout << " Tinh trang the (Dang su dung / The da bi khoa): ";
        getline(cin, tinhTrangThe);

        // ghi du lieu vao file
        string randomString = generateRandomString(12);
        kh << "Ten: " << getName() << endl;
        kh << "ID: " << randomString << endl;
        kh << "Tuoi: " << getTuoi() << endl;
        kh << "Gioi tinh: " << getGioiTinh() << endl;
        kh << "So dien thoai: " << getSoDienThoai() << endl;
        kh << "Dia chi: " << getDiaChi() << endl;
        kh << "Email: " << getEmail() << endl;
        kh << "Loai khach hang (giao vien, hoc sinh, ...): " << loaiKhachHang << endl;
        kh << "The thanh vien: " << theThanhVien << endl;
        kh << "Ngay cap the: " << ngayCapThe << endl;
        kh << "Tinh trang the: " << tinhTrangThe << endl;
        kh << "-----------------------------------------\n";
        kh.close();
    }

    void output() override
    {
        Person::output();
        cout << " Loai khach hang (giao vien, hoc sinh, ...): " << loaiKhachHang << endl;
        cout << " The thanh vien (Dong, Bac, ...): " << theThanhVien << endl;
        cout << " Ngay cap the: " << ngayCapThe << endl;
        cout << " Tinh trang the (Dang su dung / The da bi khoa): " << tinhTrangThe << endl;
    }
};

class SanPham
{
private:
    str tenSanPham, loaiSanPham, ngayNhapHang, moTaSanPham, donViTinh, soLuongNhap, soLuongTonKho;
    fl giaSanPham;

public:
    // hàm random
    string generateRandomString(int length)
    {
        string randomString;
        const char charset[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";

        const int max_index = sizeof(charset) - 1;

        // Seed the random number generator
        srand(static_cast<unsigned int>(time(nullptr)));

        for (int i = 0; i < length; ++i)
        {
            randomString += charset[rand() % max_index];
        }

        return randomString;
    }
    SanPham()
    {
        tenSanPham = loaiSanPham = ngayNhapHang = moTaSanPham = donViTinh = soLuongNhap = soLuongTonKho = "";
        giaSanPham = 0;
    }

    SanPham(str tenSanPham, str loaiSanPham, str ngayNhapHang, str moTaSanPham, str donViTinh, str soLuongNhap, ll giaSanPham, int soLuongTonKho)
    {
        this->tenSanPham = tenSanPham;
        this->loaiSanPham = loaiSanPham;
        this->ngayNhapHang = ngayNhapHang;
        this->moTaSanPham = moTaSanPham;
        this->donViTinh = donViTinh;
        this->soLuongNhap = soLuongNhap;
        this->giaSanPham = giaSanPham;
        this->soLuongTonKho = soLuongTonKho;
    }

    void setTenSanPham(str tenSanPham)
    {
        this->tenSanPham = tenSanPham;
    }
    void setLoaiSanPham(str loaiSanPham)
    {
        this->loaiSanPham = loaiSanPham;
    }
    void setNgayNhapHang(str ngayNhapHang)
    {
        this->ngayNhapHang = ngayNhapHang;
    }
    void setMoTaSanPham(str moTaSanPham)
    {
        this->moTaSanPham = moTaSanPham;
    }
    void setDonViTinh(str donViTinh)
    {
        this->donViTinh = donViTinh;
    }
    void setSoLuong(str soLuongNhap)
    {
        this->soLuongNhap = soLuongNhap;
    }
    void setGiaSanPham(ll giaSanPham)
    {
        this->giaSanPham = giaSanPham;
    }
    void setSoLuongTonKho(int soLuongTonKho)
    {
        this->soLuongTonKho = soLuongTonKho;
    }
    str getTenSanPham()
    {
        return tenSanPham;
    }
    str getLoaiSanPham()
    {
        return loaiSanPham;
    }
    str getNgayNhapHang()
    {
        return ngayNhapHang;
    }
    str getMoTaSanPham()
    {
        return moTaSanPham;
    }
    str getDonViTinh()
    {
        return donViTinh;
    }
    str getSoLuongNhap()
    {
        return soLuongNhap;
    }
    ll getGiaSanPham()
    {
        return giaSanPham;
    }
    str getSoLuongTonKho()
    {
        return soLuongTonKho;
    }

    void inputSP()
    {
        // mở file
        cin.ignore();
        ofstream fs("dssp.txt", ios::app);
        cout << "Ten san pham: ";
        getline(cin, tenSanPham);
        cout << "Loai san pham (Do uong, Do an nhe, Phu kien, ....): ";
        getline(cin, loaiSanPham);
        cout << "Don vi tinh (1kg, 1cai, 1g, ...): ";
        getline(cin, donViTinh);
        cout << "Gia san pham: ";
        cin >> giaSanPham;
        cin.ignore();
        cout << "So luong mat hang duoc nhap: ";
        getline(cin, soLuongNhap);
        cout << "Ngay nhap hang: ";
        getline(cin, ngayNhapHang);
        cout << "So luong con trong kho: ";
        cin >> soLuongTonKho;
        cout << "Mo ta san pham: ";
        cin.ignore();
        getline(cin, moTaSanPham);

        // Ghi dữ liệu vào file
        fs << "Ten san pham: " << tenSanPham << endl;
        string randomString = generateRandomString(6);
        fs << "Ma san pham: " << randomString << endl;
        fs << "Loai san pham (Do uong, Do an nhe, Phu kien, ....): " << loaiSanPham << endl;
        fs << "Don vi tinh (1kg, 1cai, 1g, ...): " << donViTinh << endl;
        fs << "Gia san pham: " << giaSanPham << endl;
        fs << "So luong mat hang duoc nhap: " << soLuongNhap << endl;
        fs << "Ngay nhap hang: " << ngayNhapHang << endl;
        fs << "So luong con trong kho: " << soLuongTonKho << endl;
        fs << "Mo ta san pham: " << moTaSanPham << endl;
        fs << "-----------------------------------------\n";
        fs.close(); // Đóng file
    }

    void outputSP()
    {
        string randomString = generateRandomString(6);
        cout << " Ma san pham: " << randomString << endl;
        cout << " Ten san pham: " << tenSanPham << endl;
        cout << " Loai san pham (Do uong, Do an nhe, Phu kien, ....): " << loaiSanPham << endl;
        cout << " Don vi tinh (1kg, 1cai, 1g, ...): " << donViTinh << endl;
        cout << " Gia san pham: " << giaSanPham << endl;
        cout << " So luong mat hang duoc nhap: " << soLuongNhap << endl;
        cout << " Ngay nhap hang: " << ngayNhapHang << endl;
        cout << " So luong mat hang con trong kho: " << soLuongTonKho << endl;
        cout << " Mo ta san pham: " << moTaSanPham << endl;
    }
};
class Bill
{
private:
    str maDonHang, tenSanPhamKhachMua, tenKhachHang, tenSanPham, ngayXuatDon, diaChiQuan, hotline;
    int soLuongSanPhamMua, soLuotMua;

public:
    // constructor
    Bill()
    {
        maDonHang = tenSanPhamKhachMua = tenKhachHang = tenSanPham = ngayXuatDon = diaChiQuan = hotline = "";
        soLuongSanPhamMua = soLuotMua = 0;
    }
    Bill(str maDonHang, str tenSanPhamKhachMua, str tenSanPham, str ngayXuatDon, str diaChiQuan, str hotline, int soLuongSanPhamMua, int soLuotMua, str tenKhachHang, db discout)
    {
        this->maDonHang = maDonHang;
        this->tenSanPhamKhachMua = tenSanPhamKhachMua;
        this->tenSanPham = tenSanPham;
        this->ngayXuatDon = ngayXuatDon;
        this->diaChiQuan = diaChiQuan;
        this->hotline = hotline;
        this->soLuongSanPhamMua = soLuongSanPhamMua;
        this->soLuotMua = soLuotMua;
        this->tenKhachHang = tenKhachHang;
    }
    // setter / getter
    void setTenKhachHang(str tenKhachHang)
    {
        this->tenKhachHang = tenKhachHang;
    }
    void setMaDonHang(str maDonHang)
    {
        this->maDonHang = maDonHang;
    }
    void setTenSanPhamKhachMua(str tenSanPhamKhachMua)
    {
        this->tenSanPhamKhachMua = tenSanPhamKhachMua;
    }
    void setNgayXuatDon(str ngayXuatDon)
    {
        this->ngayXuatDon = ngayXuatDon;
    }
    void setDiaChiQuan(str diaChiQuan)
    {
        this->diaChiQuan = diaChiQuan;
    }
    // void setHotline (str hotline)
    // {
    //     this -> hotline = hotline;
    // }

    void setSoLuongSanPhamMua(int soLuongSanPhamMua)
    {
        this->soLuongSanPhamMua = soLuongSanPhamMua;
    }

    void setSoLuotMua(int soLuotMua)
    {
        this->soLuotMua = soLuotMua;
    }

    str getMaDonHang()
    {
        return maDonHang;
    }

    str getTenSanPhamKhachMua()
    {
        return tenSanPhamKhachMua;
    }

    str getTenKhachHang()
    {
        return tenKhachHang;
    }

    str getNgayXuatDon()
    {
        return ngayXuatDon;
    }

    str getDiaChiQuan()
    {
        return diaChiQuan;
    }
    str getHotline()
    {
        return hotline;
    }

    int getSoLuongSanPhamMua()
    {
        return soLuongSanPhamMua;
    }

    int getSoLuotMua()
    {
        return soLuotMua;
    }
    int tongBill = 0;
    void inputBill(vector<SanPham *> &dssp)
    {
        ofstream b("dsb.txt", ios::app);
        cout << " Dia chi quan: ";
        getline(cin, diaChiQuan);
        cout << " Hotline: ";
        getline(cin, hotline);
        cout << " Nhap ten khach hang: ";
        getline(cin, tenKhachHang);
        cout << " Ma don hang: ";
        getline(cin, maDonHang);
        cout << " So luong san pham mua: ";
        cin >> soLuongSanPhamMua;
        cin.ignore();
        vector<string> tenSanPhamKhachMuaList(soLuongSanPhamMua);
        vector<int> soLuotMuaList(soLuongSanPhamMua);
        for (int i = 0; i < soLuongSanPhamMua; i++)
        {
            cout << " Ten san pham (" << i + 1 << "): ";
            getline(cin, tenSanPhamKhachMuaList[i]);
            cout << " So luot mua: ";
            cin >> soLuotMuaList[i];
            cin.ignore();
        }
        cout << " Ngay xuat don: ";
        getline(cin, ngayXuatDon);
        b << " Ten khach hang: " << tenKhachHang << endl;
        b << " Dia chi quan: " << diaChiQuan << endl;
        b << " Hotline: " << hotline << endl;
        for (char &tmp : maDonHang)
        {
            tmp = toupper(tmp);
        }
        b << " Ma don hang: " << maDonHang << endl;
        do
        {
            b << " So luong san pham mua: " << soLuongSanPhamMua << endl;
            if (soLuongSanPhamMua <= 0)
            {
                b << "Yeu cau khach phai mua it nhat 1 san pham moi co the xuat bill !!!\n";
            }
        } while (soLuongSanPhamMua <= 0);

        for (int i = 0; i < soLuongSanPhamMua; i++)
        {
            b << " Ten san pham (" << i + 1 << "): " << tenSanPhamKhachMuaList[i] << " x" << soLuotMuaList[i] << endl;
            for (int j = 0; j < dssp.size(); j++)
            {
                if (tenSanPhamKhachMuaList[i] == dssp[j]->getTenSanPham())
                {
                    tongBill += dssp[j]->getGiaSanPham() * soLuotMuaList[i];
                }
            }
        }
        b << " Ngay xuat hoa don: " << ngayXuatDon << endl;
        b << " Tong bill: " << tongBill << endl;
        b << "--------------------------------------------------" << endl;
    }

    void outputBill(vector<SanPham *> &dssp)
    {
        cout << " Dia chi quan: " << diaChiQuan << endl;
        cout << " Hotline: " << hotline << endl;
        for (char &tmp : maDonHang)
        {
            tmp = toupper(tmp);
        }
        cout << " Ten khach hang: " << tenKhachHang << endl;
        cout << " Ma don hang: " << maDonHang << endl;
        do
        {
            cout << " So luong san pham mua: " << soLuongSanPhamMua << endl;
            if (soLuongSanPhamMua <= 0)
            {
                cout << "Yeu cau khach phai mua it nhat 1 san pham moi co the xuat bill !!!\n";
            }
        } while (soLuongSanPhamMua <= 0);

        for (int i = 0; i < soLuongSanPhamMua; i++)
        {
            cout << " Ten san pham (" << i + 1 << "): " << tenSanPhamKhachMua << " x" << soLuotMua << endl;
            for (int j = 0; j < dssp.size(); j++)
            {
                if (tenSanPhamKhachMua == dssp[j]->getTenSanPham())
                {
                    tongBill += dssp[j]->getGiaSanPham() * soLuotMua;
                }
            }
        }
        cout << " Ngay xuat hoa don: " << ngayXuatDon << endl;
        cout << " Tong bill: " << tongBill << endl;
    }
};
// lớp chức năng
vector<KhachHang *> dskh;
vector<NhanVien *> dsnv;
vector<SanPham *> dssp;
vector<Bill *> dsb;
class listFunction
{
public:
    bool found = false;
    void nhapTTNhanVien()
    {
        NhanVien *nv = new NhanVien;
        nv->input();
        dsnv.push_back(nv);
        cout << " Da tao thong tin nhan vien thanh cong !!!" << endl;
    }
    void hienThiDSSP()
    {
        ifstream sp("dssp.txt");
        if (!sp.is_open())
        {
            cout << "Khong mo duoc file dssp.txt." << endl;
            return;
        }

        bool isEmpty = true;
        string line;
        while (getline(sp, line))
        {
            isEmpty = false; // Nếu có dòng nào trong tập tin, đánh dấu là tập tin không rỗng
            cout << line << endl;
        }

        sp.close();

        if (isEmpty)
        {
            cout << " Khong co thong tin san pham nao !!!" << endl;
        }
    }

    void nhapTTSanPham()
    {
        SanPham *sp = new SanPham;
        sp->inputSP();
        dssp.push_back(sp);
        cout << " Da tao thong tin san pham thanh cong !!!" << endl;
    }

    void timKiemTTSanPham()
    {
        if (dssp.empty())
        {
            cout << " Khong co san pham nao trong danh sach !!!\n";
        }
        else
        {
            str TenSPTim;
            cin.ignore();
            cout << " Nhap ten san pham ban muon tim: ";
            getline(cin, TenSPTim);
            for (auto sp : dssp)
            {
                if (TenSPTim == sp->getTenSanPham())
                {
                    sp->outputSP();
                    found = true;
                }
            }
            if (!found)
            {
                cout << " San pham: " << TenSPTim << " khong co trong danh sach\n";
            }
        }
    }

    void taoBill()
    {
        if (dskh.empty() || dssp.empty())
        {
            cout << " Danh sach khach hang trong nen khong the tao bill hoac khong co san pham nao nen khong the tao bill !!!" << endl;
        }
        else
        {
            string tenKhachHang;
            cin.ignore();
            cout << " Nhap ten khach hang: ";
            getline(cin, tenKhachHang);
            bool found = false;
            for (KhachHang *kh : dskh)
            {
                if (kh->getName() == tenKhachHang)
                {
                    found = true;
                    Bill *b = new Bill;
                    b->inputBill(dssp);
                    b->setTenKhachHang(tenKhachHang);
                    dsb.push_back(b);
                    cout << " Da tao bill cho khach hang co ten: " << tenKhachHang << endl;
                    found = true;
                }
            }
            if (!found)
            {
                cout << " Khong tim thay khach hang co ten: " << tenKhachHang << " trong danh sach khach hang!!!" << endl;
            }
        }
    }

    void huyBill()
    {
        if (dsb.empty())
        {
            cout << "Khong ton tai bill nao trong danh sach !!!\n";
            return;
        }
        cin.ignore();
        string tenKHHuyBill;
        cout << "Nhap ten khach hang ban muon huy bill: ";
        getline(cin, tenKHHuyBill);

        ifstream inFile("dsb.txt");
        if (!inFile.is_open())
        {
            cout << "Khong the mo file dsb.txt.\n";
            return;
        }

        vector<string> updatedData;
        string line;
        bool found = false;
        bool skipBlock = false;

        while (getline(inFile, line))
        {
            if (line.find("Ten khach hang: " + tenKHHuyBill) != string::npos)
            {
                found = true;
                skipBlock = true;
            }

            if (!skipBlock)
            {
                updatedData.push_back(line);
            }

            if (line == "--------------------------------------------------")
            {
                skipBlock = false;
            }
        }
        inFile.close();

        if (!found)
        {
            cout << "Khong co bill cua khach hang co ten " << tenKHHuyBill << " trong danh sach !!!\n";
            return;
        }

        ofstream outFile("dsb.txt");
        if (!outFile.is_open())
        {
            cout << "Khong the mo file dsb.txt de ghi lai du lieu.\n";
            return;
        }

        for (const string &data : updatedData)
        {
            outFile << data << endl;
        }
        outFile.close();

        cout << "Da huy bill cua " << tenKHHuyBill << " ra khoi danh sach Bills !!!\n";
    }

    void hienThiBacTheKH()
    {
        if (dskh.empty())
        {
            cout << " Khong co khach hang nao trong danh sach !!!" << endl;
        }
        else
        {
            str tenKH;
            cin.ignore();
            cout << " Nhap ten khach hang ban muon hien thi bac the: ";
            getline(cin, tenKH);
            for (auto kh : dskh)
            {
                if (tenKH == kh->getName())
                {
                    cout << " Bac the cua " << tenKH << " la: " << kh->getTheThanhVien() << endl;
                    found = true;
                }
            }
            if (!found)
            {
                cout << " Khach hang co ten " << tenKH << " khong co trong danh sach !!!" << endl;
            }
        }
    }

    void nhapTTKhachHang()
    {
        KhachHang *kh = new KhachHang;
        kh->input();
        dskh.push_back(kh);
        cout << " Da tao thong tin khach hang co ten " << kh->getName() << " thanh cong !!!" << endl;
    }

    void hienThiDSKH()
    {
        ifstream kh("dskh.txt");
        if (!kh.is_open())
        {
            cout << "Khong mo duoc file dskh.txt." << endl;
        }

        bool isEmpty = true;
        string line;
        while (getline(kh, line))
        {
            isEmpty = false; // Nếu có dòng nào trong tập tin, đánh dấu là tập tin không rỗng
            cout << line << endl;
        }

        kh.close();

        if (isEmpty)
        {
            cout << " Khong co thong tin khach hang nao !!!" << endl;
        }
    }

    void timKiemTTKhachHang()
    {
        if (dskh.empty())
        {
            cout << " Khong co khach hang nao trong danh sach !!!\n";
        }
        else
        {
            str tenKHTim;
            cin.ignore();
            cout << " Nhap ten khach hang ban muon tim trong danh sach: ";
            getline(cin, tenKHTim);
            for (auto kh : dskh)
            {
                if (tenKHTim == kh->getName())
                {
                    kh->output();
                    found = true;
                }
            }
            if (!found)
            {
                cout << " Khach hang co ten " << tenKHTim << " khong co trong danh sach !!!\n";
            }
        }
    }

    void hienThiDSNV()
    {
        ifstream nv("dsnv.txt");
        if (!nv.is_open())
        {
            cout << "Khong mo duoc file dsnv.txt." << endl;
            return;
        }
        else
        {
            bool isEmpty = true;
            string line;
            while (getline(nv, line))
            {
                isEmpty = false; // Nếu có dòng nào trong tập tin, đánh dấu là tập tin không rỗng
                cout << line << endl;
            }

            nv.close();

            if (isEmpty)
            {
                cout << " Khong co thong tin nhan vien nao !!!" << endl;
            }
        }
    }

    void timKiemTTNhanVien()
    {
        if (dsnv.empty())
        {
            cout << " Khong co thong tin nhan vien nao trong danh sach !!!\n";
        }
        else
        {
            str tenNVTim;
            cin.ignore();
            cout << " Nhap ten nhan vien ban muon tim: ";
            getline(cin, tenNVTim);
            for (auto nv : dsnv)
            {
                if (tenNVTim == nv->getName())
                {
                    nv->output();
                    found = true;
                }
            }
            if (!found)
            {
                cout << " Nhan vien co ten " << tenNVTim << " khong co trong danh sach !!!\n";
            }
        }
    }

    void hienThiLichLamViecNV()
    {
        if (dsnv.empty())
        {
            cout << " Khong co nhan vien nao trong danh sach de hien thi lich !!!\n";
        }
        else
        {
            str tenHienThiLich;
            cin.ignore();
            cout << " Nhap ten nhan vien ban muon coi lich: ";
            getline(cin, tenHienThiLich);

            for (auto nv : dsnv)
            {
                if (tenHienThiLich == nv->getName())
                {
                    cout << " Lich lam viec cua " << tenHienThiLich << ": " << nv->getLichLamViec() << endl;
                    found = true;
                }
            }
            if (!found)
            {
                cout << " Nhan vien co ten " << tenHienThiLich << " khong co trong danh sach !!!\n";
            }
        }
    }

    void suaLichLamViecNV()
    {
        if (dsnv.empty())
        {
            cout << " Khong co nhan vien nao trong danh sach de sua lich !!!\n";
        }
        else
        {
            str tenSuaLich, lichNew;
            cin.ignore();
            cout << " Nhap ten nhan  vien muon sua lich: ";
            getline(cin, tenSuaLich);
            cout << " Nhap lich moi: ";
            getline(cin, lichNew);
            for (auto nv : dsnv)
            {
                if (tenSuaLich == nv->getName())
                {
                    nv->setLichLamViec(lichNew);
                    cout << " Da sua lich cho nhan vien co ten " << tenSuaLich << endl;
                    found = true;
                }
            }
            if (!found)
            {
                cout << " Nhan vien co ten " << tenSuaLich << " khong co trong danh sach !!!\n";
            }
            else
            {
                ofstream outFile("dsnv.txt");
                if (outFile.is_open())
                {
                    for (const auto nv : dsnv)
                    {
                        string randomString = nv->generateRandomString(12);
                        outFile << "Ten: " << nv->getName() << endl;
                        outFile << "ID: " << randomString << endl;
                        outFile << "Tuoi: " << nv->getTuoi() << endl;
                        outFile << "Gioi tinh: " << nv->getGioiTinh() << endl;
                        outFile << "Chuc vu: " << nv->getChucVu() << endl;
                        outFile << "Lich lam viec: " << nv->getLichLamViec() << endl;
                        outFile << "Trinh do hoc van: " << nv->getTrinhDoHocVan() << endl;
                        outFile << "Ngay vao lam: " << nv->getNgayVaoLam() << endl;
                        outFile << "Trang thai lam viec (fulltime / part time): " << nv->getTrangThaiLamViec() << endl;
                        outFile << "Luong: " << nv->getLuong() << endl;
                        outFile << "So lan vi pham: " << nv->getSoLanViPham() << endl;
                        outFile << "So ca lam: " << nv->getSoCaLam() << endl;
                        outFile << "So lan nghi phep: " << nv->getSoLanNghiPhep() << endl;
                        outFile << "-----------------------------------------\n";
                        outFile.close();
                    }
                }
                else
                {
                    cout << "Khong the mo file dskh.txt de ghi lai du lieu.\n";
                }
            }
        }
    }

    void tangLuongNhanVien()
    {
        string tenNVUpLuong;
        cin.ignore();
        cout << "Nhap ten nhan vien ban muon tang luong: ";
        getline(cin, tenNVUpLuong);
        float luongTang;
        cout << " Nhap luong them: ";
        cin >> luongTang;
        cin.ignore(); // ignore the newline character after float input

        bool found = false;
        for (auto nv : dsnv)
        {
            if (tenNVUpLuong == nv->getName())
            {
                float luongBanDau = nv->getLuong();

                nv->setLuong(luongBanDau + luongTang);
                cout << "Da tang luong cua nhan vien co ten " << tenNVUpLuong
                     << " tu " << luongBanDau << " len " << nv->getLuong() << " !!!\n";

                found = true;
            }
        }

        if (!found)
        {
            cout << "Nhan vien co ten " << tenNVUpLuong << " khong co trong danh sach !!!\n";
        }
        else
        {
            // Ghi lại danh sách nhân viên vào file
            ofstream outFile("dsnv.txt");
            if (outFile.is_open())
            {
                for (const auto &nv : dsnv)
                {
                    string randomString = nv->generateRandomString(12);
                    outFile << "ID: " << randomString << endl;
                    outFile << "Ten: " << nv->getName() << endl;
                    outFile << "Tuoi: " << nv->getTuoi() << endl;
                    outFile << "Gioi tinh: " << nv->getGioiTinh() << endl;
                    outFile << "Chuc vu: " << nv->getChucVu() << endl;
                    outFile << "Lich lam viec: " << nv->getLichLamViec() << endl;
                    outFile << "Trinh do hoc van: " << nv->getTrinhDoHocVan() << endl;
                    outFile << "Ngay vao lam: " << nv->getNgayVaoLam() << endl;
                    outFile << "Trang thai lam viec (fulltime / part time): " << nv->getTrangThaiLamViec() << endl;
                    outFile << "Luong: " << nv->getLuong() << endl;
                    outFile << "So lan vi pham: " << nv->getSoLanViPham() << endl;
                    outFile << "So ca lam: " << nv->getSoCaLam() << endl;
                    outFile << "So lan nghi phep: " << nv->getSoLanNghiPhep() << endl;
                    outFile << "-----------------------------------------\n";
                }
                outFile.close();
            }
            else
            {
                cout << "Khong the mo file dsnv.txt de ghi lai du lieu.\n";
            }
        }
    }

    void giamLuongNhanVien()
    {
        string tenNVDownLuong;
        cin.ignore();
        cout << "Nhap ten nhan vien ban muon giam luong: ";
        getline(cin, tenNVDownLuong);
        float luongGiam;
        cout << "Nhap luong tru: ";
        cin >> luongGiam;
        cin.ignore(); // ignore the newline character after float input

        bool found = false;
        for (auto nv : dsnv)
        {
            if (tenNVDownLuong == nv->getName())
            {
                float luongBanDau = nv->getLuong();
                if (luongBanDau > 0)
                {
                    nv->setLuong(luongBanDau - luongGiam);
                    cout << "Da giam luong cua nhan vien co ten " << tenNVDownLuong
                         << " tu " << luongBanDau << " xuong " << nv->getLuong() << " !!!\n";
                }
                else
                {
                    cout << "Khong co luong de tru !!!\n";
                }
                found = true;
            }
        }

        if (!found)
        {
            cout << "Nhan vien co ten " << tenNVDownLuong << " khong co trong danh sach !!!\n";
        }
        else
        {
            // Ghi lại danh sách nhân viên vào file
            ofstream outFile("dsnv.txt");
            if (outFile.is_open())
            {
                for (const auto &nv : dsnv)
                {
                    string randomString = nv->generateRandomString(12);
                    outFile << "ID: " << randomString << endl;
                    outFile << "Ten: " << nv->getName() << endl;
                    outFile << "Tuoi: " << nv->getTuoi() << endl;
                    outFile << "Gioi tinh: " << nv->getGioiTinh() << endl;
                    outFile << "Chuc vu: " << nv->getChucVu() << endl;
                    outFile << "Lich lam viec: " << nv->getLichLamViec() << endl;
                    outFile << "Trinh do hoc van: " << nv->getTrinhDoHocVan() << endl;
                    outFile << "Ngay vao lam: " << nv->getNgayVaoLam() << endl;
                    outFile << "Trang thai lam viec (fulltime / part time): " << nv->getTrangThaiLamViec() << endl;
                    outFile << "Luong: " << nv->getLuong() << endl;
                    outFile << "So lan vi pham: " << nv->getSoLanViPham() << endl;
                    outFile << "So ca lam: " << nv->getSoCaLam() << endl;
                    outFile << "So lan nghi phep: " << nv->getSoLanNghiPhep() << endl;
                    outFile << "-----------------------------------------\n";
                }
                outFile.close();
            }
            else
            {
                cout << "Khong the mo file dsnv.txt de ghi lai du lieu.\n";
            }
        }
    }

    void tangGiaSanPham()
    {
        if (dssp.empty())
        {
            cout << " Khong co san pham nao trong danh sach de tang gia !!!\n";
        }
        else
        {
            string tenSPUPGia;
            cin.ignore();
            cout << " Nhap ten san pham ban muon tang gia: ";
            getline(cin, tenSPUPGia);
            float giaTang;
            cout << " Nhap gia tang: ";
            cin >> giaTang;

            bool found = false;
            for (auto sp : dssp)
            {
                if (tenSPUPGia == sp->getTenSanPham())
                {
                    float giaBanDau = sp->getGiaSanPham();
                    sp->setGiaSanPham(giaBanDau + giaTang);
                    cout << " Da tang gia cho " << tenSPUPGia << " tu " << giaBanDau << " len " << sp->getGiaSanPham() << " !!!\n";
                    found = true;
                }
            }
            if (!found)
            {
                cout << " San pham co ten: " << tenSPUPGia << " khong co trong danh sach !!!\n";
            }
            else
            {
                // Ghi lại danh sách sản phẩm vào file
                ofstream outFile("dssp.txt");
                if (outFile.is_open())
                {
                    for (const auto &sp : dssp)
                    {
                        outFile << "Ten san pham: " << sp->getTenSanPham() << endl;
                        string randomString = sp->generateRandomString(6);
                        outFile << "Ma san pham: " << randomString << endl;
                        outFile << "Loai san pham (Do uong, Do an nhe, Phu kien, ....): " << sp->getLoaiSanPham() << endl;
                        outFile << "Don vi tinh (1kg, 1cai, 1g, ...): " << sp->getDonViTinh() << endl;
                        outFile << "Gia san pham: " << sp->getGiaSanPham() << endl;
                        outFile << "So luong mat hang duoc nhap: " << sp->getSoLuongNhap() << endl;
                        outFile << "Ngay nhap hang: " << sp->getNgayNhapHang() << endl;
                        outFile << "So luong con trong kho: " << sp->getSoLuongTonKho() << endl;
                        outFile << "Mo ta san pham: " << sp->getMoTaSanPham() << endl;
                        outFile << "------------------------------------------\n";
                    }
                    outFile.close();
                }
                else
                {
                    cout << "Khong the mo file dssp.txt de ghi lai du lieu.\n";
                }
            }
        }
    }

    void giamGiaSanPham()
    {
        if (dssp.empty())
        {
            cout << " Khong co san pham nao trong danh sach de giam gia !!!\n";
        }
        else
        {
            str tenSPDownGia;
            cin.ignore();
            cout << " Nhap ten san pham ban muon giam gia: ";
            getline(cin, tenSPDownGia);
            fl giaGiam;
            cout << " Nhap gia giam: ";
            cin >> giaGiam;
            for (auto sp : dssp)
            {
                if (tenSPDownGia == sp->getTenSanPham())
                {
                    if (sp->getGiaSanPham() > 0)
                    {
                        fl giaBanDau = sp->getGiaSanPham();
                        sp->setGiaSanPham(sp->getGiaSanPham() - giaGiam);
                        cout << " Da giam gia cho san pham co ten " << tenSPDownGia << " tu " << giaBanDau << " xuong " << sp->getGiaSanPham() << endl;
                    }
                    else
                    {
                        cout << " Gia qua thap khong the giam !!!\n";
                    }
                    found = true;
                }
            }
            if (!found)
            {
                cout << " San pham co ten: " << tenSPDownGia << " khong co trong danh sach !!!\n";
            }
            else
            {
                // Ghi lại danh sách sản phẩm vào file
                ofstream outFile("dssp.txt");
                if (outFile.is_open())
                {
                    for (const auto &sp : dssp)
                    {
                        outFile << "Ten san pham: " << sp->getTenSanPham() << endl;
                        string randomString = sp->generateRandomString(6);
                        outFile << "Ma san pham: " << randomString << endl;
                        outFile << "Loai san pham (Do uong, Do an nhe, Phu kien, ....): " << sp->getLoaiSanPham() << endl;
                        outFile << "Don vi tinh (1kg, 1cai, 1g, ...): " << sp->getDonViTinh() << endl;
                        outFile << "Gia san pham: " << sp->getGiaSanPham() << endl;
                        outFile << "So luong mat hang duoc nhap: " << sp->getSoLuongNhap() << endl;
                        outFile << "Ngay nhap hang: " << sp->getNgayNhapHang() << endl;
                        outFile << "So luong con trong kho: " << sp->getSoLuongTonKho() << endl;
                        outFile << "Mo ta san pham: " << sp->getMoTaSanPham() << endl;
                        outFile << "------------------------------------------\n";
                    }
                    outFile.close();
                }
                else
                {
                    cout << "Khong the mo file dssp.txt de ghi lai du lieu.\n";
                }
            }
        }
    }

    void xoaNhanVien()
    {
        if (dsnv.empty())
        {
            cout << "Khong co nhan vien nao trong danh sach !!!\n";
            return;
        }

        cin.ignore();
        string tenNVXoa;
        cout << "Nhap ten nhan vien muon xoa: ";
        getline(cin, tenNVXoa);

        ifstream inFile("dsnv.txt");
        if (!inFile.is_open())
        {
            cout << "Khong the mo file dsnv.txt.\n";
            return;
        }

        vector<string> updatedData;
        string line;
        bool found = false;
        bool skipBlock = false;

        while (getline(inFile, line))
        {
            if (line.find("Ten: " + tenNVXoa) != string::npos)
            {
                found = true;
                skipBlock = true;
            }

            if (!skipBlock)
            {
                updatedData.push_back(line);
            }

            if (skipBlock && line == "-----------------------------------------")
            {
                skipBlock = false;
            }
        }
        inFile.close();

        if (!found)
        {
            cout << "Khong co nhan vien nao co ten " << tenNVXoa << " trong danh sach !!!\n";
            return;
        }

        ofstream outFile("dsnv.txt");
        if (!outFile.is_open())
        {
            cout << "Khong the mo file dsnv.txt de ghi lai du lieu.\n";
            return;
        }

        for (const string &data : updatedData)
        {
            outFile << data << endl;
        }
        outFile.close();

        cout << "Da xoa nhan vien co ten " << tenNVXoa << " ra khoi danh sach nhan vien!!!\n";
    }

    void xoaKhachHang()
    {
        // Kiểm tra danh sách khách hàng
        ifstream inFile("dskh.txt");
        if (!inFile.is_open())
        {
            cout << "Khong the mo file dskh.txt.\n";
            return;
        }

        // Nhập tên khách hàng cần xóa
        cin.ignore();
        string tenKHXoa;
        cout << "Nhap ten khach hang muon xoa: ";
        getline(cin, tenKHXoa);

        vector<string> updatedData;
        string line;
        bool found = false;
        bool skipBlock = false;

        // Đọc tệp và tìm khách hàng cần xóa
        while (getline(inFile, line))
        {
            if (line.find("Ten: " + tenKHXoa) != string::npos)
            {
                found = true;
                skipBlock = true;
            }

            if (!skipBlock)
            {
                updatedData.push_back(line);
            }

            if (line == "-----------------------------------------")
            {
                skipBlock = false;
            }
        }
        inFile.close();

        // Thông báo nếu không tìm thấy khách hàng
        if (!found)
        {
            cout << "Khong co khach hang nao co ten " << tenKHXoa << " trong danh sach !!!\n";
            return;
        }

        // Ghi lại nội dung đã cập nhật vào tệp
        ofstream outFile("dskh.txt");
        if (!outFile.is_open())
        {
            cout << "Khong the mo file dskh.txt de ghi lai du lieu.\n";
            return;
        }

        for (const string &data : updatedData)
        {
            outFile << data << endl;
        }
        outFile.close();

        cout << "Da xoa khach hang co ten " << tenKHXoa << " ra khoi danh sach khach hang!!!\n";
    }

    void thayDoiBacTheKH()
    {
        if (dskh.empty())
        {
            cout << " Khong co khach hang nao trong danh sach de thay doi cap bac the !!!" << endl;
        }
        else
        {
            str tenKHThayDoiBac, bacTheMoi;
            cin.ignore();
            cout << " Nhap ten khach hang ban muon thay doi bac the: ";
            getline(cin, tenKHThayDoiBac);
            cout << " Nhap bac the moi: ";
            getline(cin, bacTheMoi);
            for (auto kh : dskh)
            {
                if (tenKHThayDoiBac == kh->getTheThanhVien())
                {
                    kh->setTheThanhVien(bacTheMoi);
                    cout << " Da thay doi bac the thanh vien cho khach hang co ten " << tenKHThayDoiBac << " !!!" << endl;
                    found = true;
                }
            }
            if (!found)
            {
                cout << " Khach hang co ten " << tenKHThayDoiBac << " khong co trong danh dach !!!" << endl;
            }
            else
            {
                ofstream outFile("dskh.txt");
                if (outFile.is_open())
                {
                    for (const auto kh : dskh)
                    {
                        string randomString = kh->generateRandomString(12);
                        outFile << "Ten: " << kh->getName() << endl;
                        outFile << "ID: " << randomString << endl;
                        outFile << "Tuoi: " << kh->getTuoi() << endl;
                        outFile << "Gioi tinh: " << kh->getGioiTinh() << endl;
                        outFile << "So dien thoai: " << kh->getSoDienThoai() << endl;
                        outFile << "Dia chi: " << kh->getDiaChi() << endl;
                        outFile << "Email: " << kh->getEmail() << endl;
                        outFile << "Loai khach hang (giao vien, hoc sinh, ...): " << kh->getLoaiKhachHang() << endl;
                        outFile << "The thanh vien: " << kh->getTheThanhVien() << endl;
                        outFile << "Ngay cap the: " << kh->getNgayCapThe() << endl;
                        outFile << "Tinh trang the: " << kh->getTinhTrangThe() << endl;
                        outFile << "-----------------------------------------\n";
                        outFile.close();
                    }
                }
                else
                {
                    cout<<" Khong the mo file dskh.txt de ghi du lieu\n";
                }
            }
        }
    }
    void hienThiDSB()
    {
        ifstream b("dsb.txt");
        if (!b.is_open())
        {
            cout << "Khong mo duoc file dsb.txt." << endl;
        }

        bool isEmpty = true;
        string line;
        while (getline(b, line))
        {
            isEmpty = false; // Nếu có dòng nào trong tập tin, đánh dấu là tập tin bông rỗng
            cout << line << endl;
        }

        b.close();

        if (isEmpty)
        {
            cout << " Khong co thong tin bill nao !!!" << endl;
        }
    }
};

listFunction cn;

void menuNhanVien()
{
    int choice1;
    cout << "1. Nhap thong tin nhan vien" << endl;
    cout << "2. Nhap thong tin san pham" << endl;
    cout << "3. Hien thi danh sach san pham" << endl;
    cout << "4. Tim kiem thong tin san pham" << endl;
    cout << "5. Tao bill" << endl;
    cout << "6. Huy bill" << endl;
    cout << "7. Hien thi bac the cua khach hang" << endl;
    cout << "Nhap lua chon cua ban: ";
    cin >> choice1;
    system("cls");
    // choice1 == 1
    if (choice1 == 1) // Nhap thong tin nhan vien
    {
        cn.nhapTTNhanVien();
    }
    else if (choice1 == 2) // Nhap thong tin san pham
    {

        cn.nhapTTSanPham();
    }
    else if (choice1 == 3) // Hien thi danh sach san pham
    {
        cn.hienThiDSSP();
    }
    else if (choice1 == 4) // Tim kiem thong tin san pham
    {
        cn.timKiemTTSanPham();
    }
    else if (choice1 == 5) // Tao bill
    {
        cn.taoBill();
    }

    else if (choice1 == 6) // Huy bill
    {
        cn.huyBill();
    }
    else if (choice1 == 7) // Hien thi bac the cua khach hang
    {
        cn.hienThiBacTheKH();
    }
    else
    {
        cout << " Lua chon cua ban khong ton tai !!!\n";
    }
}

void menuKhachHang()
{
    int choice2;
    cout << "1. Nhap thong tin khach hang" << endl;
    cout << "2. Hien thi danh sach khach hang" << endl;
    cout << "3. Tim kiem thong tin khach hang" << endl;
    cin.ignore();
    cout << " Nhap lua chon cua ban: ";
    cin >> choice2;
    system("cls");
    if (choice2 == 1) // Nhap thong tin khach hang
    {
        cn.nhapTTKhachHang();
    }
    else if (choice2 == 2) // Hien thi danh sach khach hang
    {
        cn.hienThiDSKH();
    }
    else if (choice2 == 3) // Tim kiem thong tin khach hang
    {
        cn.timKiemTTKhachHang();
    }
    else
    {
        cout << " Lua chon cua ban khong ton tai  !!!\n";
    }
}

void menuQuanLy()
{
    int choice3;
    cout << "1/ Hien thi danh sach nhan vien" << endl;
    cout << "2/ Tim kiem thong tin nhan vien" << endl;
    cout << "3/ Hien thi danh sach khach hang" << endl;
    cout << "4/ Hien thi lich lam viec cua nhan vien" << endl;
    cout << "5/ Sua lich lam viec" << endl;
    cout << "6/ Tang luong nhan vien" << endl;
    cout << "7/ Giam luong nhan vien" << endl;
    cout << "8/ Tang gia san pham" << endl;
    cout << "9/ Giam gia san pham" << endl;
    cout << "10/ Xoa nhan vien" << endl;
    cout << "11/ Xoa khach hang" << endl;
    cout << "12/ Thay doi cap bac the cua khach hang" << endl;
    cout << "13/ Hien thi danh sach bill" << endl;
    cout << "Nhap lua chon cua ban: "
         << " ";
    cin >> choice3;
    system("cls");
    if (choice3 == 1) // Hien thi danh sach nhan vien
    {
        cn.hienThiDSNV();
    }
    else if (choice3 == 2) // Tim kiem thong tin nhan vien
    {
        cn.timKiemTTNhanVien();
    }
    else if (choice3 == 3) // Hien thi danh sach khach hang
    {
        cn.hienThiDSKH();
    }
    else if (choice3 == 4) // Hien thi lich lam viec cua nhan vien
    {
        cn.hienThiLichLamViecNV();
    }
    else if (choice3 == 5) // Sua lich lam viec
    {
        cn.suaLichLamViecNV();
    }
    else if (choice3 == 6) // Tang luong nhan vien
    {
        cn.tangLuongNhanVien();
    }
    else if (choice3 == 7) // Giam luong nhan vien
    {
        cn.giamLuongNhanVien();
    }
    else if (choice3 == 8) // tang gia san pham
    {
        cn.tangGiaSanPham();
    }
    else if (choice3 == 9) // giam gia san pham
    {
        cn.giamGiaSanPham();
    }
    else if (choice3 == 10) // xoa nhan vien
    {
        cn.xoaNhanVien();
    }
    else if (choice3 == 11) // Xoa khach hang
    {
        cn.xoaKhachHang();
    }
    else if (choice3 == 12) // Thay doi cap bac the cua khach hang
    {
        cn.thayDoiBacTheKH();
    }
    else if (choice3 == 13) // Hien thi danh sach bill
    {
        cn.hienThiDSB();
    }
    else
    {
        cout << " Lua chon cua ban khong ton tai !!!\n";
    }
}

int main()
{
    int choice;
    do
    {
        cout << "1. Nhan vien" << endl;
        cout << "2. Khach hang" << endl;
        cout << "3. Quan ly" << endl;
        cout << "0. Exit" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;
        system("cls");
        char lua_chon, lua_chon1, lua_chon2;
        // lua chon 1
        if (choice == 1)
        {
            str password = "nhanvien";
            cin.ignore();
            str nhappass;
            cout << "Nhap pass danh cho nhan vien: ";
            getline(cin, nhappass);
            if (nhappass == password)
            {
                do
                {
                    menuNhanVien();
                    cout << " Ban co muon tiep tuc khong?? (Y/N)"
                         << " ";
                    cin >> lua_chon;
                } while (lua_chon != 'n' && lua_chon != 'N');
            }
            else
            {
                system("cls");
                cout << " SAI MAT KHAU !!!" << endl;
            }
        }
        // lua chon 2
        else if (choice == 2)
        {
            do
            {
                menuKhachHang();
                cout << " Ban co muon tiep tuc khong?? (Y/N)"
                     << " ";
                cin >> lua_chon1;
            } while (lua_chon1 != 'n' && lua_chon1 != 'N');
        }
        // lua chon 3
        else if (choice == 3)
        {
            str pass = "quanly";
            cin.ignore();
            str nhap_pass;
            cout << " Ban co phai quan ly hay khong?" << endl;
            cout << " Neu la quan ly. Vui long nhap pass: ";
            getline(cin, nhap_pass);
            if (nhap_pass == pass)
            {
                do
                {
                    menuQuanLy();
                    cout << " Ban co muon tiep tuc khong (Y/N): "
                         << " ";
                    cin >> lua_chon2;
                } while (lua_chon2 != 'n' && lua_chon2 != 'N');
            }
            else
            {
                system("cls");
                cout << " SAI MAT KHAU !!!" << endl;
            }
        }
        else if (choice == 0)
        {
            cout << " HEN GAP LAI !!!\n";
        }
    } while (choice != 0);

    return 0;
}
