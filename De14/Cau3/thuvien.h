#pragma once
#include "sach.h"
class ThuVien{
private:
    Sach** sach;
    int n;

public:
    ThuVien();
    ~ThuVien();
    void Nhap();
    void Xuat();
    void DSachItTienNhat();
    void TimKiem(string name);
    int TongTien();
};