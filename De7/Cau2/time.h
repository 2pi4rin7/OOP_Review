#include <iostream>
class time
{
private:
    int hour, minute, second;
public:
    time(int h = 0, int m = 0, int s = 0) :  hour(h), minute(m), second(s) {}
    friend std::istream& operator>>(std::istream &is, time &t)
    {
        is >> t.hour >> t.minute >> t.second;
        return is;
    }
    friend std::ostream& operator<<(std::ostream &os, time t)
    {
        os << t.hour << ":" << t.minute << ":" << t.second;
        return os;
    }
    int timetosecond()
    {
        int total = hour * 3600 + minute * 60 + second;
        return total;
    }
    time secondtotime(int s)
    {
        s = s % 86400;
        time t;
        t.hour = s / 3600;
        t.minute = (s % 3600) / 60;
        t.second = s % 60;
        return t;
    }
    time operator--()
    {
        return secondtotime(this->timetosecond() - 1 + 86400);
    }
    time operator--(int)
    {
        time t = *this;
        *this = secondtotime(this->timetosecond() - 1 + 86400);
        return t;
    }
};