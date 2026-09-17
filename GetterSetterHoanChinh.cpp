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
    string getTen() { return ten; }
    int getTuoi() { return tuoi; }
    double getDiemTB() { return diemTB; }
    void setDiemTB(double diemMoi)
    {
        if (diemMoi >= 0 && diemMoi <= 10)
        {
            diemTB = diemMoi;
        }
        else
        {
            cout << "loi: diem khong hop le" << endl;
            diemTB = 0;
        }
    }
    void inThongTin()
    {
        cout << "Sinh vien: " << ten << ", Tuoi: " << tuoi << ", Diem TB: " << diemTB << endl;
    }
};
int main()
{
    SinhVien sv("Nguyen Chi Huy", 19, 8.5);
    sv.inThongTin();
    sv.setDiemTB(9.5);
    cout << "sau khi cap nhap diem:" << sv.getDiemTB() << endl;
    sv.setDiemTB(15);
    cout << "sau khi cap nhap diem khong hop le:" << sv.getDiemTB() << endl;

    return 0;
}
