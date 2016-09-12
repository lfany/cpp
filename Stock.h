//
// Created by dp on 2016/9/12.
//

#ifndef HELLO_STOCK_H
#define HELLO_STOCK_H

#include <string>

class Stock {
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;

    /*void set_tot(){
        total_val = share_val * shares;
    }*/
    void set_tot();

public:
    // add two constructors
    Stock();     // default constructor
    Stock(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock();   // noisy destructor

    void acquire(const std::string &co, long n, double pr);

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show();
};

// 使用内联函数
inline void Stock::set_tot() {
    total_val = shares * share_val;
}


#endif //HELLO_STOCK_H
