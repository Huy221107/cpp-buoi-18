#include <iostream>
using namespace std;
class ConNguoi
{
protected:
    string ten;
    int tuoi;

public:
    ConNguoi(string tenBanDau, int tuoiBanDau)
    {
        ten = tenBanDau;
        tuoi = tuoiBanDau;
    }
    void gioiThieu()
    {
        cout << "Ten la " << ten << "," << tuoi << " tuoi" << endl;
    }
};
class NhanVien : public ConNguoi
{
public:
    double luong;
    NhanVien(string tenBanDau, int tuoiBanDau, double luongBanDau) : ConNguoi(tenBanDau, tuoiBanDau)
    {
        luong = luongBanDau;
    }
    void lamViec()
    {
        cout << ten << " dang lam viec, luong thang: " << luong << endl;
    }
};
class HocSinh : public ConNguoi
{
public:
    string truong;
    HocSinh(string tenBanDau, int tuoiBanDau, string truongBanDau) : ConNguoi(tenBanDau, tuoiBanDau)
    {
        truong = truongBanDau;
    }
    void hoc()
    {
        cout << ten << " dang hoc tap tai truong: " << truong << endl;
    }
};
int main()
{
    NhanVien nv("Nguyen Chi Huy", 19, 100000);
    nv.gioiThieu();
    nv.lamViec();
    cout << endl;
    HocSinh hs("Nguyen Chi Huy", 19, "DH Bach Khoa");
    hs.gioiThieu();
    hs.hoc();
    return 0;
}