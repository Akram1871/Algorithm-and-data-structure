#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,j,x,r,cnt=0;
  clock_t start_time,end_time;

  random_device rd;      /// obtain a random number from hardware
    mt19937 eng(rd());      /// seed the generator
    uniform_int_distribution<> distr(0, 400);        /// define the range
  vector<unsigned int>v;

  cout<<"how many number you want to take as input? : ";
  cin>>n;
  cout<<endl;
  ///random number take here
  for(i=0;i<n;i++)
  {
     unsigned int l= (distr(eng));
     v.push_back(l);
  }
    cout<<"unsorted numbers: "<<endl;
    for(i=0;i<n;i++)
      cout<<v[i]<<" ";

  ///insertion sort start here
  start_time = clock();

  for(i=1;i<n;i++)
  {
  r=v[i];
   for(j=i-1;j>=0&&v[j]>r;j--)
    {
      v[j+1]=v[j];//cnt++;
    }//cnt++;cout<<cnt<<" ";
    v[j+1]=r;
  }

  end_time=clock();
  double total_time=double((end_time-start_time));

  cout<<endl<<"sorted numbers: "<<endl;
  for(i=0;i<n;i++)
     cout<<v[i]<<"\t";
   cout<<endl;
   cout<<"Total time = "<<total_time<<"s"<<endl;
}
