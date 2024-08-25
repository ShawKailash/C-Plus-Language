#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string, int> marksmap;
    marksmap["kaialsh"]=89;
    marksmap["komal"]=78;
    marksmap["karan"]=56;
    marksmap.insert({{"arun",45},{"pooja",67}});
    map<string, int> :: iterator iter;
    for(iter=marksmap.begin();iter!=marksmap.end();iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"the size is "<<marksmap.size()<<endl;
    cout<<"the max size is "<<marksmap.max_size()<<endl;
    cout<<"the empty return value is "<<marksmap.empty()<<endl;
    return 0;
}