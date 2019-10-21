#include<bits/stdc++.h>
using namespace std;

struct clas
{
    float mark;
    int  roll;
    char name[15];
};



bool sorts(clas x,clas y)
{
    if(x.mark==y.mark)
        return (x.roll<y.roll);
    else
        return (x.mark>y.mark);
}
int main()
{dddddddd
    int n,a,i;
    float b;
    char s[15];
    cin>>n;
    clas x[n];
    for(i=0;i<n;i++)
    {
       cin>>a>>s>>b;
        x[i].roll=a;
        strcpy(x[i].name,s);
        x[i].mark=b;
    }
    sort(x,x+n,sorts);
    cout<<"Roll | Name | Marks\n";
    cout<<"-------------------\n";
   for(i=0;i<n;i++)
    {
       //cin>>a>>s>>b;
       printf("%3d | %s | %.0f\n",x[i].roll,x[i].name,x[i].mark);


    }
}
