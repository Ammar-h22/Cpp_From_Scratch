#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; // Made an object 'vec1' of vector.
    int element, size;
    cout << "Enter the size of the vector: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element); // Adds the element at the end.
    }
    // vec1.pop_back(); // Deletes the last element.
    display(vec1);

    // Now let us see the insert function:
    vector<int>::iterator iter = vec1.begin();
    // Here we have defined iterator named 'iter', and we have used begin() so that the number that we want to
    // insert should start insertion from the first position.
    // vec1.insert(iter, 55);     // Here iterator is pointing on the 1st position, so it will insert 55 before 1st position.
    // vec1.insert(iter + 1, 55); // Here iterator is pointing on the 2st position, so it will insert 55 before 2st position.
    vec1.insert(iter, 5, 55); // This line means that it will print 55 five times.
    display(vec1);

    cout << vec1.size(); // This line will return the size of the vector.

    return 0;
}
