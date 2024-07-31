#include<bits/stdc++.h>
using namespace std;
int main()
{
    // opening a txt file for writing. You can use open() to open file.
    // ofstream my_file.open("example.txt");
    ofstream my_file("example.txt");

    //print error message
    if(!my_file){
        cout<<"Error opening the file."<<endl;
    }

    //terminate the main() function
    return 1;

    //close the file
    my_file.close();

    return 0;
}
