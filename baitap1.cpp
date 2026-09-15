#include <iostream>
using namespace std;
class HinhChuNhat
{
private:
    float chieuDai, chieuRong;

public:
    HinhChuNhat(float dai, float rong)
    {
        chieuDai = dai;
        chieuRong = rong;
    }
    void setChieuDai(float dainew)
    {
        if (dainew >= 0)
        {
            chieuDai = dainew;
        }
        else
        {
            cout << "Loi. Chieu dai khong am";
        }
    }
    void setChieuRong(float rongnew)
    {
        if (rongnew >= 0)
        {
            chieuRong = rongnew;
        }
        else
        {
            cout << "Loi. Chieu rong khong am";
        }
    }
    float tinhDienTich()
    {
        return chieuDai * chieuRong;
    }
    float tinhChuVi()
    {
        return 2 * (chieuDai + chieuRong);
    }
    void xuat()
    {
        cout << "Chieu dai: " << chieuDai << endl;
        cout << "Chieu rong: " << chieuRong << endl;
    }
};
int main()
{
    HinhChuNhat hcn1(2, 3);
    hcn1.xuat();
    cout << "Dien tich :" << hcn1.tinhDienTich() << endl;
    cout << "Chu Vi: " << hcn1.tinhChuVi() << endl;
    HinhChuNhat hcn2(3, 4);
    hcn2.xuat();
    cout << "Dien tich :" << hcn2.tinhDienTich() << endl;
    cout << "Chu Vi: " << hcn2.tinhChuVi() << endl;
    return 0;
}
