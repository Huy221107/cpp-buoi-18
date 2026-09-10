#include <iostream>
#include <string>
using namespace std;
int main()
{
    string hoten;
    string tenDaXoaKhoangTrang = " ";
    cout << "Nhap ho va ten:";
    getline(cin, hoten);
    bool truocDoLaKhoangCach = false;
    for (size_t i = 0; i < hoten.length(); i++)
    {
        char kyTu = hoten[i];
        if (isspace(kyTu))
        {
            if (!truocDoLaKhoangCach)
            {
                tenDaXoaKhoangTrang += ' ';
            }
            truocDoLaKhoangCach = true;
        }
        else
        {
            tenDaXoaKhoangTrang += kyTu;
            truocDoLaKhoangCach = false;
        }
    }
    string tenChuan = tenDaXoaKhoangTrang;
    bool laDautu = true;
    for (size_t i = 0; i < tenChuan.length(); i++)
    {
        if (tenChuan[i] == ' ')
        {
            laDautu = true;
        }
        else if (laDautu)
        {
            tenChuan[i] = toupper(tenChuan[i]);
            laDautu = false;
        }
        else
        {
            tenChuan[i] = tolower(tenChuan[i]);
        }
    }
    cout << "Ten goc: " << hoten << endl;
    cout << "Sau Khi xoa khoang trang: " << tenDaXoaKhoangTrang << endl;
    cout << "Ten chuan hoa: " << tenChuan << endl;
    return 0;
}