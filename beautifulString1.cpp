#include<iostream>
using namespace std;

int makeBeautiful(string str) {
    //Write your code here
    int result1 , result2 = 0;
    for(int i = 0; i<str.length(); i++)
    {
        if(i%2 == 0)
        {
            if(str[i] != '0' ) //1001
            {
                result1++;
            }
            if(str[i] != '1' )//0011
            {
                result2++;
            }
        }
        else
        {
            if(str[i] != '1')
            {
                result1++;
            }
            if(str[i] != '0')
            {
                result2++;
            }
        }
    }
    return min(result1 , result2);
}
int main()
{
    string str = "01010010101";
    int count = makeBeautiful(str);
    cout<<count;
    return 0;
}
