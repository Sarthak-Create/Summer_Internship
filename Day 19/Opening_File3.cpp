#include<bits/stdc++.h>
using namespace std;
int main()
{
    // opening a txt file for writing. You can use open() to open file.
    // ofstream my_file.open("example.txt");
    ofstream my_file("example.txt");

    if(my_file.fail())
    {
        cout<<"Error opening the file"<<endl;
        return 1;
    }

    return 0;
}
