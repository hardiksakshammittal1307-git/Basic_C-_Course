#include <iostream>
using namespace std;

// Template class so the same vector works for different data types (int, float, etc.)
template <class T>
class MyVector
{
public:
    T *arr;     // Pointer to dynamically allocated array
    int size;   // Size of the vector

    // Constructor: allocates memory for the vector
    MyVector(int m)
    {
        size = m;
        arr = new T[size];
    }

    // Destructor: frees dynamically allocated memory
    ~MyVector()
    {
        delete[] arr;
    }

    // Function to calculate dot product of two vectors
    T dotproduct(MyVector &v)
    {
        T result = 0;
        for (int i = 0; i < size; i++)
        {
            result += arr[i] * v.arr[i];
        }
        return result;
    }
};

int main()
{
    // ================= INTEGER VECTOR EXAMPLE =================
    MyVector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 6;
    v1.arr[2] = 8;

    MyVector<int> v2(3);
    v2.arr[0] = 5;
    v2.arr[1] = 9;
    v2.arr[2] = 7;

    int intResult = v1.dotproduct(v2);
    cout << "Integer dot product = " << intResult << endl;


    // ================= FLOAT VECTOR EXAMPLE =================
    MyVector<float> v3(3);
    v3.arr[0] = 4.2f;
    v3.arr[1] = 6.6f;
    v3.arr[2] = 8.5f;

    MyVector<float> v4(3);
    v4.arr[0] = 5.9f;
    v4.arr[1] = 9.7f;
    v4.arr[2] = 7.1f;

    float floatResult = v3.dotproduct(v4);
    cout << "Float dot product = " << floatResult << endl;

    return 0;
}
