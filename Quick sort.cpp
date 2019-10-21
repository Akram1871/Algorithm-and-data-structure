#include<bits/stdc++.h>
using namespace std;

vector<int>A;
clock_t start_time,end_time;

int partitions(int p,int r)
{
    int x = A[r];
    int i = p-1;
    for(int j=p;j<=r-1;j++)
    {
        if(A[j]<=x)
        {
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

void Quick_sort(int p,int r)
{
    int q;
    if(p<r)
    {
        q=partitions(p,r);
        Quick_sort(p,q-1);
        Quick_sort(q+1,r);
    }
}


int main()

{
    int n,i,p,r;
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

  Quick_sort(p,r);
  end_time=clock();
  double Total_time=(double)((end_time-start_time));

  cout<<endl<<"sorted numbers: "<<endl;
  for(i=0;i<n;i++)
    cout<<A[i]<<" ";
  cout<<endl;
  cout<<"Total time = " <<Total_time<<endl;
}


