#include<bits/stdc++.h>
using namespace std;
int main()
{
    //open a text file to write
    ofstream my_file("example.txt");

    //check the file for errors
    if(!my_file)
    {
        cout<<"Error: Unable to open the file."<<endl;
        return 1;
    }

    //write multiple lines in the file
    my_file<<"Sarthak 44"<<endl;
    my_file<<"Divish 14"<<endl;
    my_file<<"Dhruv 16"<<endl;
    cout<<"Your lines are saved successfully"<<endl;

    my_file.close();
    return 0;
}
