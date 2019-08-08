#include<bits/stdc++.h>
using namespace std;
int arr[100][100];
int visited[100][100];
int n;
int dfs(int x,int y){ 

int an=1;

if(x<1 || x>n || y<1 || y>n)return 0;

if(visited[x][y] || !arr[x][y])return 0;
visited[x][y]=1;
if(!visited[x-1][y-1] && arr[x-1][y-1]==1){
an+=dfs(x-1,y-1);
}

if(!visited[x-1][y] || !arr[x-1][y]){
an+=dfs(x-1,y);

}

if(!visited[x-1][y+1] || !arr[x-1][y+1]){
an+=dfs(x-1,y+1);
}

if(!visited[x][y-1] || !arr[x][y-1]){
an+=dfs(x,y-1);
}

if(!visited[x][y+1] || !arr[x][y+1]){
an+=dfs(x,y+1);
}

if(!visited[x+1][y-1] || !arr[x+1][y-1]){
an+=dfs(x+1,y-1);
}

if(!visited[x+1][y] || !arr[x+1][y]){
an+=dfs(x+1,y);
}

if(!visited[x+1][y+1] || !arr[x+1][y+1]){
an+=dfs(x+1,y+1);
}




return an;

}
int main(){
cin>>n;
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
cin>>arr[i][j];
}
}
int fans=0;
for(int i=1;i<=n;i++)
for(int j=1;j<=n;j++){
if(!arr[i][j] || visited[i][j])
continue;
fans=max(fans,dfs(i,j));
}

cout<<fans<<endl;
return 0;
}
