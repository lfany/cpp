//
// Created by dp on 2016/9/12.
//

#include <iostream>
#include "Stock.h"

void Stock::acquire(const std::string &co, long n, double pr) {
    company = co;
    if (n < 0) {
        std::cout << "Number of shares can't be negative; "
                  << company << " shares set to 0" << std::endl;
        shares = 0;
    } else {
        shares = n;
        share_val = pr;
        set_tot();
    }
}

void Stock::buy(long num, double price) {
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted." << std::endl;
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    using std::cout;
    if (num < 0) {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted." << std::endl;
    } else if (num < shares) {
        cout << "You cano't sell more than you have! "
             << "Transaction is aborted." << std::endl;
    } else {
        shares = num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() {
    std::cout << "Company: " << company
              << " Shares: " << share_val
              << " Shares Price: $" << share_val
              << " Total Worth: $" << total_val << std::endl;
}
