//
// Created by hz on 16/9/10.
//

#include <iostream>
#include <cmath>

int main(){
    using namespace std;
    cout << "Hello world!!" <<endl;
//    string str;
//    cin >> str;
//
//    cout << str << endl;

    double area;
    cout << "Enter the floor area: " << endl;
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "Output: " << side << endl;

    return 0;
}
