#include <iostream>
#include <vector>
using namespace std;

// Template display function
// Works for vector of ANY data type (int, char, float, etc.)
template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this Vector:" << endl;

    // Loop through vector using size()
    for (int i = 0; i < v.size(); i++)
    {
        // at(i) is safer than v[i] because it checks bounds
        cout << v.at(i) << ",";
    }

    cout << endl;
}

int main()
{
    // ================== Different Ways to Create a Vector ==================

    vector<int> vec1;
    // Creates an empty integer vector (size = 0)
    // Elements can be added using push_back()

    
    // Example: Taking input dynamically
    int size, element;
    cout << "Enter the size of Vector: " << endl;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element to add in Vector: " << endl;
        cin >> element;
        vec1.push_back(element);  // Adds element at the end
    }

    vec1.pop_back();  // Removes the last element

    display(vec1);

    // Using iterator to insert elements
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 2, 9, 300);  
    // Inserts 9 copies of value 300 starting at index 2

    display(vec1);
    


    // ================== Fixed Size Vector ==================

    vector<char> vec2(4);
    // Creates a vector of size 4
    // For char type, default value is '\0' (null character)

    vec2.push_back('5');
    // push_back adds element at the end
    // Now size becomes 5

    display(vec2);
    // First 4 elements are '\0' (invisible)
    // Last element is '5'


    // ================== Copy Constructor ==================

    vector<char> vec3(vec2);
    // vec3 becomes an exact copy of vec2


    // ================== Size + Default Value Constructor ==================

    vector<int> vec4(6, 3);
    // Creates a vector of 6 elements
    // Each element is initialized with value 3
    // Result: 3 3 3 3 3 3

    return 0;
}
