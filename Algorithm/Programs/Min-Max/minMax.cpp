#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
#define LEN 100
struct minMax {
    int min;
    int max;
};
minMax getMinMax(int a[],int start,int end) {
    minMax m;
    if(start >= end) {
        m.max = a[start];
        m.min = a[start];
        return m;
    }
    int mid = (start+end)/2;
    minMax m1 = getMinMax(a,start,mid);
    minMax m2 = getMinMax(a,mid+1,end);
    m.max = m1.max>m2.max?m1.max:m2.max;
    m.min = m1.min<m2.min?m1.min:m2.min;
    return m;
}
int main() {
    int myArray[LEN];
    for(int i=0;i<LEN;i++) {
        myArray[i] = rand() % 100;
    }
    minMax ans = getMinMax(myArray,0,LEN-1);
    cout << "\n\nMinimum: " << ans.min << endl;
    cout << "Maximum: " << ans.max << endl;
}
