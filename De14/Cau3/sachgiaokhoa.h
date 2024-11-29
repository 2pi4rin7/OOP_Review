#pragma once
#include "sach.h"

class SachGiaoKhoa : public Sach{
private:
    bool tinhtrang;
public: 
    SachGiaoKhoa();
    SachGiaoKhoa(string idSach, string tensach, string NXB, int soluong, int dongia, bool tinhtrang);
    void Nhap();
    void Xuat();
    int Thanhtien();
};