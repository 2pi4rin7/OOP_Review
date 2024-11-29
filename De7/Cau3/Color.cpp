#include<iostream>
#include "Color.h"
#include <vector>
using namespace std;

bool invalidColor(int r, int g, int b) {
    if (r == 255 && g == 0 && b == 0) return 0; // Red
    if (r == 255 && g == 125 && b == 0) return 0; // Orange
    if (r == 255 && g == 255 && b == 0) return 0; // Yellow
    if (r == 125 && g == 255 && b == 0) return 0; // Spring Green
    if (r == 0 && g == 255 && b == 0) return 0; // Green
    if (r == 0 && g == 255 && b == 125) return 0; // Turquoise
    if (r == 0 && g == 255 && b == 255) return 0; // Cyan
    if (r == 0 && g == 125 && b == 255) return 0; // Ocean 
    if (r == 0 && g == 0 && b == 255) return 0; // Blue
    if (r == 125 && g == 0 && b == 255) return 0; // Violet
    if (r == 255 && g == 0 && b == 255) return 0; // Magenta
    if (r == 255 && g == 0 && b == 125) return 0; // Raspberry

    return true; // Different color
}

void Color::SetMau() {
    cout << "Nhap mau RGB voi 3 gia tri 0,125,255: ";
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
    vector<string> color = {"Others", "Red", "Orange", "Yellow", "Spring Green", "Green", "Turquoise", "Cyan", "Ocean", "Blue", "Violet", "Magenta", "Raspberry"};
    cout << "Mau RGB (" << red << ", " << green << ", " << blue << "): " << color[MauTrenBanhXeMau()] << endl;
}

void Color::DoiMau(int r, int g, int b) {
    red = r;
    green = g;
    blue = b;
}

int Color::MauTrenBanhXeMau() {
    int r = red;
    int g = green;
    int b = blue;

    if (r == 255 && g == 0 && b == 0) return 1; // Red
    if (r == 255 && g == 125 && b == 0) return 2; // Orange
    if (r == 255 && g == 255 && b == 0) return 3; // Yellow
    if (r == 125 && g == 255 && b == 0) return 4; // Spring Green
    if (r == 0 && g == 255 && b == 0) return 5; // Green
    if (r == 0 && g == 255 && b == 125) return 6; // Turquoise
    if (r == 0 && g == 255 && b == 255) return 7; // Cyan
    if (r == 0 && g == 125 && b == 255) return 8; // Ocean 
    if (r == 0 && g == 0 && b == 255) return 9; // Blue
    if (r == 125 && g == 0 && b == 255) return 10; // Violet
    if (r == 255 && g == 0 && b == 255) return 11; // Magenta
    if (r == 255 && g == 0 && b == 125) return 12; // Raspberry

    return 0; // Different color
}

bool Color::KtrPhoiMauBoTucTrucTiep(Color p) {
    int c1 = this->MauTrenBanhXeMau();
    int c2 = p.MauTrenBanhXeMau();
    
    if (c1 == 1 && c2 == 7 || c1 == 7 && c2 == 1) return true;
    if (c1 == 2 && c2 == 8 || c1 == 8 && c2 == 2) return true;
    if (c1 == 3 && c2 == 9 || c1 == 9 && c2 == 3) return true;
    if (c1 == 4 && c2 == 10 || c1 == 10 && c2 == 4) return true;
    if (c1 == 5 && c2 == 11 || c1 == 11 && c2 == 5) return true;
    if (c1 == 6 && c2 == 12 || c1 == 12 && c2 == 6) return true;

    return false;
}


