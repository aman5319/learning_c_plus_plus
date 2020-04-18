#include <iostream>
#include <string>
/*
 * Fundamental types of c++
 * 1. char
 * 2. int
 * 3. float
 * 4. boolean
 * 5. void 
 * 6. null
 * 
 * 
 */

using namespace std;

int main(){
    int a;
    a=20;
    float b {20.02}; // uniform Intialization
    char c ('c'); // constructor Intialization
    bool d = true;

    auto e = 30;
    decltype(a) f = 50;
    string mystring = "aman is awesome";
    cout << a << endl << b <<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl<<mystring;
}


