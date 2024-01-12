// #include <iostream>
// #include <list>
// using namespace std;

// int main()
// {
//     list<int> l1; // List of length 0
//     list<int> l2(3);
//     // Empty list of size 3 (Here we have just stored memory for 3 integers, but we have not given any data)
//     l1.push_back(5);
//     l1.push_back(7);
//     l1.push_back(1);
//     l1.push_back(9);
//     l1.push_back(12);

//     list<int>::iterator iter;
//     iter = l1.begin();
//     cout << *iter << " ";
//     iter++;
//     cout << *iter << " ";
//     iter++;
//     cout << *iter << " ";
//     iter++;
//     cout << *iter << " ";
//     iter++;
//     cout << *iter << " ";
//     return 0;
// }
// Either we can do this or we can make a function,

#include <iostream>
#include <list>
using namespace std;

void display(list<int> l)
{
    list<int>::iterator lst;
    for (lst = l.begin(); lst != l.end(); lst++)
    {
        cout << *lst << " ";
    }
    cout << endl;
}
int main()
{
    list<int> l1; // List of length 0
    l1.push_back(5);
    l1.push_back(7);
    l1.push_back(1);
    l1.push_back(9);
    l1.push_back(12);
    display(l1);

    // l1.pop_back(); // This will delete one element from back
    // l1.pop_front(); // This will delete one element from front
    // l1.remove(9);
    // This will delete one element from middle that we want
    // Note that if there would be more than one similar number than remove() function will delete
    // all the number that are present in the list.
    // display(l1);

    // Now if we want to sort the list :
    l1.sort(); // This is known as sorting a list
    display(l1);

    // Now if we want to reverse the list:
    l1.reverse();
    display(l1);

    // Now if want to claer the whole list:
    l1.clear();
    display(l1);

    list<int> l2(3);
    // Empty list of size 3 (Here we have just stored memory for 3 integers, but we have not given any data)
    // Here we have assigned 3 elements but we have not given any values in in that 3 elements.
    // So now we will assign them:
    list<int>::iterator it;
    it = l2.begin();
    *it = 45;
    it++;
    *it = 66;
    it++;
    *it = 12;
    display(l2);
    l2.sort(); // Sorting the list

    //Now if we want to merge two lists:
    l1.merge(l2);
    cout << "List 1 after merging is: ";
    display(l1);

    return 0;
}
