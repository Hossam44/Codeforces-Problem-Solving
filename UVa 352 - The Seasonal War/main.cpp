#include <iostream>
#include <vector>

using namespace std;
char arr[26][26];
int q;
int a[]={0,-1,-1,-1,0,1,1,1};
int b[]={1,1,0,-1,-1,-1,0,1};
bool valid(int s,int d)
{
    if(s<0 || s>=q || d<0 || d>=q)
        return 0;
    else
        return 1;
}
void dfs(int x,int y,bool visited[][26])
{
    visited[x][y]=1;
    for(int i=0;i<8;i++)
    {
        int dx=x+a[i];
        int dy=y+b[i];
        if(valid(dx,dy) && !visited[dx][dy] && arr[dx][dy]=='1')
        {
            dfs(dx,dy,visited);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>q;
        int ans=0;
        bool visited[26][26];
        for(int j=0;j<q;j++)
            for(int k=0;k<q;k++)
                {visited[j][k]=0;}

        for(int j=0;j<q;j++)
            for(int k=0;k<q;k++)
                cin>>arr[j][k];
        for(int j=0;j<q;j++)
            for(int k=0;k<q;k++)
            {
                if(arr[j][k]=='1' && !visited[j][k])
                {
                    ans++;
                    dfs(j,k,visited);
                }
            }
        cout<<"Image number "<<i+1<<" contains "<<ans<<" war eagles."<<endl;

    }

    return 0;
}
