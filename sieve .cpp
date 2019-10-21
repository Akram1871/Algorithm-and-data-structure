///By the name of almighty Allah
#include<bits/stdc++.h>
using namespace std;



///sieve starts here

vector<int>prime;
bool mark[1000002];

void sieve(int n)
{
    int i,j,limit=sqrt(n*1.0)+2;

    mark[1]=true;
    ///mark 1 if it is not prime
    for(i=4;i<=n;i+=2)
        mark[i]=true;

        ///2 is prime
        prime.push_back(2);

        ///run loop for only odds
        for(i=3;i<=n;i+=2)
        {
            if(!mark[i])
            {
                ///i is prime
                prime.push_back(i);
                ///if we don't do it following
                ///i*i may be overflow
                if(i<=limit)
                {
                    ///loop through all odd multiple off i
                    ///greater than i*i because 3*3
                    for(j=i*i;j<=n;j+=i)
                    {
                        ///mark j not prime
                        mark[j]=true;
                    }
                }
            }
        }
        vector<int>::iterator it;
        for(it=prime.begin();it!=prime.end();it++)
            cout<<*it<<" ";

}
int main()
{
    int n;
    cin>>n;
    sieve(n);
    return 0;
}
