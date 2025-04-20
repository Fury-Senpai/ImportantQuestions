#include<iostream>
using namespace std;


int power(int n , int x)
{
    if(x == 0)
    {
        return 1;
    }
    //R.C
    return n * power(n,x-1);
}
int main()
{
    int n , x;
    cout<<"Enter number\n";
    cin>>n;
    cout<<"Enter power\n";
    cin>>x;
    power(n);
    return 0;
}