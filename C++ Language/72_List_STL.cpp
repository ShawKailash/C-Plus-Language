#include<iostream>
#include<list>
using namespace std;
void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
}
int main()
{
    list <int> list1;
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(2);
    list1.push_back(20);
    list1.push_back(9);
    list1.push_back(5);
    list1.push_back(12);
    display(list1);
    cout<<endl;

    list1.pop_back();
    display(list1);
    cout<<endl;
    
    list1.pop_front();
    display(list1);
    cout<<endl;
    
    list1.remove(8);
    display(list1);
    cout<<endl;

    list1.sort();
    display(list1);
    cout<<endl;
    
    list1.reverse();
    display(list1);
    cout<<endl;
    
    list<int> list2(3);
    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=45;
    iter++;
    *iter=34;
    iter++;
    *iter=23;
    iter++;
    display(list2);
    cout<<endl;

    list2.sort();
    display(list2);
    cout<<endl;

    list2.reverse();
    display(list2);
    cout<<endl;

    list1.merge(list2);
    list1.sort();
    list2.sort();
    cout<<"after merging ";
    display(list1);
    cout<<endl;

    list1.merge(list2);
    list1.reverse();
    list2.reverse();
    cout<<"after merging ";
    display(list1);
    cout<<endl;
    return 0;
}
