#include "ThuVien.h"
#include "Sach.h"
#include "SachGiaoKhoa.h"
#include "SachThamKhao.h"
#include <iostream>
#include <algorithm>
using namespace std;

ThuVien::ThuVien()
{
    n = 0;
    sach = new Sach* [n];
}

ThuVien::~ThuVien()
{
    for (int i = 0; i < n; i++)
    {
        delete sach[i];
    }
    delete[] sach;
}

void ThuVien::Nhap()
{
    cout<<"Nhap so luong sach : ";
    cin>>n;
    sach = new Sach* [n];
    for(int i = 0; i < n; i ++)
    {
        cout<<"Nhap loai sach (1: sach giao khoa, 2: sach tham khao): ";
        int loai;
        cin>>loai;
        if(loai == 1)
        {
            sach[i] = new SachGiaoKhoa();
            sach[i]->Nhap();
        }
        else
        {
            sach[i] = new SachThamKhao();
            sach[i]->Nhap();
        }
    }
    sort(sach, sach + n, [](Sach* a, Sach* b){
        return a->Thanhtien() < b->Thanhtien();
    });
}
void ThuVien::Xuat()
{
    puts("Danh sach cac sach co trong thu vien:");
    for (int i = 0; i < n; i++)
    {
        sach[i]->Xuat();
    }
}

void ThuVien::DSachItTienNhat()
{
    int thanhTienmin = sach[0]->Thanhtien();
    printf("Danh sach sach co gia thanh tien it nhat la: \n");
    for (int i=0; i<n; i++)
    {
        if (sach[i]->Thanhtien() == thanhTienmin)
            sach[i]->Xuat();
    }
}

void ThuVien::TimKiemSGK(string name)
{
    bool flags = 0;
    for (int i = 0; i < n; i++)
    {
        if(sach[i]->GetNXB() == name && sach[i]->GetLoai() == 1)
        {
            flags = 1;
            sach[i]->Xuat();
        }
    }
    if (!flags)
    {
        cout << "Khong tim thay sach giao khoa co NXB la " << name << endl;
    }
}

void ThuVien::TongTien()
{
    int sumSGK = 0;
    int sumSTK = 0;
    for (int i=0; i < n; i++)
    {
        if(sach[i]->GetLoai() == 1)
            sumSGK += sach[i]->Thanhtien();
        else 
            sumSTK += sach[i]->Thanhtien();
    }
    cout << "Tong tien sach giao khoa: " << sumSGK << endl;
    cout << "Tong tien sach tham khao: " << sumSTK << endl;
}
