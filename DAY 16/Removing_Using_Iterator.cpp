#include<bits/stdc++.h>
using namespace std;
int main()
{
    //create a list and an iterator
    list<int> numbers {1,2,3,4,5,6};
    list<int>::iterator itr = numbers.begin();

    //display original list
    cout<<"Initial List:"<<endl;
    for(int number : numbers)
    {
        cout<<number<<",";
    }
    //point iterator to the 4th element
    for(int i=0;i<3;i++)
    {
        ++itr;
    }
    //remove the 4th element
    numbers.remove(*itr);

    //display the modified list
    cout<<endl<<"Final List:";
    for(int number : numbers)
    {
        cout<<number<<",";
    }
    return 0;
}
