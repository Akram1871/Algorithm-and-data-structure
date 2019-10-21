#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    set<int>s;
    cin>>a>>b>>c;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    if(s.size()==1)
        cout<<"Equilateral Triangle\n";
    else if(s.size()==2)
        cout<<"Isosceles Triangle\n";
    else
        cout<<"Bad Triangle\n";
}
