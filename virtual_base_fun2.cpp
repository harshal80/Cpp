#include <iostream>
#include <cstring>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    void display() {}
};
class chwvideo : public cwh
{
    float videolength;

public:
    chwvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Ratings" << rating << "out of 5 stars" << endl;
        cout << "length of this video is : " << videolength << "minutes" << endl;
    }
};
class chwtext : public cwh
{
    int words;

public:
    chwtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing video with title " << title << endl;
        cout << "Ratings" << rating << "out of 5 stars" << endl;
        cout << "no of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, veln;
    int words;
    // for code with harsh video
    title = "java tutorial";
    veln = 4.56;
    rating = 4.89;
    chwvideo javavideo(title, rating, veln);

    // for code with harsh text
    title = "java tutorial text";
    words = 4999;
    rating = 4.19;
    chwvideo javatext(title, rating, words);
    cwh *tuts[2];
    tuts[0] = &javavideo;
    tuts[1] = &javatext;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}