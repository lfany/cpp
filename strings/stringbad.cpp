//
// Created by dp on 2016/9/18.
//

#include <cstring>
#include "stringbad.h"

using std::cout;

StringBad::StringBad(const char *s) {
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" object created" << std::endl;
}

StringBad::StringBad() {
    len = 4;
    str = new char[4];
    std::strcpy(str, "c++");
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" default object created" << std::endl;

}

StringBad::~StringBad() {
    cout << "\"" << str << "\" object deleted, ";
    -- num_strings;
    cout << num_strings << " left" << std::endl;
    delete [] str;
}

std::ostream &operator<<(std::ostream &os, const StringBad &st) {
    os << st.str;
    return os;
}
