#include<bits/stdc++.h>
using namespace std;
vector<int> adj_list[100];
int visit[100];

void dfs(int src)
{
    cout<<src<<" ";
    visit[src]=true;

    for(int child : adj_list[src])
    {
        if(visit[child]==false)
            dfs(child);
    }

}
int main()
{
    int n,e;
    cin>>n>>e;
    int cnt=0;

    while(e--)
    {
        int a,b;
        cin>>a>>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visit,false,sizeof(visit));
    for(int i=0;i<n;i++)
    {
       if(visit[i]==false)
       {
       dfs(i);
        cnt++;
       }
        cout<<endl;
    }
    cout<<cnt;


}


