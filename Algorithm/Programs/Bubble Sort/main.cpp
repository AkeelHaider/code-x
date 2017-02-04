/**
 * Created by ReezPatel on 24-Jan-17.
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define LEN 40000

void doBubbleSort(int arr[],const int len);

int main()
{
    int worstCase[LEN],bestCase[LEN],randomCase[LEN];
    for(int i=0;i<LEN;i++) {
        worstCase[i] = LEN-i;
        bestCase[i] = i;
        randomCase[i] = (rand()%1000);
    }

    time_t worstCaseTimeStart,worstCaseTimeEnd,bestCaseTimeStart,bestCaseTimeEnd,randomCaseTimeStart,randomCaseTimeEnd;

    cout << "\n\nFor Bubble Sort: \n";
    time(&bestCaseTimeStart);
    doBubbleSort(bestCase,LEN);
    time(&bestCaseTimeEnd);
    bestCaseTimeTaken = difftime(bestCaseTimeEnd,bestCaseTimeStart);
    cout << "Time Taken for Best Case: " << bestCaseTimeTaken << endl;

    time(&worstCaseTimeStart);
    doBubbleSort(worstCase,LEN);
    time(&worstCaseTimeEnd);
    wrostCaseTimeTaken = difftime(worstCaseTimeEnd,worstCaseTimeStart);
    cout << "Time Taken for Worst Case: " << wrostCaseTimeTaken << endl;


    time(&randomCaseTimeStart);
    doBubbleSort(randomCase,LEN);
    time(&randomCaseTimeEnd);
    randomCaseTimeTaken = difftime(randomCaseTimeEnd,randomCaseTimeStart);
    cout << "Time Taken for Random Case: " << randomCaseTimeTaken << endl;

    return 0;
}


void doBubbleSort(int arr[],const int len) {
    int i,j;
    for(i=0;i<len;i++) {
        for(j=0;j<len-1;j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j] = temp;
            }
        }
    }
}
