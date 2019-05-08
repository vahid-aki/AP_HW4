//
// Created by Vahid on 5/3/2019.
//

#ifndef CTEXT_H
#define CTEXT_H

#include <iostream>
#include <cstring>

class Ctext {
public:
    Ctext(const std::string& ch);
    Ctext();

    const std::string& getText();

private:
    std::string str;
};


#endif //Q5_CTEXT_H
