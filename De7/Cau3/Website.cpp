#include "Website.h"
#include <iostream>
#include "Label.h"
#include "Button.h"
#include <bits/stdc++.h>
using namespace std;

Website::~Website() {
    for (int i = 0; i < soElement; i++) {
        delete elements[i];
    }
    delete[] elements;
}

void Website::Nhap() {
    cout << "Nhap so luong element: ";
    cin >> soElement;
    elements = new Element*[soElement];
    for (int i = 0; i < soElement; i++) {
        cout << "Nhap element thu " << i + 1 << endl;
        cout << "1. Label\n2. Button\n";
        int choice;
        cin >> choice;
        switch (choice) {
        case 1:
            elements[i] = new Label();
            break;
        case 2:
            elements[i] = new Button();
            break;
        default:
            cout << "Khong hop le. Nhap lai: \n";
            i--;
            break;
        }
        elements[i]->Nhap();
    }
}

void Website::Xuat() {
    for (int i = 0; i < soElement; i++) {
        cout << "Element thu " << i + 1 << endl;
        elements[i]->Xuat();
        cout << endl;
    }
}

void Website::KtrPhoiMauThanhPhanDau() {
    cout << "Thanh phan dau: ";
    elements[0]->KtrMauNenVaMauChu();
}

bool PhoiMauDonSac(Element** e1, int soElement) {
    for (int i = 0; i < soElement; i++){
        if (e1[i]->LayMauBackground() != e1[0]->LayMauBackground()) {
            return false;
        }
    }
    return true;
}

bool PhoiMauBoTuc(Element** e1, int soElement){
    int cnt = 0;
    for (int i = 0; i < soElement; i++)
    {
        for (int j = 0; j < soElement; j++)
        {
            int mau1 = e1[i]->LayMauBackground();
            int mau2 = e1[j]->LayMauBackground();
            if((mau1 - mau2 + 12)%6 == 0)
            {
                cnt ++;
                break;
            }
        }
    }
    if (cnt == soElement)
    {
        return true;
    }
    return false;
}

bool PhoiMauTuongDong(Element** e1, int soElement)
{
    sort(e1, e1 + soElement, [](Element* a, Element* b) {
        return a->LayMauBackground() < b->LayMauBackground();
    });
    for (int i = 0; i < soElement; i++)
    {
        if (e1[i]->LayMauBackground() != e1[(i+1)%soElement]->LayMauBackground() + 1 || e1[i]->LayMauBackground() != e1[(i+1)%soElement]->LayMauBackground())
        {
            return false;
        }
    }
    return true;
}

void Website::KtrMauNenThanhPhan()
{
    bool check1 = PhoiMauDonSac(elements, soElement);
    bool check2 = PhoiMauBoTuc(elements, soElement);
    bool check3 = PhoiMauTuongDong(elements, soElement);
    if(check1)
    {
        cout << "Cac thanh phan co mau nen don sac.\n";
    }
    else if(check2)
    {
        cout << "Cac thanh phan co mau nen phoi mau bo tuc.\n";
    }
    else if(check3)
    {
        cout << "Cac thanh phan co mau nen tuong dong.\n";
    }
    else
    {
        cout << "Cac thanh phan khong phoi theo bat ky quy tac nao.\n";
    }
}