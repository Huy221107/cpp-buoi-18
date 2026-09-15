#include <iostream>
using namespace std;
class SinhVien
{
public:
    string ten;
    int tuoi;
    double diemTB;
    SinhVien(string tenBanDau, int tuoiBanDau, float diemBandau)
    {
        tuoi = tuoiBanDau;
        ten = tenBanDau;
        diemTB = diemBandau;
    }
    void inThongTin()
    {
        cout << "Sinh vien: " << ten << ", Tuoi: " << tuoi << ", Diem TB: " << diemTB << endl;
    }
};
int main()
{
    SinhVien sv1("Nguyen Chi Huy", 19, 9.5);
    SinhVien sv2("Nguyen Chi Bao", 20, 6.5);
    sv1.inThongTin();
    sv2.inThongTin();
    return 0;
}
