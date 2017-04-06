#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 9999

int mat[MAX][MAX];

int abs(int n) {
    if(n < 0) return -n;
    return n;
}

bool isClashing(int n,int x,int y) {
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(mat[i][j] == 1) {
                if(i == x || j == y || abs(x-i) == abs(y-j))
                    return true;
            }
        }
    }
    return false;
}

bool solveNQueen(int N,int this_x) {
    if(this_x == N) return true;

    bool isPlaced = false;
    for(int i=0;i<N;i++) {
        if(!isClashing(N,this_x,i)) {
            mat[this_x][i] = 1;
            isPlaced = true;
            if(solveNQueen(N,this_x+1)) {
                return true;
            }else {
                mat[this_x][i] = 0;
                isPlaced = false;
            }
        }
            if(isPlaced) return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the value of N for (NxN) Chess Board: ";
    cin >> n;

    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            mat[i][j] = 0;
        }
    }

    solveNQueen(n,0);

    for(int j=0;j<n;j++) {
        for(int i=0;i<n;i++) {
            char ch = '.';
            if(mat[i][j] == 1) ch = 'X';
            cout << setw(5) << ch;
        }
        cout << endl << endl;
    }

    return 0;
}
