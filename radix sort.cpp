#include<bits/stdc++.h>
using namespace std;
int A[10000000]={0};
int B[10000000]={0};

void radix_sort(int n,int pass);
void count_sort(int n,int pos);

int main()
{
    int n,i,l,mx,cnt=0;
    cout<<"How many number you want to sort :";
    cin>>n;

    ///random number generator
    random_device rd;
    mt19937 eng(rd());  ///seed generator
    uniform_int_distribution<>distr(1,10000));

    for(i=0;i<n;i++)
    {
        l = distr(eng());
        cin>>A[i];
    }
    mx=max(A[0],A[n-1]);

    for(i=1;(n%i)>0;i*=10)
        cnt++;
    radix_sort(n,cnt);
}
void radix_sort(int n,int pass)
{
    for(int i=1;;i++)
    {
        count_sort(n,i);
    }

}
count_sort(int n,int pos)
{
    for(int)
}
