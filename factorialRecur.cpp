#include<iostream>
using namespace std;


int fact(int n)
{
    if(n==0)
    {
        return 
        1;
    }
    int smallProb = fact(n-1);
    int bigProb = n*smallProb;

    return bigProb;
}
int main()
{
    cout<<"Enter a number to find it's factorial\n";
    int n;
    cin>>n;
    cout<<fact(n);

    return 0;
}