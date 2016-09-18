//
// Created by dp on 2016/9/18.
//

#ifndef HELLO_TIME3_H
#define HELLO_TIME3_H


class Time3 {
private:
    int hours;
    int minutes;
public:
    Time3();
    Time3(int h, int m = 0);
    void addMin(int m);
    void addHr(int h);
    void Reset(int h = 0, int m = 0);
    Time3 operator+(const Time3 & t) const;
    Time3 operator-(const Time3 & t) const;
    Time3 operator*(double n) const;


//    同 Time3 operator+(const Time3 & t) const; 防止二义性
//    friend Time3 operator+(const Time3 & t1, const Time3 & t2){
//        return t2+t1;
//    }
//     使用友元函数来重载操作符
    friend Time3 operator*(double m, const Time3 &t){
        return t*m; //inline definition
    }
    friend std::ostream &operator<<(std::ostream & os, const Time3 & t);

};


#endif //HELLO_TIME3_H
