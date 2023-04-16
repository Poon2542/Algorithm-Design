#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int R = 105,C = 105;
int visited[R][C],int d[4][2] = {1,0,-1,0,0,1,0,-1};
char a[R][C];
bool visited[R][C];
pair<int,int> q[R*C];
int main(){

    int x,y;
    cin>>x>>y;

    for(int i = 0 ; i < x ; i++){
         scanf("%s",&a[i]);
    }
    //bfs using queue
    int fr = 0 ,bk = 0;

    if(a[0][0] != '#'){
        path[0][0] = 0;
        visited[0][0] = true;
        q[bk++] = make_pair(0,0);
    }

    while(fr != bk){

        int x = q[fr].first;
        int y = q[fr].second;
        fr++;
        for(int k=0;k<4;k++) //check all direction
        {
            int tx = x + d[k][0];
            int ty = y + d[k][1];
            //case which will not be solve
            if(tx<0 || tx>=x || ty<0 || ty>=y) continue; //block
            if(a[tx][ty] == '#') continue; // obstacle
            if(visited[tx][ty]) continue; //already move there
            path[tx][ty] = path[x][y] + 1; //add one more step
            visited[tx][ty] = true; //set as already visited
            q[bk++] = make_pair(tx,ty); //make new pair and send to queue
        }
    }
    cout<<path[x-1][y-1];


}
