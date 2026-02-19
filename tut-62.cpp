#include <iostream>
#include <functional>   // Required for predefined function objects like greater<>
#include <algorithm>    // Required for sort()
using namespace std;

int main()
{
    /*
        Functors (Function Objects):
        A functor is a class that overloads operator() so it can be used like a function.
        Example: greater<int>() is a predefined functor in STL.
    */

    int arr[] = {1, 89, 65, 25, 76, 14};

    // ---------------------------------------------------------
    // sort(arr, arr + 5)
    // sort() works on a range [start, end)
    // It sorts from arr[0] to arr[4] (5 elements)
    // arr + 5 means pointer to 5th index (exclusive)
    // So only first 5 elements are sorted
    // ---------------------------------------------------------
    sort(arr, arr + 5);

    cout << "After sorting first 5 elements:" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;

    // ---------------------------------------------------------
    // sort(arr, arr + 6)
    // Now sorting all 6 elements
    // arr + 6 means end pointer after last element
    // Entire array gets sorted in ascending order
    // ---------------------------------------------------------
    sort(arr, arr + 6);

    cout << "After sorting all 6 elements (Ascending):" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;

    // ---------------------------------------------------------
    // sort(arr, arr + 6, greater<int>())
    // Third argument is a comparison function
    // greater<int>() is a predefined functor from <functional>
    // It sorts the array in descending order
    // Internally it compares like: return a > b
    // ---------------------------------------------------------
    sort(arr, arr + 6, greater<int>());

    cout << "After sorting all 6 elements (Descending):" << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
