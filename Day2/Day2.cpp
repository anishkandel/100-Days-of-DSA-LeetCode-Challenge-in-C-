

// Header file for input output functions
#include <iostream>
using namespace std; //using namespace std means that we can use names for objects and variables from the standard library.

// Main() function: where the execution of
// program begins
int main() // int main (){} this will be always appear in C++, which i a function, any code inside its curly bracket {} will be executed
{
    cout << "Namaste! I am the Dego" << endl;
     // cout (c -out) is an object with an insertion operator (<<) to output/print text
    // C++ is case-sensitive: "cout" and "Cout" has different meaning.
    // every c++ statements ends with semicolon ;, and are so imp

    // int main() { cout << " Namaste! I am the Dego"; return 0;}
    //return 0;  --> ends the main function


    //Omitting Namespace
    // std::cout <<"hello world"; // by doing this we donn't have to define "using namespace std;"
   
    int hi =100;
    cout << hi << endl;
    
    bool bl=true;
    cout <<bl << endl;

    //endl-> to print new line/ enter
    // we can use

    // "/n", endl, to print new line
    cout << "My name is Anish Shree Kandel" << "\n \n";
    
    int size= sizeof(hi);
    cout << "Size of hi is:" << size <<"byte" << endl;

    int x, y, sum ;
    x=10;
    y=30;
    sum =(x+y);
    cout << sum << endl;



}




// print functionality is already defined i.e. "Cout"

//kei display garnu paryo vane  std names ko inside we have to use these operators(<< <<) --> to show output




// semicolon ; is use to end line, same like full stop in english language




// Data types & variables

//when we have to store something in memory, we have to know it's data type and know the size/space of the value
int a=5;

// int is data type
// a is variable
// 5 is the value , which is stored at variable a
// int allocate 4 byte=32 bit memory


char name = 'a';
//only single charcater i.e. 'a'
//char is data type
//ch is variable
// 'Dego' is variable
//char allocate 1 byte=8 bit in memory


bool b=true;
//bool b=1;

//true=1
//false=0
// 1 bit


float f=1.2;
// allocate 8 byte

double d= 3.45;

//allocate 8 byte


//Variable naming rules

//abc
//ABC
//abc12
//_abc




//How data is stored

//int a =8 --> 4 byte