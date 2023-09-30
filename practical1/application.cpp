#include "application.h"
#include "internalrepres.h"

#include <iostream>
#include <limits>

using namespace std;


int application::exec() {

    char ch;
    bool exit = false;
    while(!exit){
        ch = menu();
        switch(ch){
            case '1':{
                float floatNumber;
                cout << "Enter number (float): ";
                if (!(cin >> floatNumber)) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cerr << "Error" << std::endl;
                    break;
                }

                string binaryRepresentation = internalrepres::FloatToBinary(floatNumber);
                cout << "" << binaryRepresentation << endl;
                break;
            }
            case '2':{
                unsigned int inputUcharNumber;
                cout << "Enter number (unsigned char): ";
                if (!(cin >> inputUcharNumber)) {
                    cin.clear();
                    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    cerr << "Error" << std::endl;
                    break;
                }
                else {
                    unsigned char ucharNumber = static_cast<unsigned char>(inputUcharNumber);
                    string binaryRepresentation = internalrepres::UnsignedCharToBinary(ucharNumber);
                    cout << "" << binaryRepresentation << endl;
                }
                break;
            }
            case '3':{
                break;
            }
            case '0':{
                std::cout << "Exit" << std::endl;
                exit = true;
                break;
            }
            default:{
                cout << "Error\n";
                break;
            }
        }
    }
}



int application::menu(){
    char ch;
    cout << "---------------------------------------" << endl;
    cout << "|Binary representation:" << endl;
    cout << "|1 - float" << endl;
    cout << "|2 - unsigned char" << endl;
    cout << "|3 - set a bit to a specific position" << endl;
    cout << "|0 - Exit (Enter 0 twice in a row)" << endl << "> ";
    cin >> ch;
    cout << "---------------------------------------" << endl;
    return ch;
}
