/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int MAXN(105);

char a [MAXN][MAXN];
pair<int,int> q[MAXN*MAXN];
int d[4][2] = {1,0,-1,0,0,1,0,-1}, path[MAXN][MAXN];
bool visited[MAXN][MAXN];

int main()
{
    int n,m;
    cin>>n>>m;

    for(int i = 0 ; i < n ; i++){
        scanf("%s",a[i]);
    }

    int fr = 0, bk = 0; //front - back

    if(a[0][0] != '#'){

        path[0][0] = 0 ;
        visited[0][0] = true;
        q[bk++] = make_pair(0,0); //Use queue = breath first search

    }
    while(fr != bk){ //Queue not empty

        //get it's positional
        int x = q[fr].first;
        int y = q[fr].second;
        //move forward up
        fr++;
        for(int k=0;k<4;k++) //check all direction
        {
            int tx = x + d[k][0];
            int ty = y + d[k][1];
            //case which will not be solve
            if(tx<0 || tx>=n || ty<0 || ty>=m) continue; //block
            if(a[tx][ty] == '#') continue; // obstacle
            if(visited[tx][ty]) continue; //already move there
            path[tx][ty] = path[x][y] + 1; //add one more step
            visited[tx][ty] = true; //set as already visited
            q[bk++] = make_pair(tx,ty); //make new pair and send to queue
        }

    }

    printf("%d",path[n-1][m-1]);

    return 0;
}
