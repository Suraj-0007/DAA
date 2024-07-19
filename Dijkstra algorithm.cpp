#include <stdio.h>
#define INFINITY 999
void dijkstra(int n, int source, int cost[][10], int dist[]){
    int i, j, u, min;
    int visited[10] = {0};
	for (i = 1; i <= n; i++){
        dist[i] = cost[source][i];
    }
    visited[source] = 1;
    for (i = 1; i <= n - 1; i++){
        min = INFINITY;
        for (j = 1; j <= n; j++){
            if (!visited[j] && dist[j] < min){
                min = dist[j];
                u = j;
            }
        }
        visited[u] = 1;
		for (j = 1; j <= n; j++){
            if (!visited[j] && cost[u][j] && dist[u] + cost[u][j] < dist[j]){
                dist[j] = dist[u] + cost[u][j];
            }
        }
    }
}
int main(){
    int n, source, i, j, cost[10][10], dist[10];
	printf("Enter the number of nodes: ");
    scanf("%d", &n);
	printf("Enter the cost matrix:\n");
    for (i = 1; i <= n; i++){
        for (j = 1; j <= n; j++){
            scanf("%d", &cost[i][j]);
        }
    }
	printf("Enter the source node: ");
    scanf("%d", &source);
	dijkstra(n, source, cost, dist);
	printf("Shortest path from source node %d:\n", source);
    for (i = 1; i <= n; i++){
        if (i != source){
            printf("%d -> %d: %d\n", source, i, dist[i]);
        }
    }

    return 0;
}

