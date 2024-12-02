#include "Sach.h"
#include "SachGiaoKhoa.h"
using namespace std;

SachGiaoKhoa::SachGiaoKhoa() : Sach()
{
    loai = 1;
    tinhtrang = false;
}
SachGiaoKhoa::SachGiaoKhoa(string idSach, string tensach, string NXB, int soluong, int dongia, bool tinhtrang) :
    Sach(idSach, tensach, NXB, soluong, dongia)
{
    loai = 1;
    this->tinhtrang = tinhtrang;
}
void SachGiaoKhoa::Nhap()
{
    Sach::Nhap();
    cout << "Nhap tinh trang sach (0: cu, 1: moi): ";
    cin >> tinhtrang;
}

void SachGiaoKhoa::Xuat()
{
    Sach::Xuat();
    cout << "Tinh trang sach: " << (tinhtrang ? "moi" : "cu") << endl;
    cout << "Thanh tien: " << Thanhtien() << endl;
}

int SachGiaoKhoa::Thanhtien()
{
    return soluong * dongia * (tinhtrang ? 1 : 0.5);
}
