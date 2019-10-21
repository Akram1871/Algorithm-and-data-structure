#include<bits/stdc++.h>
using namespace std;

vector<int>A;
clock_t start_time,end_time;

void Max_heafipy(int i,int n)
{
   int l,r,mx;
   l=2*i+1;
   r=2*i+2;

   if(l<=n&&A[l]<A[i])
   {
    mx=l;
   }
   else
    mx=i;
   if(r<=n&&A[r]<A[mx])
   {
       mx=r;
   }
   if(mx!=i)
   {
       swap(A[i],A[mx]);
       Max_heafipy(mx,n);
   }
}

void Build_max_heap(int n)
{
    for(int i=(n/2);i>=0;i--)
    {
        Max_heafipy(i,n);
    }
}

void Heap_sort(int n)
{
    int i,heap_size=n;
    Build_max_heap( heap_size);
    for(i=n;i>=0;i--)
    {
        swap(A[0],A[i]);
        heap_size= heap_size-1;
        Max_heafipy(0,heap_size);
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


  ///random number take here
  for(i=0;i<n;i++)
  {
      int l= (int)(distr(eng));
     A.push_back(l);
  }
  cout<<"unsorted numbers: "<<endl;
    for(i=0;i<n;i++)
      cout<<A[i]<<" ";

  r=A.size();cout<<"r"<<r<<endl;
  start_time=clock();

  Heap_sort(r);

  end_time=clock();
  double Total_time=(double)((end_time-start_time));

  cout<<endl<<"sorted numbers: "<<endl;
  for(i=0;i<n;i++)
    cout<<A[i]<<" ";
  cout<<endl;
  cout<<"Total time = " <<Total_time<<"S"<<endl;
}
