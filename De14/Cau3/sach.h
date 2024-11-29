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
    void Nhap();
    void Xuat();
    virtual int thanhtien() = 0;
};