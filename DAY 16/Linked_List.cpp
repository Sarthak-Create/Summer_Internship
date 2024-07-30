#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> numbers;

    if(numbers.empty())
    {
            numbers.push_front(10);
    }
    else{
        numbers.push_back(20);
    }
    for(int i:numbers)
    {
        cout<<i<<endl;
    }
}


