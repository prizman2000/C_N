#include <math.h>
#include "lib.h"

using namespace std;

C_N operator+(C_N A, C_N B) {

    C_N result = A;

    result.x += B.x;
    result.y += B.y;

    return result;
}

C_N operator-(C_N A, C_N B) {

    C_N result = A;

    result.x -= B.x;
    result.y -= B.y;

    return result;
}

C_N operator/(C_N A, C_N B) {

    C_N result;

    result.x = ((A.x * B.x) + (A.y * B.y)) / ((float) pow(A.y, 2) + (float) pow(B.y, 2));
    result.y = ((A.y * B.x) - (A.x * B.y)) / ((float) pow(A.y, 2) + (float) pow(B.y, 2));

    return result;
}

C_N operator*(C_N A, C_N B) {

    C_N result;

    result.x = ((A.x * B.x) - (A.y * B.y));
    result.y = (A.x * B.y + B.x * A.y);

    return result;
}

ostream &operator<<(ostream &out, C_N A) {

    out << "Действительная:" << A.x;
    out << ' ';
    out << "Мнимая:" << A.y;

    return out;
}