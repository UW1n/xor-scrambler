#include <iostream>
#include "encrypt.h"

using namespace std;

int main(){
    int num;
    string word,result;
    char key;

    cout<<"Would you like to scramble or unscramble (1 or 2)\n";
    cin >> num;

    cin.ignore(1000, '\n');

    if(num==1){
        cout<<"Enter the word you want to scramble\n";
    }
    else if (num==2){
        cout<<"Enter the word you want to unscramble\n";
    }
    else{
        return 0;
    }

    getline(cin, word);

    cout<<"Enter your key\n";
    cin>> key;

   result = cipher(word, key);
cout << "------------------------" << endl;
cout << "Result: " << result << endl;
cout << "------------------------" << endl;
    return 0;
}
