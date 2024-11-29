#ifndef COLOR_H
#define COLOR_H

class Color {
private:
    int red;
    int green;
    int blue;
public:
    Color(int red = 0, int green = 0, int blue = 0) : red(red), green(green), blue(blue) {}
    void SetMau();
    void XuatMau();
    void DoiMau(int r, int g, int b);
};



#endif //COLOR_H
