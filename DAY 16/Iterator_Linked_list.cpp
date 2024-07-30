#include<bits/stdc++.h>
using namespace std;
int main()
{
    //create a list
    list<int> numbers = {1,2,3,4,5};
    //create a iterator to point to the first element of the list
    list<int>::iterator itr = numbers.begin();
    //increment itr to point to 2nd element
    ++itr;
    //display 2nd element
    cout<<"Second Element: "<<*itr<<endl;
    //increment itr to point to 4th element
    ++itr;
    ++itr;
    //display the 4th element
    cout<<"Fourth Element: "<<*itr;
    return 0;
}
