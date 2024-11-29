#include "thuvien.h"
#include "sach.h"
#include "sachgiaokhoa.h"
#include "sachthamkhao.h"
#include <iostream>
#include <algorithm>
using namespace std;

ThuVien::ThuVien()
{
    n = 0;
    sach = new Sach*[n];
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
    sach = new Sach*[n];
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
    printf("Danh sach %d cuon sach co gia thap nhat la: \n", min(n, 10));
    for (int i=0; i<min(n, 10); i++)
    {
        sach[i]->Xuat();
    }
}

void ThuVien::TimKiem(string name)
{
    bool flags = 0;
    for (int i = 0; i < n; i++)
    {
        if(sach[i]->GetNXB() == name)
        {
            flags = 1;
            sach[i]->Xuat();
        }
    }
    if (!flags)
    {
        cout << "Khong tim thay sach co NXB la " << name << endl;
    }
}

int ThuVien::TongTien()
{
    int sum = 0;
    for (int i=0; i < n; i++)
    {
        sum += sach[i]->Thanhtien();
    }
    return sum;
}