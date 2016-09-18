//
// Created by dp on 2016/9/18.
//


#include <iostream>
#include "stringbad.h"
using std::cout;

void callme1(StringBad &sb) {
    cout << "String passed by reference: \n";
    cout << "        \"" << sb << "\"" << std::endl;
}

void callme2(StringBad sb) {
    cout << "String passed by reference: \n";
    cout << "        \"" << sb << "\"" << std::endl;
}

int main(){
    using std::endl;
    {
        cout << "Starting an inner block." << endl;
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bows for Doolars");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;
        callme1(headline1);
        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "Headline2: " << headline2 << endl;
        cout << "Initialize one object to another: \n";
        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;
        cout << "Assign one object to another: \n";
        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
        cout << "Exiting the block!" << endl;
    }
    cout << "End of main()" << endl;
    return 0;
}

