#include<bits/stdc++.h>
#define inf 9999999
using namespace std;
vector<long long int>A;
clock_t start_time,end_time;


void merges(long long int p,long long int q,long long int r)
{
   long long int n1 = q-p+1;
   long long int n2 = r-q;
   long long int L[n1+3],R[n2+3],i,j,k;
    for( i=1;i<=n1;i++)
    {
        L[i]=A[p+i-1];
    }
    for( i=1;i<=n2;i++)
    {
        R[i]=A[q+i];
    }
     i=1,j=1;
    L[n1+1]=inf;
    R[n2+1]=inf;
    for( k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
    }
}

void merge_sort(long long int p,long long int r)
{
  long long int q=(p+r)/2;
    if(p<r)
    {
        merge_sort(p,q);
        merge_sort(q+1,r);
        merges(p,q,r);
    }
}

int main()
{
   long long int n,i,p,r;
    random_device rd;      /// obtain a random number from hardware
    mt19937 eng(rd());      /// seed the generator
    uniform_int_distribution<> distr(0, 400);        /// define the range
    cout<<"how many number you want to take as input? : ";
  cin>>n;
  cout<<endl;
  ///random number take here
  for(i=0;i<n;i++)
  {
      int l= (int)(distr(eng));
     A.push_back(l);
  }

    cout<<"unsorted numbers: "<<endl;
    for(i=0;i<n;i++)
      cout<<A[i]<<" ";

  p=0;
  r=A.size();
  start_time=clock();

  merge_sort(p,r);
  end_time=clock();
  double Total_time=(double)((end_time-start_time));

  cout<<endl<<"sorted numbers: "<<endl;
  for(i=0;i<n;i++)
    cout<<A[i]<<" ";
  cout<<endl;
  cout<<"Total time = " <<Total_time<<endl;


}
