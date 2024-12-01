#include "sach.h"
#include <stdio.h>
#include <string.h>
using namespace std;

Sach::Sach()
{
    idSach = "";
    tensach = "";
    NXB = "";
    soluong = 0;
    dongia = 0;
}
Sach::Sach(string idSach, string tensach, string NXB, int soluong, int dongia)
{
    this->idSach = idSach;
    this->tensach = tensach;
    this->NXB = NXB;
    this->soluong = soluong;
    this->dongia = dongia;
}

void Sach::Nhap()
{
    cout << "Nhap id sach: ";
    cin.ignore();
    getline(cin, idSach);
    cout << "Nhap ten sach: ";
    getline(cin, tensach);
    cout << "Nhap NXB: ";
    getline(cin, NXB);
    cout << "Nhap so luong: ";
    cin >> soluong;
    cout << "Nhap don gia: ";
    cin >> dongia;
}

void Sach::Xuat()
{
    cout<<"\n";
    cout << "ID sach: " << idSach << endl;
    cout <<  "Ten sach: " << tensach << endl;
    cout << "NXB: " << NXB << endl;
    cout << "So luong: " << soluong << endl;
    cout << "Don gia: " << dongia << endl;
}

string Sach::GetNXB()
{
    return NXB;
}

int Sach::GetLoai()
{
    return loai;
}