#include <iostream>
#include <string>
using namespace std;
int main()
{
    string hoten;
    int tuoi;
    cout << "Moi nhao tuoi cua ban: ";
    cin >> tuoi;
    cout << "Nhap ho va ten: ";
    cin.ignore();
    getline(cin, hoten);
    cout<<"\nThong tin da nhap: "<<endl;
    cout<<"Ho va ten: "<<hoten<<endl;
    cout<<"Tuoi: "<<tuoi<<endl;
    return 0;
}