#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("62_File_Open_Eof_Program.txt");
    out<<"this is me "<<endl;
    out<<"this is me also "<<endl;
    out<<"this is also me "<<endl;
    out<<"this is alsi me "<<endl;

    ifstream in;
    string st, st2;
    in.open("62_File_Open_Eof_Program.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}
