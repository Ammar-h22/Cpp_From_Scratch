#include <iostream>
using namespace std;
struct employee
{
    int Id;
    char batch;
    float Salary;
};

int main()
{
    struct employee soham;
    soham.Id = 101;
    soham.batch = 'A';
    soham.Salary = 2500000;

    cout << "The ID of Soham is: " << soham.Id << endl;
    cout << "Batch of Soham is: " << soham.batch << endl;
    cout << "The salary of Soham is: " << soham.Salary << endl;

    return 0;
}

// Here in Structures we can also use typedef function:

#include <iostream>
using namespace std;
typedef struct employee
{
    int Id;
    char batch;
    float Salary;
} emp;

int main()
{
    emp soham;
    soham.Id = 101;
    soham.batch = 'A';
    soham.Salary = 2500000;

    cout << "The ID of Soham is: " << soham.Id << endl;
    cout << "Batch of Soham is: " << soham.batch << endl;
    cout << "The salary of Soham is: " << soham.Salary << endl;

    return 0;
}
