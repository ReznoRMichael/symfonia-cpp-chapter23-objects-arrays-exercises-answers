#include <iostream>

using namespace std;

class Tclass
{
public:
    int a;
    static int b;
    int c;
};

// static class member has to be defined in the global scope (not from main()) and without "static"
int Tclass::b = 6;

int main()
{
    // the initializer list is only for non-static variables of the class
    Tclass Karray[2] =
    {
        // only for a and c
        { 1, 2 },
        { 3, 4 }
    };

    // check the variables
    cout << "Karray[0].a: " << Karray[0].a << endl;
    cout << "Karray[0].b: " << Karray[0].b << endl;
    cout << "Karray[0].c: " << Karray[0].c << endl;

    cout << "Karray[1].a: " << Karray[1].a << endl;
    cout << "Karray[1].b: " << Karray[1].b << endl;
    cout << "Karray[1].c: " << Karray[1].c << endl;

    cout << "Tclass::b: " << Tclass::b << endl;

    return 0;
}
