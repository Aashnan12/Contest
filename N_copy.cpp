#include<iostream>
#include<string.h>
using namespace std;

int main() 
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    char max_a,min_a;
    char max_b,min_b;
    if(a[0] > a[1])
    {
        max_a = a[0];
        min_a = a[1];
    }
    else
    {
        max_a = a[1];
        min_a = a[0];
    }
    if(b[0] > b[1])
    {
        max_b = b[0];
        min_b = b[1];
    }
    else
    {
        max_b = b[1];
        min_b = b[0];
    }
    int flag_a = 0;
    int flag_b = 0;
    for(char i = min_a;i<max_a;i++)
    {
        flag_a++;
    }
    for(char i = min_b;i<max_b;i++)
    {
        flag_b++;
    }
    if(flag_a == flag_b)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}