#include<cstdio>

int dp[2][31][31];

int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int now = 1, prev = 0;
    dp[0][1][0] = 1;
    for(int i=0;i<n-1;i++)
    {
        for(int j=1;j<=m;j++)
            for(int l=0;l<=k;l++)
                dp[now][j][l] = 0;
        for(int j=1;j<=m;j++)
            for(int l=0;l<=k;l++)
            {
                dp[now][j+1][l] += dp[prev][j][l];
                dp[now][1][l+1] += dp[prev][j][l];
            }
        now ^= 1;
        prev ^= 1;
    }
    int ans = 0;
    for(int j=1;j<=m;j++)
        ans += dp[prev][j][k];
    printf("%d",ans);
}

