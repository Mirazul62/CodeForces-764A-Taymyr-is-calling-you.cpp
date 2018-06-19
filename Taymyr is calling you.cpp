#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,z,count=0,i,j;
    cin>>n>>m>>z;
    for(i=1;i<=z;i++)
    {
        if(i%n==0 && i%m==0)
            count++;
    }
    cout<<count;
}
