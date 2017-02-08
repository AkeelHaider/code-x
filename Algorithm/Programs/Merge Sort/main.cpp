/**
 * Created by ReezPatel on 8-Feb-17.
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define LEN 90000
using namespace std;


void doMergeSort(int a[],int start,int end) {
    if(start >= end) return;

    int mid = (start+end)/2;
    doMergeSort(a,start,mid);
    doMergeSort(a,mid+1,end);

    int temp[start+end];
    int tempCounter = 0;
    int leftCounter = start;
    int rightCounter = mid+1;

    while(leftCounter < mid+1 && rightCounter < end+1) {
        if(a[leftCounter] < a[rightCounter]) {
            temp[tempCounter++] = a[leftCounter];
            leftCounter++;
        }else {
            temp[tempCounter++] = a[rightCounter];
            rightCounter++;
        }
    }

    while(leftCounter < mid+1) {
        temp[tempCounter++] = a[leftCounter];
        leftCounter++;
    }

    while(rightCounter < end+1) {
        temp[tempCounter++] = a[rightCounter];
        rightCounter++;
    }

    for(int i=start,j=0;i<=end;i++) {
        a[i] = temp[j++];
    }
}


int main() {
    int worstCase[LEN],bestCase[LEN],randomCase[LEN];
    for(int i=0;i<LEN;i++) {
        worstCase[i] = LEN-i;
        bestCase[i] = i;
        randomCase[i] = (rand()%1000);
    }

    time_t worstCaseTimeStart,worstCaseTimeEnd,bestCaseTimeStart,bestCaseTimeEnd,randomCaseTimeStart,randomCaseTimeEnd;

    cout << "\n\nFor Merge Sort: \n";
    time(&bestCaseTimeStart);
    doMergeSort(bestCase,0,LEN-1);
    time(&bestCaseTimeEnd);
    time_t bestCaseTimeTaken = difftime(bestCaseTimeEnd,bestCaseTimeStart);
    cout << "Time Taken for Best Case: " << bestCaseTimeTaken << endl;

    time(&worstCaseTimeStart);
    doMergeSort(worstCase,0,LEN-1);
    time(&worstCaseTimeEnd);
    time_t wrostCaseTimeTaken = difftime(worstCaseTimeEnd,worstCaseTimeStart);
    cout << "Time Taken for Worst Case: " << wrostCaseTimeTaken << endl;


    time(&randomCaseTimeStart);
    doMergeSort(randomCase,0,LEN-1);
    time(&randomCaseTimeEnd);
    time_t randomCaseTimeTaken = difftime(randomCaseTimeEnd,randomCaseTimeStart);
    cout << "Time Taken for Random Case: " << randomCaseTimeTaken << endl;

    return 0;

}
