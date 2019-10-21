#include<bits/stdc++.h>
using namespace std;

bool prime[1000006];
set<long long>s;

void seive()
{
   long long int i,j,k;
    memset(prime,1,sizeof(prime));
    for(i=4;i<=1000006;i+=2)
        prime[i]=0;
 prime[1]=0;
 prime[2]=1;
    k=sqrt(1000006);
    for(i=3;i<=k;i+=2)
    {
        if(prime[i])
        {
            for(j=i*i;j<=1000006;j+=i)
            {
                prime[j]=0;
            }
        }
    }s.insert(4);
    for(i=3;i<=1000006;i+=2)
    {
       if(prime[i])
            s.insert(i*i);
    }

}
int main()
{
    int n,i;
    cin>>n;
    long long int x;
    seive();
    for(i=0;i<n;i++)
    {
        cin>>x;
        set<long long>::iterator it;
        it =s.find(x);
        if(it!=s.end())
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}
