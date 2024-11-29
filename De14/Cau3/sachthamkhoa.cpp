#include "sach.h"
#include "sachthamkhao.h"
using namespace std;


void SachThamKhao::Nhap()
{
    Sach::Nhap();
    cout << "Nhap thue: ";
    cin >> thue;
}

void SachThamKhao::Xuat()
{
    Sach::Xuat();
    cout<<"Thue: "<<thue<<endl;
    cout<<"Thanh tien: "<<thanhtien()<<endl;
    cout<<"\n";
}