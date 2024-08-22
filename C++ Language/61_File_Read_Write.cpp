#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream hout("61_File_Read_Write_Program.txt");
    string name;
    cout<<"enter your name ";
    cin>>name;
    hout<<name+" my name is";
    hout.close();
    ifstream hin("61_File_Read_Write_Program.txt");
    string content;
    hin>>content;
    cout<<"the content of this file is "<<content;
    hin.close();
    return 0;
}