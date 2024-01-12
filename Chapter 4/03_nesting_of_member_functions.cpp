// #include <iostream>
// #include <string>

// using namespace std;

// class binary
// {
//     string s;

// public:
//     void read(void);
//     void check_binary(void);
// };
// void binary ::read(void)
// {
//     cout << "Enter the binary number: " << endl;
//     cin >> s;
// }
// void binary ::check_binary(void)
// {
//     for (int i = 0; i <= s.length(); i++)
//     {
//         if (s.at(i) != '0' && s.at(i) != '1')
//         {
//             cout << "Invalid Binary format" << endl;
//             exit(0);
//         }
//         else
//         {
//             cout << "Your Binary format is correct" << endl;
//             exit(0);
//         }
//     }
// }
// int main()
// {
//     binary b1;
//     b1.read();
//     b1.check_binary();

//     return 0;
// }

// Example of Nesting of a member function:
#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void input(void);
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::input(void)
{
    cout << "Enter the Binary number: " << endl;
    cin >> s;
}
void binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Invalid Binary number";
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    check_binary();
    //---> Instead of giving this (check_binary) function call in (int main) we have given
    // call here in this function without writing the object name i.e (b.check_binary()),
    // and the program will run correctly without any error. This is known as Nesting of a member function.
    // We can do Nesting without thinking that function is defined in private or public, it works on both.
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "The binary number after processing the one's complement is : " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b1;
    b1.input();
    // b1.check_binary();
    b1.ones_compliment();
    b1.display();
    return 0;
}
