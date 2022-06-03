#include <bits/stdc++.h>

using namespace std;

int main()
{
  int N;
    cin >> N;
    string  c;
    vector<vector<long long>> graph(N,vector<long long>(N));
    

    for (int i = 0; i < N; i++)
    for (int j = 0;j < N;j++)
    {
        cin >> c;
        int x = INT_MAX;
        if (c != "INF")
        {
            stringstream ab(c);
            ab >> x;
        }
        graph[i][j] = x;
    }
    vector<vector<long long>> dist(N,vector<long long>(N));
    dist = graph;

    for (int i = 0; i < N; i++)
    for (int j = 0;j < N;j++)
    for (int k = 0; k < N; k++)
        if(dist[i][j]>dist[i][k]+dist[k][j])
            dist[i][j] = dist[i][k] + dist[k][j];
cout<<"Shortest Distance Matrix";
    for (int i = 0; i < N; i++){
        for (int j = 0;j < N;j++){
            if(dist[i][j]==INT_MAX)
                cout << "INF ";
            else cout << dist[i][j]<<" ";
        }
        cout << endl;
    }
    return 0;
}
