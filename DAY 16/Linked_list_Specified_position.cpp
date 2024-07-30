#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers {1,2,3};
    //display the original list
    cout<<"Initial List: "<<endl;
    for(int number : numbers)
    {
        cout<<number<<",";
    }
    //create an iterator to point to 1st position
    list<int>::iterator itr = numbers.begin();
    //increment the iterator to point to the 3rd position
    ++itr;
    ++itr;
    //insert 0 at the 3rd position
    numbers.insert(itr, 0);
    //display the modified list
    cout<<endl<<"Final List: "<<endl;
    for(int number : numbers)
    {
        cout<<number<<",";
    }
    return 0;
}
