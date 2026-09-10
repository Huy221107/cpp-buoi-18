#include <iostream>
#include <string>
using namespace std;
int main()
{
    int demChu = 0, demSo = 0, demKhoangTrang = 0;
    string chuoi;
    cout << "Nhap mot chuoi:";
    getline(cin, chuoi);
    for (size_t i = 0; i < chuoi.length(); i++)
    {
        char KyTu = chuoi[i];
        if (isalpha(KyTu))
        {
            demChu++;
        }
        else if (isdigit(KyTu))
        {
            demSo++;
        }
        else if (isspace(KyTu))
        {
            demKhoangTrang++;
        }
    }
    cout << "So ky tu chu cai: " << demChu << endl;
    cout << "So ky tu so: " << demSo << endl;
    cout << "So ky tu khoang trang: " << demKhoangTrang << endl;
    return 0;
}