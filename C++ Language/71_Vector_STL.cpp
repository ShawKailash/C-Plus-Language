#include<iostream>
#include<vector>
using namespace std;
template <class t>
void display(vector <t> &v)
{
    cout<<"displaying this vector "<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main()
{
    vector <int> vec1;
    int element,size;
    cout<<"enter the size of your vector "<<endl;
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cout<<"enter the element to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    cout<<endl;
    vec1.pop_back();
    display(vec1);
    cout<<endl;
    vector <int> :: iterator iter=vec1.begin();
    vec1.insert(iter+1,2,546);
    display(vec1);
    cout<<endl;
    vector <int> vec2;
    display(vec2);
    vector <char> vec3(2);
    vec3.push_back('5');
    display(vec3);
    vector <char> vec4(vec3);
    display(vec4);
    vector <int> vec5(6,8);
    vector <int> :: iterator iter5=vec5.begin();
    vec5.insert(iter5+2,3,23);
    display(vec5);
    cout<<vec5.size();
    return 0;
}
