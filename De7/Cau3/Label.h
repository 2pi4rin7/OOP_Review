#ifndef LABEL_H
#define LABEL_H
#include "Color.h"
#include "Element.h"
#include <string>
using namespace std;


class Label : public Element {
private:
    string text;
    Color cText;
    Color cBackground;
public:
    void Nhap() override;
    void Xuat() override;
    void KtrMauNenVaMauChu() override;
    int LayMauBackground() override;
};



#endif //LABEL_H
