//
// Created by dp on 2016/9/13.
//

#ifndef HELLO_TIME_H
#define HELLO_TIME_H


class Time {

private:
    int hours;
    int minutes;

public:
    Time();
    Time(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time Sum(const Time &t) const;
    void Show() const;
    Time operator+(const Time & t) const;
    Time operator-(const Time & t) const;
    Time operator*(double n) const;
};


#endif //HELLO_TIME_H
