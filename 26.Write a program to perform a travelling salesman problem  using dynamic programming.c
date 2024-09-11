#include <stdio.h>
#define INF 9999999
#define N 4

int tsp(int graph[][N], int pos, int visited, int dp[][16]) {
    if (visited == (1 << N) - 1)
        return graph[pos][0];

    if (dp[pos][visited] != -1)
        return dp[pos][visited];

    int ans = INF;
    for (int city = 0; city < N; city++) {
        if ((visited & (1 << city)) == 0) {
            int newAns = graph[pos][city] + tsp(graph, city, visited | (1 << city), dp);
            ans = (newAns < ans) ? newAns : ans;
        }
    }
    return dp[pos][visited] = ans;
}

int main() {
    int graph[N][N] = {
        {0, 10, 15, 20},
        {10, 0, 35, 25},
        {15, 35, 0, 30},
        {20, 25, 30, 0}
    };

    int dp[N][16];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < (1 << N); j++)
            dp[i][j] = -1;

    printf("Minimum cost of Travelling Salesman is %d\n", tsp(graph, 0, 1, dp));
    return 0;
}
