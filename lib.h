#ifndef CREATIVEWORLD_LIB_H
#define CREATIVEWORLD_LIB_H

#include <iostream>

struct C_N {
    float x = 0;
    float y = 0; //i
};

C_N operator+(C_N A, C_N B);

C_N operator-(C_N A, C_N B);

C_N operator/(C_N A, C_N B);

C_N operator*(C_N A, C_N B);

std::ostream &operator<<(std::ostream &out, C_N A);

#endif //CREATIVEWORLD_LIB_H
