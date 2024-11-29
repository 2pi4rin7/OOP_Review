#ifndef ELEMENT_H
#define ELEMENT_H

class Element {
protected:
    int hoanhDo;
    int tungDo;
    int chieuDai;
    int chieuRong;
public:
    virtual ~Element() = default;
    virtual void Nhap() = 0;
    virtual void Xuat() = 0;
    virtual void KtrMauNenVaMauChu() = 0;
    virtual int LayMauBackground() = 0;
};



#endif //ELEMENT_H
