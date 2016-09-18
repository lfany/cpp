//
// Created by dp on 2016/9/18.
//

#include <iostream>
#include "Time.h"

int main(){
    using std::cout;
    using std::endl;
    Time3 aida(3, 35);
    Time3 tosca(2, 48);
    Time3 temp;

    cout << "Aida and Tosca: \n";
    cout << aida << "; " << tosca << endl;
    temp = aida + tosca;
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida * 1.17;
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;

    cout << "++++++: " << (aida + tosca) <<endl;
    return 0;
}