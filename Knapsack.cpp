#include<bits/stdc++.h>
#define loop(i,n) for(int i=0;i<n;i++)
#define fast ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
struct ob
{
    float value;
    float weight;
};

bool comp(ob x,ob y)
{
    float r1=x.value/x.weight;
    float r2=y.value/y.weight;
   return r1>r2;
}
void fractional_knapsack(ob A[],int n,float capacity)
{

   sort(A,A+n,comp);
   float cw=0.0,final_value=0.0;
   loop(i,n)
   {
       if(cw+A[i].weight<=capacity)
       {
           cw+=A[i].weight;
           final_value+=A[i].value;
       }
       else
       {
           float remain=capacity-cw;
           final_value+=A[i].value*(remain/A[i].weight);
           break;
       }
   }
   cout<<"the ans is "<<fixed<<setprecision(2)<<final_value<<endl;
}
int main()
{
  //fast;
  int n;
  float capacity;
  cout<<"How many product you have: ";
  cin>>n;
   ob A[n+5];
  loop(i,n)
  {
      cout<<"product "<<i+1<<" value: ";
      cin>>A[i].value;
      cout<<"product "<<i+1<<" weight: ";
      cin>>A[i].weight;
  }
  cout<<"enter the maximum capacity: ";
  cin>>capacity;
  fractional_knapsack(A,n,capacity);
}
