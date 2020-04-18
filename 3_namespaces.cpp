#include <iostream>

/*
 * Namespaces are used to prevent name conflicts in large projects.
 */
using namespace std;

namespace MyFirstNamespace{
    int var =5;
}

namespace MySecondNamespace{
    int var = 2;
}

int main(){
    
    MySecondNamespace::var ++;
    using MyFirstNamespace::var;
    cout << "This is a namespace tutorial " << endl;
    cout << var << " This is a first namespace"<< endl ;
    cout << MySecondNamespace::var << " This is a second namespace" ;

}
