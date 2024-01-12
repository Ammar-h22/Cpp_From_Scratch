#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display(void) {}
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display(void)
    {
        cout << "This is an amazing video with Title: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display(void)
    {
        cout << "This is an amazing Text tutorial with Title: " << title << endl;
        cout << "Rating: " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this Text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, videolength;
    int words;

    // For Code with harry Video
    title = "Django Tutorial";
    rating = 4.53;
    videolength = 9.82;
    CWHVideo vd(title, rating, videolength);
    vd.display();

    // For Code with harry Text
    title = "Django Tutorial";
    rating = 4.19;
    words = 433;
    CWHText xt(title, rating, words);
    xt.display();

    // We can also do this using pointers
    // For example:
    CWH *ptr[2];
    ptr[0] = &vd; // (CWH)Base class pointer pointing to the CWHVideo class object
    ptr[1] = &xt; // (CWH)Base class pointer pointing to the CWHText class object

    ptr[0]->display();
    ptr[1]->display();

    return 0;
}

// Rules for Virtual functions:
// 1. They cannot be Static.
// 2. They are useful only when they are accessed by object pointers.
// 3. Virtual function of a class can be a friend of another class.
// 4. It might be possible that we have made a virtual function in the Base class and it is of no use
//    in the program as we have not called the function using pointers.
// 5. If a virtual function is defined in the Base class, it is not necesssary to redefine it in the
//    Derived class.
