#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num_edge,node,x,y,z;
    vector<int>edge[100];
    vector<int>cost[100];
    cin>>node>>num_edge;
    for(int i=0;i<num_edge;i++)
    {
        cin>>x>>y>>z;
        edge[x].push_back(y);
        cost[x].push_back(z);
    }

}

