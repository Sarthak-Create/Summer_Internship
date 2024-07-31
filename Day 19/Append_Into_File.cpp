#include<bits/stdc++.h>
using namespace std;
int main()
{
    //open a text file to write
    ofstream my_file("example.txt", ios::app);

    //check the file for errors
    if(!my_file)
    {
        cout<<"Failed to open the file for appending."<<endl;
        return 1;
    }

    //write multiple lines in the file
    my_file<<"Broly 44"<<endl;
    my_file<<"Vegeta 14"<<endl;
    my_file<<"Goku 16"<<endl;
    cout<<"Your lines are saved successfully"<<endl;

    //close the file
    my_file.close();
    return 0;
}
