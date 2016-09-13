//
// Created by dp on 2016/9/13.
//

#include <iostream>
#include "Time.h"

int main(){
    using std::cout;
    using std::endl;

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;

    cout << "codding time = ";
    coding.Show();
    cout << endl;

    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);

    cout << "coding.Sum(fixing) time = ";
    total.Show();
    cout << endl;

    cout << "coding + fixing time = ";
    (coding + fixing).Show();
    cout << endl;

    return 0;
}
