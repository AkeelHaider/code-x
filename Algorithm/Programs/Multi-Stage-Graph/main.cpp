#include <iostream>
using namespace std;

#define MAX 100
#define INF 9999

int matrix[MAX][MAX];
int n;

int getShortedDistance(int start,int end) {
    if(start == end) return 0;

    int min = INF;
    int dist = 0;

    int finalX = 0, finalY = 0;

    for(int i=0;i<n;i++) {
        if(matrix[start][i] != 0) {
            dist = matrix[start][i] + getShortedDistance(i,end);
            if(min>dist) {
                min = dist;
                finalX = start;
                finalY = i;
            }
        }
    }
    cout << finalX << " -> " << finalY << " : " << min << endl;
    return min;
}

int main() {
    for(int i=0;i<MAX;i++) {
            for(int j=0;j<MAX;j++) {
                matrix[i][j] = 0;
            }
    }

    cout << "Enter Number of Nodes: ";
    cin >> n;
    int e;
    cout << "Enter Number of Edges: ";
    cin >> e;

    cout << "Enter " <<  e << "Edged (A W B): ";
    for(int i=0;i<e;i++) {
        int a,b,w;
        cin >> a;
        cin >> w;
        cin >> b;
        matrix[a][b] = w;
        //matrix[b][a] = w;

    }

    cout << "Enter Starting and End Node (Starting with index 0): ";
    int start,end;
    cin >> start;
    cin >> end;

    int result = getShortedDistance(start,end);

    cout << "Minimum Distance is: " << result << endl;

    return 0;
}
