#include "Label.h"
#include <iostream>
using namespace std;

void Label::Nhap() {
    cout << "Nhap toa do (x, y): ";
    cin >> hoanhDo >> tungDo;
    cout << "Nhap kich thuoc (chieu dai, chieu rong): ";
    cin >> chieuDai >> chieuRong;
    while(chieuDai <= 0 || chieuRong <= 0) {
        cout << "Kich thuoc khong hop le. Nhap lai: ";
        cin >> chieuDai >> chieuRong;
    }

    cout << "Nhap text: ";
    cin.ignore();
    getline(cin, text);
    cout << "Nhap mau chu: \n";
    cText.SetMau();
    cout << "Nhap mau nen: \n";
    cBackground.SetMau();
}

void Label::Xuat() {
    cout << "Loai: Label\n";
    cout << "Toa do: (" << hoanhDo << ", " << tungDo << ")\n";
    cout << "Kich thuoc: " << chieuDai << " x " << chieuRong << endl;
    cout << "Text: " << text << endl;
    cout << "Mau chu: ";
    cText.XuatMau();
    cout << "Mau nen: ";
    cBackground.XuatMau();
}

void Label::KtrMauNenVaMauChu() {
    if (cText.KtrPhoiMauBoTucTrucTiep(cBackground)) {
        cout << "Mau chu va mau nen phoi mau bo tuc truc tiep.\n";
    } else {
        cout << "Mau chu va mau nen khong phoi mau bo tuc truc tiep.\n";
    }
}