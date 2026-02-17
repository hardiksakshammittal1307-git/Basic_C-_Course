#include <iostream>
#include <list>
using namespace std;

// Function to display elements of the list
void display(list<int> &lst)
{
    list<int>::iterator it;   // Declare iterator for list

    // Traverse the list using iterator
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";   // Dereference iterator to print value
    }
    cout << endl;
}

int main()
{
    // Creating an empty list
    list<int> list1;

    // Adding elements at the end of the list
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(9);
    list1.push_back(4);
    list1.push_back(123);

    cout << "Displaying list1:" << endl;
    display(list1);
    cout << endl;

    // Some list operations (currently commented)
    // list1.pop_back();    // Removes last element
    // list1.pop_front();   // Removes first element
    // list1.remove(6);     // Removes element with value 6
    // display(list1);

    cout << "Reversing list1: " << endl;
    list1.reverse();        // Reverses the list
    display(list1);
    cout << endl;

    cout << "Sorting list1: " << endl;
    list1.sort();           // Sorts list in ascending order
    display(list1);
    cout << endl;

    // Creating second list with 5 default elements (0)
    list<int> list2(5);

    list<int>::iterator iter;
    iter = list2.begin();   // Point iterator to beginning

    // Assigning values manually using iterator
    *iter = 36;
    iter++;
    *iter = 98;
    iter++;
    *iter = 14;
    iter++;
    *iter = 02;   // 02 is same as 2 (leading 0 doesn't change value here)
    iter++;
    *iter = 67;

    cout << "Displaying list2:" << endl;
    display(list2);
    cout << endl;

    cout << "Sorting list2: " << endl;
    list2.sort();           // Sorting list2
    display(list2);
    cout << endl;

    cout << "Swapping list1 and list2:" << endl;
    list1.swap(list2);      // Swaps contents of both lists

    cout << "Displaying list1:" << endl;
    display(list1);
    cout << endl;

    cout << "Displaying list2:" << endl;
    display(list2);
    cout << endl;

    cout << "Merging list1 and list2" << endl;

    // IMPORTANT:
    // merge() works properly only if both lists are sorted.
    // After swap, list1 and list2 are sorted, so merge will work correctly.
    list1.merge(list2);

    // After merge:
    // list2 becomes empty
    // list1 contains all elements in sorted order
    display(list1);

    return 0;
}
