//
// Created by dp on 2016/9/12.
//
#include "stock02.h"
#include <iostream>

int main(){
    {
        using std::cout;
        cout << "Using constructors to create new objects" << std::endl;
        Stock stock1("NanoSmart", 12, 20.0);    // syntax 1
        stock1.show();
        Stock stock2 = Stock("Boffo Objects", 2, 2.0);  // syntax 2
        stock2.show();

        cout << "Using a constructor to reset an object" << std::endl;
        stock1 = Stock("Nifty Foods", 10, 50.0);    // temp object
        cout << "Revised stock1: " << std::endl;
        stock1.show();
        cout << "Done" << std::endl;
    }
    return 0;
}
