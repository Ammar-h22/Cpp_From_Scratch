#include <iostream>
using namespace std;

int main()
{
    int a = 3, b = 6;
    // int c = (a*b)+b;
    int c = ((((a * 5) + b) - 45) + 88);
    cout << c;
    return 0;
}

// Precedence :- Precedence means we check that first which
// operator is to be evaluated according to the C++ rule.
// Associativity :- When operator precendence is at the same level
// then we check associativity i.e either to go from (left to right)
// or from (right to left).
