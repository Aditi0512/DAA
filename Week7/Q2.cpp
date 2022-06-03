#include <bits/stdc++.h>
using namespace std;

void calulate(vector<int> &pa, int i) {
    cout << i + 1 << " ";
    if (pa[i] >= 0)
        calulate(pa, pa[i]);}
void bellman_ford(int **graph, int source, int vertices) {
    int dist[vertices];
    vector<int>pa(vertices,-1);
    for (int i = 0; i < vertices; i++) {
        dist[i] = INT_MAX;
    }
    dist[source] = 0;
    for (int i = 0; i < vertices - 1; i++) {
        for (int j = 0; j < vertices; j++) {
            for (int k = 0; k < vertices; k++) {
                if (dist[j] != INT_MAX && graph[j][k] != 0 && dist[j] + graph[j][k] < dist[k]) {
                    dist[k] = dist[j] + graph[j][k];
                    pa[k]=j;
                }
            }
        }
    }
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            if (dist[j] != INT_MAX && graph[j][i] != 0 && dist[j] + graph[j][i] < dist[i]) {
                cout<<"contain negative cycle";
                return;
            }
        }
    }
    for (int i = 0; i < vertices; i++) {
        calulate(pa, i);
        cout << ": " << dist[i] << endl;
    }
}



int main() {
    int v;
    cin >> v ;
    int **graph = new int *[v];
    for (int i = 0; i < v; i++) {
        graph[i] = new int[v];
        for (int j = 0; j < v; j++) {
            graph[i][j] = 0;
        }
    }

    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cin >> graph[i][j];
        }
    }
    int source;
    cin >> source ;
     bellman_ford(graph, source-1, v);
    return 0;
}
