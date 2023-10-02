#ifndef PRACTICAL1_INTERNALREPRES_H
#define PRACTICAL1_INTERNALREPRES_H

#include <string>

using namespace std;

class internalrepres {
public:
    static string FloatToBinary(float floatNumber);
    static string UnsignedCharToBinary(unsigned char ucharNumber);
    static unsigned char SetBits(unsigned  char ucharNumber);
};

#endif //PRACTICAL1_INTERNALREPRES_H
