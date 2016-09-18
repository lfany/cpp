//
// Created by dp on 2016/9/18.
//

#ifndef HELLO_STRINGBAD_H
#define HELLO_STRINGBAD_H

#include <iostream>

class StringBad {
private:
    char *str;
    int len;
    /*static */int num_strings;
public:
    StringBad(const char *s);
    StringBad();
    ~StringBad();

    // friend
    friend std::ostream &operator<<(std::ostream & os,
            const StringBad & st);
};


#endif //HELLO_STRINGBAD_H
