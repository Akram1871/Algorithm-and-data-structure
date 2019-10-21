#include<bits/stdc++.h>
using namespace std;

struct ob
{
    int value;
    int weight;
};

bool cmp(ob x,ob y)
{
    return x.weight>y.weight;
}

int mx(int a,int b)
{
    return (a>b)?a:b;
}
///start
int knapsack(ob ar[],int n,int w)
{
    ///base case
    if(n==0||w==0)
        return 0;
        ///if nth item weight is greater than capacity then
        ///this item can not be included
    if(ar[n-1].weight>w)
        return knapsack(ar,n-1,w);

        ///return the maximum of two cases
        ///(1) included nth item
        ///(2) without included nth item
    else
    {
        return mx(ar[n-1].value+knapsack(ar,n-1,w-ar[n-1].weight),knapsack(ar,n-1,w));
    }
}

int main()
{
    int n;
    cout<<"Enter How many product you have : ";
    cin>>n;
    ob ar[n+5];
    for(int i=0;i<n;i++)
    {
        cout<<"product "<<i+1<<" value :";
        cin>>ar[i].value;
        cout<<"product "<<i+1<<" weight :";
        cin>>ar[i].weight;
    }
    sort(ar,ar+n,cmp);
    int w;
    cout<<"Enter the maximum capacity :";
    cin>>w;
    cout<<knapsack(ar,n,w);
}





