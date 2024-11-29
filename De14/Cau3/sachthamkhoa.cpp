#include "sach.h"
#include "sachthamkhao.h"
using namespace std;

SachThamKhao::SachThamKhao():Sach()
{
    thue = 0;
}

SachThamKhao::SachThamKhao(string idSach, string tensach, string NXB , int soluong , int dongia , bool thue) :
    Sach(idSach, tensach, NXB, soluong, dongia)
{
    this->thue = thue;
}

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
    cout<<"Thanh tien: "<<Thanhtien()<<endl;
    cout<<"\n";
}

int SachThamKhao::Thanhtien()
{
   return soluong * dongia + thue;
}