// map is an Associative array.
// map is a key-value pair.
//'map' in C++ is just similar to the 'Dictionary' in Python.
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> marksMap;
    marksMap["Ammar"] = 98;
    marksMap["Lubaina"] = 75;
    marksMap["Himanshu"] = 66;

    // Now if we want to insert a key-value pair:
    marksMap.insert({{"Roshan", 77}, {"Sahil", 56}});

    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " = " << (*iter).second << endl;
    }
    // (*iter).first will print the key data and (*iter).second will print the value data.
    // So in this way we can get the key-value pair i.e map.

    // Now if we want to know the size:
    cout << "The size of the Map is: " << marksMap.size() << endl;
    // Now if we want to know the max size:
    cout << "The size of the Map is: " << marksMap.max_size() << endl;

    return 0;
}
