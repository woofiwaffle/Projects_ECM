#include "internalrepres.h"



union Convert {
    unsigned char ucharValue;
    float floatValue;
};



string internalrepres::FloatToBinary(float floatNumber) {
    Convert convert;
    convert.floatValue = floatNumber;
    string binaryString;

    for(int i = sizeof(convert.floatValue) * 8 - 1; i >= 0; --i){
        binaryString += (convert.ucharValue & (1 << i)) ? '1' : '0';
    }

    return binaryString;
}



string internalrepres::UnsignedCharToBinary(unsigned char ucharNumber) {
    Convert convert;
    convert.ucharValue = ucharNumber;
    string binaryString;

    for(int i = sizeof(convert.ucharValue) * 8 - 1; i >= 0; --i){
        binaryString += (convert.ucharValue & (1 << i)) ? '1' : '0';
    }

    return binaryString;
}