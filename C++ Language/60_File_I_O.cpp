#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string st="shaw kailash";
    string st2;
    ofstream out("60_File_I_O_Writting.txt");
    out<<st;

    ifstream in("60_File_I_O_Reading.txt");
    // in>>st2;
    // cout<<st2;
    getline(in,st2);
    cout<<st2;
    return 0;
}
