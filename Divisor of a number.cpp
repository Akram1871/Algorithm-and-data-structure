///by the name of allah
///time complexity of this algorithm is root n

#include<bits/stdc++.h>
using namespace std;

///divisor function
void divisor(int n)
{
    int i,l;
    l=sqrt(n*1.0);
    set<int>s;
    for(i=1;i<=l;i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
    set<int>::iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
}
int main()
{
    int n;
    cin>>n;
    divisor(n);
    return 0;
}
