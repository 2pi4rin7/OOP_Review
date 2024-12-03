#include "Sach.h"
#include "SachGiaoKhoa.h"
#include "SachThamKhao.h"
#include "ThuVien.h"
int main()
{
    ThuVien tv;
    tv.Nhap();
    tv.Xuat();
    tv.TongTien();
    tv.DSachItTienNhat();
    bool flag = false;
    puts("Ban co muon tim sach giao khoa cua NXB nao khong ? (1: co, 0: khong)");
    cin >> flag;
    while(flag)
    {
        string NXB;
        cout << "Nhap NXB: ";
        cin.ignore();
        getline(cin, NXB);
        tv.TimKiemSGK(NXB);
        puts("Ban co muon tim sach giao khoa cua NXB nao khong ? (1: co, 0: khong)");
        cin>>flag;
    }
    return 0;
}