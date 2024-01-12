#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number(void)
{
    cout << "The Roll Number is: " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float x1, float x2)
{
    maths = x1;
    physics = x2;
}

void Exam ::get_marks(void)
{
    cout << "The marks obtained in maths are : " << maths << endl;
    cout << "The marks obtained in physics are : " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    Result raj;
    raj.set_roll_number(41);
    raj.set_marks(89.0, 90.0);
    raj.display_result();

    return 0;
}

// Important Note:
// 1) If we are inheriting B from A and C from B: [ A ===> B ===> C ]
// 2) A is the base class for B and B is the base class for C.
// 3) (A ===> B ===> C) is called as Inheritance path.
