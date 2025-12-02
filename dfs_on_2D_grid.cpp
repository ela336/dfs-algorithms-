#include<bits/stdc++.h>
using namespace std;
char grid[100][100];
bool vis[100][100];
int n,m;
vector<pair<int,int>> v={{0,-1},{0,1},{-1,0},{1,0}};
bool valid(int i,int j)
{
    if(i<0 ||i>=n || j<0 || j>=m)
        return true;

    return false;
}
void dfs(int si,int sj)
{
    cout<<si<<" "<<sj<<endl;;
    vis[si][sj]=true;
    for(int i=0;i<4;i++)
    {
        int ci,cj;
        ci=si+v[i].first;
        cj=sj+v[i].second;

        if(valid(ci,cj) && !vis[ci][cj])
            dfs(ci,cj);
    }
}
int main()
{

    cin>>n>>m;

    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    memset(vis,false,sizeof(vis));

    int si,sj;
    cin>>si>>sj;
     dfs(si,sj);
}
