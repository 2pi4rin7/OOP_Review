#ifndef WEBSITE_H
#define WEBSITE_H
#include "Element.h"
#include "Label.h"
#include "Button.h"

class Website {
private:
    int soElement;
    Element** elements;
public:
    Website(){}
    ~Website();
    void Nhap();
    void Xuat();
    void KtrPhoiMauThanhPhanDau();
    void KtrMauNenThanhPhan();
};



#endif //WEBSITE_H
