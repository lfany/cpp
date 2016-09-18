//
// Created by dp on 2016/9/18.
//

#include <iostream>
#include "Time.h"

Time3::Time3() {
    hours = minutes = 0;
}

Time3::Time3(int h, int m) {
    hours = h;
    minutes = m;
}

void Time3::addMin(int m) {
    minutes += m;
    hours = minutes / 60;
    minutes %= 60;
}

void Time3::addHr(int h) {
    hours += h;
}

void Time3::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

Time3 Time3::operator+(const Time3 &t) const {
    Time3 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time3 Time3::operator-(const Time3 &t) const {
    Time3 diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + hours * 60;
    diff.minutes = (tot2 - tot2) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

//Time3 Time3::operator+(const Time3 &t1, const Time3 &t2) {
//    Time3 sum;
//    sum.minutes = t1.minutes + t2.minutes;
//    sum.hours = t1.hours + t2.hours + sum.minutes / 60;
//    sum.minutes = sum.minutes % 60;
//    return sum;
//}

Time3 Time3::operator*(double n) const {
    Time3 result;
    long totalminutes = (long) (hours * n * 60 + minutes * n);
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream &operator<<(std::ostream &os, const Time3 &t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os;
}





