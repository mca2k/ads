#include<iostream.h>
#include<conio.h>

int cost[10][10],i,j,k,m,n,stk[10],top,v,visit[10],visited[10];
int main( )
{
clrscr();
cout<<"DEPTH FIRST SEARCH";
cout<<"Enter the no.of vertices under 9";
cin>>n;
cout<<"Enter the no.of edges";
cin>>m;
cout<<"\n Edges \n";
for(k=1;k<=m;k++)
{ 
cin>>i>>j;
cost[i][j]=1;
}
cout<<"Enter the initial vertex:";
cin>>v;
cout<<"Order of the visited vertices:";
cout<<v<<" ";
visited[v]=1;
k=1;
while(k<n)
{
for(j=n;j>=1;j--) 
if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
{
visit[v]=1;
stk[top]=j;
top++;
}
v=stk[--top];
cout<<v<<" ";
k++;
visit[v]=0;
visited[v]=1;
}
getch();
return 0;
}