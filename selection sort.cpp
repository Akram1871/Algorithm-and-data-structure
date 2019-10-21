#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x;
  clock_t start_time,end_time;

  random_device rd;      /// obtain a random number from hardware
    mt19937 eng(rd());      /// seed the generator
    uniform_int_distribution<> distr(0, 400);        /// define the range
  vector<unsigned int>v;

  cout<<"how many number you want to take as input? : ";
  cin>>n;
  cout<<endl;
  ///random number take here
  for(int i=0;i<n;i++)
  {
     unsigned int l= (distr(eng));
     v.push_back(l);
  }

    cout<<"unsorted numbers: "<<endl;
    for(int i=0;i<n;i++)
      cout<<v[i]<<" ";

  ///selection sort

    start_time = clock();

  for(int i=0;i<n-1;i++)
   for(int j=i+1;j<n;j++)
   {
      if(v[j]<v[i])
      swap(v[i],v[j]);
   }
       end_time=clock();
    double total_time=double((end_time-start_time));

    cout<<endl<<"sorted numbers: "<<endl;
    for(int i=0;i<n;i++)
      cout<<v[i]<<"\t";
       cout<<endl;
   cout<<"Total time = "<<total_time<<"s"<<endl;
}
