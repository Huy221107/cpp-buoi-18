#include <iostream>
using namespace std;
class TaiKhoanNganHang
{
private:
    long long soTaiKhoan;
    double soDu;
    string chuTaikhoan;

public:
    TaiKhoanNganHang()
    {
        soTaiKhoan = 106250073;
        soDu = 10000;
        chuTaikhoan = "Nguyen Chi Huy";
    }
    double napTien(double soTien)
    {
        cout << "so tien nap vao: ";
        cin >> soTien;
        if (soTien >= 0)
        {
            return soDu += soTien;
        }
        else
        {
            cout << "Loi.So tien nap vao phai duong"<< endl;
        }
    }
    double rutTien(double soTien)
    {
        cout << "so tien can rut: ";
        cin >> soTien;
        if (soTien <= soDu)
        {
            return soDu = soDu - soTien;
        }
        else
        {
            cout << "Loi.So du khong du"<< endl;
        }
    }
    double getSoDu(double du)
    {
        return soDu = du;
    }
    void xuat()
    {
        cout << "So tai khoan: " << soTaiKhoan << endl;
        cout << "Chu tai khoan: " << chuTaikhoan << endl;
        cout << "So du hien tai: " << soDu << endl;
    }
    void soDuHienTai()
    {
        cout << "So du hien tai: " << soDu << endl;
    }
};
int main()
{
    TaiKhoanNganHang tk1;
    tk1.xuat();
    tk1.napTien(1000);
    tk1.soDuHienTai();
    tk1.rutTien(500);
    tk1.soDuHienTai();

    return 0;
}