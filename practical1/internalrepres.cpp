#include "internalrepres.h"
#include <iostream>



string internalrepres::FloatToBinary(float floatNumber) {

    unsigned int floatBits;
    memcpy(&floatBits, &floatNumber, sizeof(floatNumber));
    //memcpy - for bitwise representation of numbers

    int sign = (floatBits >> 31) & 1;
    int exponent = (floatBits >> 23) & 0xFF;
    int mantissa = floatBits & 0x7FFFFF;

    string signString = to_string(sign);
    string exponentString;
    for(int i = 7; i >= 0; --i){
        exponentString += ((exponent >> i) & 1) ? '1' : '0';
    }
    string mantissaString;
    for(int i = 22; i >= 0; --i){
        mantissaString += ((mantissa >> i) & 1) ? '1' : '0';
    }

    string binaryString = signString + " " + exponentString + " " + mantissaString;

    return binaryString;
}



string internalrepres::UnsignedCharToBinary(unsigned char ucharNumber) {

    string binaryString;

    for(int i = 7; i >= 0; --i){
        binaryString += ((ucharNumber >> i) & 1) ? '1' : '0';
    }

   return binaryString;
}



unsigned char internalrepres::SetBits(unsigned char ucharNumber, int startBit, int numBits) {

    /*if(startBit < 0 || startBit >= 8 || numBits <= 0 || numBits > 8){
        cout << "Error" << endl;
        return ucharNumber;
    }

    unsigned char mask = (1 << numBits) - 1;

    ucharNumber |= (mask << (startBit - numBits + 1));

    return ucharNumber;*/
}



