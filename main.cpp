#include <math.h>
#include "lib.h"

using namespace std;

int main() {

    C_N A{4,3};
    C_N B{1,5};

    cout <<"Сумма:  "<< A + B << endl;

    cout <<"Вычитание:  "<< A - B << endl;

    cout <<"Умножение:  "<< A * B << endl;

    cout <<"Деление:  "<< A / B << endl;

    return 0;
}