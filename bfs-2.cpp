#include<iostream>
#include<vector>
#include<queue>
using namespace std;


vector<int>adj[100];///adj[a].push_back(); for an edge a to b
bool visited[100];
int dis[100];
int p[100];


void Bfs(int s,int t)///t means target destination
    {
        int a,i,b;
        dis[s]=0;
        p[s]=s;

        queue<int>q;
        q.push(s);
        visited[s]=true;
        while(!q.empty())
        {
            a=q.front();
            cout<<a<<" ";
            q.pop();
            for(i=0;i<adj[a].size();i++)
            if(visited[adj[a][i]]==0)
            {
                b=adj[a][i];
               q.push(b);
               visited[b]=true;
               dis[b]=dis[a]+1;
               p[b]=a;

            }

        }///bfs end

        ///check node is connected or not
        if(visited[t]==0)
        {
            cout<<"\nNo path from "<<s<<" to "<<t<<endl;
            return ;
        }
        cout<<endl;
        vector<int>path;
        int it;
        path.push_back(t);
        int now=t;
        while(now!=s)
        {
            now = p[now];
            path.push_back(now);
        }
    for(it=path.size()-1;it>=0;it--)
        cout<<path[it]<<" ";
    }
int main()
{
    int node,edge,x,y,t;
    cout<<"enter node and edge number and where you wants to go\n";
    cin>>node>>edge>>t;
    for(int i=0;i<edge;i++)
    {
        //cout<<"enter vertices\n";
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);

    }
    Bfs(node,t);
}
