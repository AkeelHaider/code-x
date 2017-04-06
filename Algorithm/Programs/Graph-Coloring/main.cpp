#include <iostream>
#include <set>
using namespace std;
#define MAX 9999

int graph[MAX][MAX];
int color[MAX];

int main() {
    int n,e;
    cout << "Enter the no. of vertex: ";
    cin >> n;
    for(int i=0;i<n;i++) {
        color[i] = -1;
        for(int j=0;j<n;j++) {
            graph[i][j] = 0;
        }
    }

    cout << "Enter the no. of edges: ";
    cin >> e;
    cout << "Enter the Edges (U V)";
    for(int i=0;i<e;i++) {
        int u,v;
        cin >> u;
        cin >> v;

        graph[u][v] = graph[v][u] = 1;
    }

    for(int i=0;i<n;i++) {
        set<int> s;
        for(int j=0;j<n;j++) {
            if(graph[i][j] == 1) {
                s.insert(color[j]);
            }
        }
        int c = 0;
        while(s.end() != s.find(c)) c++;
        color[i] = c;
    }

    for(int i=0;i<n;i++) {
        cout << "Vertex: " << (i+1) << " -> " << color[i] << endl;
    }


    return 0;
}
