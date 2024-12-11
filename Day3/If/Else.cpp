#include <iostream>
using namespace std;
int main() {
    //farhenhiet to celsius table
    //celsisus=(F − 32) × 5/9
    float f;
    cout << "enter the farhenhiet value :"; cin>> f;
    float c;
    c=(5.0/9)* (f-32);
    cout << "The celsisus of"<< ""
    << f << "is"<<" " <<c <<endl;
    //identify lowercase, uppercase and numeric character
    char ch;
    cout << "Enter a character" << endl;
    cin >> ch;
  
    if (ch>='a' and ch<='z'){
         cout<< "the character is lower letter" <<endl;
    }
    else if(ch>='A' and ch<='Z'){
        cout << "the character is uppercase letter"<< endl;
    }
    else if (ch>='0' and ch<='9'){
        cout <<"the character is numeric" << endl ;
    }

}


/// Patterns for understanding the logic mainly (looping)