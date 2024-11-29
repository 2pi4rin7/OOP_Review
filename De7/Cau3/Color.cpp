#include<iostream>
#include "Color.h"
using namespace std;

bool invalidColor(int r, int g, int b) {
    return r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255;
}

void Color::SetMau() {
    cout << "Nhap mau RGB (red, green, blue): ";
    int r, g, b;
    cin >> r >> g >> b;
    while (invalidColor(r, g, b)) {
        cout << "Mau khong hop le. Nhap lai: ";
        cin >> r >> g >> b;
    }
    red = r;
    green = g;
    blue = b;

}

void Color::XuatMau() {
    cout << "Mau RGB: (" << red << ", " << green << ", " << blue << ")" << endl;
}

void Color::DoiMau(int r, int g, int b) {
    red = r;
    green = g;
    blue = b;
}