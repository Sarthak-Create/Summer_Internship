#include<bits/stdc++.h>
using namespace std;
int main()
{
    //create list
    list<int> numbers = {1,2,3,4,5,6};
    //display the list
    cout<<"Initial List: "<<endl;
    for(int number : numbers)
    {
        cout<<number<<",";
    }
    cout<<endl;
    //remove all elements with value 1
    numbers.remove(1);

    //display the modified list
    cout<<endl<<"Final List :";
    for(int number : numbers)
    {
        cout<<number<<",";
    }
    return 0;
}
