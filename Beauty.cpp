#include<iostream>
using namespace std;

int main()
{
    int n = 2;
    int v[] = {1,4};
    int min = v[0];
    int max = v[0];
    int min_pos=0;
    int max_pos=0;
    int beauty = max - min;
    for(int i=0;i<n;i++)
    {
        if(v[i] > max)
        {
            max = v[i];
            max_pos = i;
        }
        if(v[i] < min)
        {
            min = v[i];
            min_pos = i;
        }
    }
    cout<<max_pos<<min_pos<<endl;
    int ans = (max_pos > min_pos)?n-max_pos-1:n-min_pos-1;
    cout<<ans;
}