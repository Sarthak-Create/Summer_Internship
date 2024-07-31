#include<bits/stdc++.h>
using namespace std;
int main()
{
    // opening a txt file for writing. You can use open() to open file.
    // ofstream my_file.open("example.txt");
    ofstream my_file("example.txt");

    if(!my_file.is_open())
    {
        cout<<"Error opening the file"<<endl;
        return 1;
    }

    //close the file
    my_file.close();

    return 0;
}
