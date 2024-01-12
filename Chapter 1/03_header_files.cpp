#include <iostream>
#include "this.h"

// There are two types of header files.
// 1) System header files : It comes with the compiler.
//    example : # include <iostream>
// 2) User defined header files : It is written by the programmer.
//    example : # include"this.h"  ----> This will produce an error if this.h named file
//    is not present in the current directory.
using namespace std;

int main()
{

    cout << "Hello my name is Ammar";

    return 0;
}
