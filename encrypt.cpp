#include <iostream>
#include "encrypt.h"
#include <string>

using namespace std;

string cipher(string data , char key){
    string output = data;
    for(int i=0; i < data.length(); i++ ){
        output[i]= data[i] ^ key; //Encryption happens here the " ^ " is used in XOR  to make it easy to scramble and unscramble
    }
    return output;
}

