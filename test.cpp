
#include<bits/stdc++.h>
using namespace std;



struct point
{
	float x;
	float y;
};
int fac(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fac(n-1);
}

void lagrange(point p[],float x,int n)
{
	float ans=0.0;
  for(int i=0;i<n;i++)
  {
  double f_y=p[i].y;
  	for(int j=0;j<n;j++)
  	{
  		if(j!=i)
  		f_y=((x-p[j].x)*f_y)/((p[i].x-p[j].x));
  	}
  	ans+=f_y;
  }
  cout << "Value of f("<<fixed<<setprecision(7)<<x<<") is : " <<ans<<endl;
}

int main()
{
	int n,m,tc;
	float f_x,x1;
	fstream fio;
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	set<float>dif;
	cin>>tc;
	while(tc--)
    {
	 cin>>n>>m;
	 point p[n];
	for(int i=0;i<n;i++)
	 {
		cin>>x1;
		p[i].x=x1;
	 }
       for(int i=0;i<n;i++)
	 {
		cin>>x1;
		p[i].y=x1;
	 }
	for(int i=0;i<m;i++)
        {
	     cin>>f_x;
	     lagrange(p,f_x,n);
        }


    }
}
