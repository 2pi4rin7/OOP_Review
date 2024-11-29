#pragma once
#include "sach.h"

class SachThamKhao : public Sach{
private:
    int thue;
public:
    SachThamKhao();
    SachThamKhao(string idSach, string tensach, string NXB, int soluong, int dongia, bool thue);
    void Nhap();
    void Xuat();
    int Thanhtien();
};