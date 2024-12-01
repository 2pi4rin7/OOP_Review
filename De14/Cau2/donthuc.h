#include <iostream>
#include <cmath>
using namespace std;

class DonThuc{
private:
    float a, x;
    int b;
public:
    DonThuc(int A = 0, int X = 0, int B = 0)
    {
        a = A;
        x = X;
        b = B;
    }
    void Nhap()
    {
        cout << "Nhap he so a: ";
        cin>>a;
        cout << "Nhap so mu b: ";
        cin>>b;
    }
    void Xuat()
    {
        cout << a << "x^" << b;
    }
    long long giatri(int x)
    {
        return a*pow(x, b);
    }
    DonThuc operator+(DonThuc dta)
    {
        if(dta.b != b)
        {
            cerr<<"Khong the cong 2 don thuc khac bac"<<endl;
            exit(1);
        }
        DonThuc dt;
        dt.a = a + dta.a;
        dt.b = b;
        return dt;
    }
};