#include <iostream>
using namespace std;

// ================= CLASS TEMPLATE =================
// Template class that works with any data type T.
template <class T>
class Hardik
{
public:
    T data;   // generic data member

    // Constructor to initialize data
    Hardik(T a)
    {
        data = a;
    }

    // Member function declaration (defined outside class)
    void display();
};

// ================= MEMBER FUNCTION TEMPLATE =================
// When defining a member function outside a template class,
// we must write template<class T> again and use Hardik<T>::

template <class T>
void Hardik<T>::display()
{
    cout << data << endl;
}


// ================= FUNCTION OVERLOADING =================

// Normal (non-template) function
void func(int a)
{
    cout << "This is First Func() " << a << endl;
}

// Function template (generic version of func)
template <class T>
void func(T a)
{
    cout << "This is Templatised Func() " << a << endl;
}


// Another independent function template
template <class T>
void func1(T a)
{
    cout << "This is Templatised Func() " << a << endl;
}

int main()
{
    // Creating object of template class with int type
    Hardik<int> H(85);

    // Accessing data member
    cout << H.data << endl;

    // Calling member function template
    H.display();

    // ================= FUNCTION OVERLOADING BEHAVIOR =================

    // Both normal func(int) and template func(T) exist.
    // Compiler chooses the EXACT MATCH first.
    func(4);   // Calls normal func(int), NOT template version.

    // Here argument is double (5.94).
    // There is NO exact normal function func(double),
    // so compiler selects the template version func<T>(T).
    // T becomes double in this case.
    func(5.94);   // Calls template func<double>(double)
    
    // Only template version exists for func1
    func1(5);  // Calls template func1<T>()

    return 0;
}
