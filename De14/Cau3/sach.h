#pragma once
#include <iostream>
using namespace std;
class Sach{
protected:
    string idSach, tensach, NXB;
    int soluong;
    int dongia;
public:
    Sach();
    Sach(string idSach, string tensach, string NXB, int soluong, int dongia);
    virtual void Nhap();
    virtual void Xuat();
    virtual int Thanhtien() = 0;
    string GetNXB();
};