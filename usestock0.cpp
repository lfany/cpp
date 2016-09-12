//
// Created by dp on 2016/9/12.
//

#include <iostream>
#include "stock00.h"

int main(){
    Stock fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.000);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300034, 40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300021, 0.125);
    fluffy_the_cat.show();
    return 0;
}

