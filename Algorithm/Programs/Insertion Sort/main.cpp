/**
 * Created by ReezPatel on 24-Jan-17.
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define LEN 40000

void doInsertionSort(int arr[],const int len);

int main()
{
    int worstCase[LEN],bestCase[LEN],randomCase[LEN];
    for(int i=0;i<LEN;i++) {
        worstCase[i] = LEN-i;
        bestCase[i] = i;
        randomCase[i] = (rand()%1000);
    }



    time_t worstCaseTimeStart,worstCaseTimeEnd,bestCaseTimeStart,bestCaseTimeEnd,randomCaseTimeStart,randomCaseTimeEnd;

    cout << "For Insertion Sort: \n";
    time(&bestCaseTimeStart);
    doInsertionSort(bestCase,LEN);
    time(&bestCaseTimeEnd);
    double bestCaseTimeTaken = difftime(bestCaseTimeEnd,bestCaseTimeStart);
    cout << "Time Taken for Best Case: " << bestCaseTimeTaken << endl;

    time(&worstCaseTimeStart);
    doInsertionSort(worstCase,LEN);
    time(&worstCaseTimeEnd);
    double wrostCaseTimeTaken = difftime(worstCaseTimeEnd,worstCaseTimeStart);
    cout << "Time Taken for Worst Case: " << wrostCaseTimeTaken << endl;


    time(&randomCaseTimeStart);
    doInsertionSort(randomCase,LEN);
    time(&randomCaseTimeEnd);
    double randomCaseTimeTaken =
    difftime(randomCaseTimeEnd,randomCaseTimeStart);
    cout << "Time Taken for Random Case: " << randomCaseTimeTaken << endl;

    return 0;
}
void doInsertionSort(int arr[],const int len) {
    //Repeat for length
    int i,j;
    for(i=1;i<len;i++) {
        while(i > 0 && arr[i-1] > arr[i]) {
            int temp = arr[i-1];
            arr[i-1] = arr[i];
            arr[i] = temp;
            i--;
        }
    }
}