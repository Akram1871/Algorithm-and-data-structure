#include<iostream>
#include<set>
#include<math.h>
#include<cstring>//memset
#include<algorithm>///find()

using namespace std;

const int n=1000000;
int vis[n],prime=0;
int v[n];

void seive()
{
    memset(vis,0,sizeof(vis));
    int limit=sqrt(n*1.0);
    v[prime++]=2;
    vis[1]=1;

    for(int i=4;i<=n;i+=2)
        vis[i]=1;
    for(int i=3;i<=n;i+=2)
    {
        if(!vis[i])
        {
            v[prime++]=i;//cout<<v[prime-1]<<" "<<prime-1<<endl;
            //vis[i]=1;
            if(i<=limit)
            for(int j=i*i;j<=n;j+=i*2)
            {
                vis[j]=1;
            }
        }
    }
    //for(int k=0;k<prime-1;k++)
        //cout<<v[k]<<" ";
       return;
}

int main()
{

    int N,div;
    multiset<int>result;
    multiset<int>::iterator it;
    cout<<"enter a number"<<endl;
    cin>>N;
    seive();
    int sq=(int)sqrt(N*1.0);//cout<<sq<<" ";
    for(int i=0;v[i]<=sq;i++)
    {//cout<<v[1]<<" ";
        if(N%v[i]==0)
        {
          result.insert(v[i]);
          div=N/v[i];//cout<<div<<" d ";
          if(!vis[div])
          {
              result.insert(div);
              break;
          }
          else
          {
             N=div;
             i=-1;
          }

        }
    }
    multiset<int>::iterator it1;
    for(it1=result.begin();it1!=result.end();it1++)
        cout<<*it1<<" ";
    cout<<endl;
}
