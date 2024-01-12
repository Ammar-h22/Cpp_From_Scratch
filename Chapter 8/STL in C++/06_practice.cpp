// Vector Practice:
#include <iostream>
#include <vector>
using namespace std;

void show(vector<int> v)
{
    vector<int>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v1;
    v1.push_back(4);
    v1.push_back(11);
    v1.push_back(7);
    show(v1);
    cout << v1.size();

    return 0;
}

// // List Pratice :
// #include <iostream>
// #include <list>
//     using namespace std;

// void Display(list<int> l)
// {
//     list<int>::iterator iter;
//     for (iter = l.begin(); iter != l.end(); iter++)
//     {
//         cout << *iter << " ";
//     }
//     cout << endl;
// }
// int main()
// {

//     list<int> list1;
//     list1.push_back(12);
//     list1.push_back(3);
//     list1.push_back(22);
//     list1.push_back(5);
//     list1.sort();
//     list1.reverse();
//     Display(list1);
//     cout << list1.size() << endl;

//     return 0;
// }

// // // Map Practice:
// // #include <iostream>
// // #include <map>
// // using namespace std;

// // void display(map<string, float> m)
// // {
// //     map<string, float>::iterator itr;
// //     for (itr = m.begin(); itr != m.end(); itr++)
// //     {
// //         cout << (*itr).first << " = " << (*itr).second << endl;
// //     }
// // }
// // int main()
// // {
// //     map<string, float> m1;
// //     m1["Ammar"] = 9.73;
// //     m1["Himanshu"] = 9.77;
// //     m1["Roshan"] = 9.24;
// //     // m1.clear();
// //     m1.erase("Himanshu");
// //     display(m1);
// //     return 0;
// // }
