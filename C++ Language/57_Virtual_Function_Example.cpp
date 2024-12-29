#include<iostream>
#include<cstring>
using namespace std;
class kailash
{
    protected:
    string title;
    float rating;
    public:
    kailash(string s, float r)
    {
        title=s;
        rating=r;
    }
    virtual void display(){}
};
class kailashvideo : public kailash
{
    float videolength;
    public:
    kailashvideo(string s, float r, float vl):kailash(s, r)
    {
        videolength=vl;
    }
    void display()
    {
        cout<<"this is an amazing video with title "<<title<<endl;
        cout<<"rating "<<rating<<" out of 5 stars"<<endl;
        cout<<"length of this video is "<<videolength<<" minutes"<<endl<<endl;
    }
};
class kailashtext : public kailash
{
    int words;
    public:
    kailashtext(string s, float r, int wc):kailash(s, r)
    {
        words=wc;
    }
    void display()
    {
        cout<<"this is an amazing text tutorial with title "<<title<<endl;
        cout<<"rating of this text tutorial "<<rating<<" out of5 stars"<<endl;
        cout<<"no of words in this text tutorial is "<<words<<" words"<<endl<<endl;
    }
};
int main()
{
    string title;
    float rating,videolength;
    int words;

    title="shaw video";
    videolength=4.54;
    rating=4.8;
    kailashvideo shawvideo(title, rating, videolength);

    title="shaw text";
    words=345;
    rating=4.7;
    kailashtext shawtext(title, rating, words);
    
    kailash* sk[2];
    sk[0]=&shawvideo;
    sk[1]=&shawtext;

    sk[0]->display();
    sk[1]->display();
    return 0;
}
