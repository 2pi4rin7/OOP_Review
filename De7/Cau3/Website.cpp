#include "Website.h"
#include <iostream>
#include "Label.h"
#include "Button.h"
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