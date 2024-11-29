#pragma once
#include "sach.h"

class SachGiaoKhoa : public Sach{
private:
    int tinhtrang;
public: 
    void Nhap();
    void Xuat();
    int thanhtien();
};