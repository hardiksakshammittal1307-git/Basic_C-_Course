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
    // virtual
    virtual void display() = 0;
};
class CWHvideotut : public CWH
{
public:
    float videolength;
    CWHvideotut(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
            cout << "This is an amazing video with title '" << title << "'" << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << videolength << " minutes" << endl;
    }
};
class CWHtexttut : public CWH
{
public:
    int words;
    CWHtexttut(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an amazing video with title '" << title << "'" << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "number of words in the text tut is: " << words << " words" << endl;
    }
};
int main()
{
    string title;
    float rating, vl;
    int words;

    // for code with harry video tutorial
    title = "Django tutorial";
    vl = 12.19;
    rating = 4.1;
    CWHvideotut djVideotut(title, rating, vl);
    // djVideotut.display();

    // for code with harry text tutorial
    title = "Django tutorial";
    words = 799;
    rating = 4.5;
    CWHtexttut djtexttut(title, rating, words);
    // djtexttut.display();

    CWH *tuts[2];
    tuts[0] = &djVideotut;
    tuts[1] = &djtexttut;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}