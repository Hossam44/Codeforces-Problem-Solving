#include <iostream>
#include <vector>

using namespace std;
char arr[10][10];
int q,w,e,r;
int x[]={0,-1,0};
int y[]={1,0,-1};
string as="IEHOVA#";
string full[]={"right","forth","left"};
vector<string>pr;
bool valid(int t,int u)
{
    if(t<0 || t>=q || u<0 ||u>=w)
        return 0;
    else
        return 1;
}
void dfs(int fi,int se ,int index)
{
    if(index>=as.size())
        return;
    for(int i=0;i<3;i++)
    {
        int dx=fi+x[i];
        int dy=se+y[i];
        if(valid(dx,dy) && arr[dx][dy]==as[index])
        {
            pr.push_back(full[i]);
            dfs(dx,dy,index+1);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        pr.clear();
        cin>>q>>w;
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<w;k++)
            {
                cin>>arr[j][k];
                if(arr[j][k]=='@')
                {e=j; r=k;}
            }
        }
        dfs(e,r,0);
        for(int d=0;d<pr.size();d++)
        {
            cout<<pr[d]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
