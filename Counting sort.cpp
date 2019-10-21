#include<bits/stdc++.h>
using namespace std;

int A[300000];
int B[300000];

void counting_sort(int k,int n)
{
    int counts[k+1];
    for(int i=0;i<=k;i++)
    {
        counts[i]=0;
    }

    for(int i=0;i<n;i++)
    {
        counts[A[i]]++;
    }
    ///update count array
    for(int i=1;i<=k;i++)
    {
        counts[i]=counts[i]+counts[i-1];
    }

    for(int i=n-1;i>=0;i--)
    {
        --counts[A[i]];

        B[counts[A[i]]]=A[i];
    }
}
int main()
{
   int n,i,p=0;
   clock_t start_time,end_time;


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
      if(l>p)
        p=l;
     A[i]=l;
  }

  cout<<"unsorted numbers: "<<endl;
    for(i=0;i<n;i++)
      cout<<A[i]<<" ";


  start_time=clock();

  counting_sort(p,n);
  end_time=clock();
  double Total_time=(double)((end_time-start_time));

  cout<<endl<<"sorted numbers: "<<endl;
  for(i=0;i<n;i++)
    cout<<B[i]<<" ";
  cout<<endl;
  cout<<"Total time = " <<Total_time<<"S"<<endl;
}




