#include <iostream>
using namespace std;
class SinhVien
{
private:
    string ten;
    int tuoi;
    double diemTB;

public:
    SinhVien(string tenBanDau, int tuoiBanDau, double diemBanDau)
    {
        ten = tenBanDau;
        tuoi = tuoiBanDau;
        diemTB = diemBanDau;
    }
    void inThongTin()
    {
        cout << "Sinh vien: " << ten << ", Tuoi: " << tuoi << ", Diem TB: " << diemTB << endl;
    }
};
int main()
{
    SinhVien sv("Nguyen Chi Huy", 19, 9.5);
    sv.inThongTin();
    return 0;
}
