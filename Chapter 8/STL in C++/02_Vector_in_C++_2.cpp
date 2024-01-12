#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> v)
{
    cout << "Displaying this vector!" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    // Ways to create a vector:
    vector<int> vec1; // Zero lenght integer vector
    display(vec1);

    vector<char> vec2(4); // 4-element character vector
    vec2.push_back('9');
    display(vec2);

    vector<char> vec3(vec2); // 4-element character vector from v2
    display(vec3);

    vector<int> vec4(6, 3); // 6-element character vector of 3s (Means 3 will be printed 6 times.)
    display(vec4);

    return 0;
}
