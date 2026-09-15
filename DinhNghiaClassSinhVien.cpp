#include<iostream>
using namespace std;
class SinhVien {
public:
string ten;
int tuoi;
double diemTB;
void inThongTin(){
    cout<<"Sinh vien: "<<ten<<", Tuoi: "<<tuoi<<", Diem TB: "<<diemTB<<endl;
}
string xeploai(){
    if(diemTB>=8.0)return "Gioi";
    else if(diemTB>=6.5)return "Kha";
    else if(diemTB>=5.0)return "Trung Binh";
    else return "Yeu";
}
};
int main() {
    SinhVien sv1;
    sv1.ten ="Nguyen Chi Huy";
    sv1.tuoi=19;
    sv1.diemTB=9.5;
    sv1.inThongTin();
    cout<<"Xep loai: "<<sv1.xeploai()<<endl;
    SinhVien sv2;
    sv2.ten ="Nguyen Chi Bao";
    sv2.tuoi=20;
    sv2.diemTB=6.5;
    sv2.inThongTin();
    cout<<"Xep loai: "<<sv2.xeploai()<<endl;
    return 0;
}