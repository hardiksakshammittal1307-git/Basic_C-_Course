#include <iostream> // For input-output (cout)
#include <map>      // For map container
#include <string>   // For string datatype
using namespace std;

int main()
{
    // Creating a map:
    // Key   -> int
    // Value -> pair<string, int> (Name, Marks)
    map<int, pair<string, int>> data;

    // ---------------- INSERTION METHODS ----------------

    // Using [] operator (inserts if key not present)
    data[1] = {"Hardik", 99};
    data[2] = {"Saksham", 78};
    data[3] = {"Raunak", 101};
    data[4] = {"Rishika", 88};
    data[5] = {"Aditya", 79};
    data[6] = {"Khushi", 69};

    // Insert using [] (adds new key 7)
    data[7] = {"Devender", 99};

    // Insert using insert() with initializer list
    data.insert({8, {"Atharv", 58}});

    // Insert using insert() + make_pair()
    data.insert(make_pair(9, make_pair("Aryan", 1008)));

    // Insert using emplace() (constructs element in-place)
    data.emplace(10, make_pair("Yash", 66));

    // Emplace using direct pair construction
    data.emplace(11, pair<string, int>{"Avi", 24});

    // ---------------- TRAVERSAL METHODS ----------------

    // 1️⃣ Using normal iterator + dereferencing (*iter)
    map<int, pair<string, int>>::iterator iter;

    for (iter = data.begin(); iter != data.end(); iter++)
    {
        // (*iter).first  -> key
        // (*iter).second -> value (pair)
        // .first         -> name
        // .second        -> marks
        cout << (*iter).first << " "
             << (*iter).second.first << " "
             << (*iter).second.second << endl;
    }

    cout << endl;

    // 2️⃣ Using iterator arrow operator (->)
    // Same as above but cleaner syntax
    for (iter = data.begin(); iter != data.end(); iter++)
    {
        // iter->first  == (*iter).first
        cout << iter->first << " "
             << iter->second.first << " "
             << iter->second.second << endl;
    }

    cout << endl;

    // 3️⃣ Range-based for loop (Modern C++)
    // Here 'iter' is a COPY of each element
    // Type of iter: pair<int, pair<string,int>>
    for (auto iter : data)
    {
        cout << iter.first << " "
             << iter.second.first << " "
             << iter.second.second << endl;
    }

    cout << endl;

    // 4️⃣ Range-based loop with reference (Best Practice)
    // '&' avoids copying (more efficient)
    for (auto &iter : data)
    {
        cout << iter.first << " "
             << iter.second.first << " "
             << iter.second.second << endl;
    }

    cout<<endl;

    // size() → Returns the current number of elements present in the map.
    // It tells how many key-value pairs are currently stored.
    cout<<"The Size of Map is: "<<data.size()<<endl;

    // max_size() → Returns the maximum number of elements
    // the map can theoretically hold based on system limitations.
    // This is NOT the current size, just the upper possible limit.
    cout<<"The Max size of Map is: "<<data.max_size()<<endl;

    // empty() → Checks whether the map is empty or not.
    // Returns 1 (true) if empty, 0 (false) if it contains elements.
    cout<<"The Empty's Return Value is: "<<data.empty()<<endl;

    return 0;
}
