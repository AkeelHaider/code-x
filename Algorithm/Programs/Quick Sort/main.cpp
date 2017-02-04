/**
 * Created by ReezPatel on 1-Feb-17.
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#define LENGTH 10000
using namespace std;

void swap(int* a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void doQuickSort(int* arr,int len,int start,int end) {
    if(start >= end)
        return;
    int pivot = arr[start];
    while(1) {
        int i = start;
        while(pivot >= arr[i]) {
            i++;
            if(i == end) {
                break;
            }
        };

        int j = end;
        while(pivot < arr[j]) {
            j--;
            if(j == start) {
                break;
            }
        }

        if(i > j) {
            swap(&(arr[j]),&(arr[start]));
            doQuickSort(arr,len,start,j-1);
            doQuickSort(arr,len,j+1,end);
            return;
        } else if(i == j) {
            swap(&(arr[i]),&(arr[start]));
            doQuickSort(arr,len,start,i-1);
            doQuickSort(arr,len,i+1,end);
            return;
        }else {
            swap(&(arr[i]),&(arr[j]));
        }
    }
}

void runQickSort(string str,int* arr) {
    clock_t s,e;
    s = clock();
    doQuickSort(arr,LENGTH,0,LENGTH-1);
    e = clock();
    double t = (double)(e-s)/(double)CLOCKS_PER_SEC;
    cout << "Time Taken of " << str << " case: " << fixed << t << " Sec. \n";
}

int main()
{
    int arrBestCase[LENGTH];
    int arrWorstCase[LENGTH];
    int arrRandomCase[LENGTH];
    for(int i=0;i<LENGTH;i++) {
        arrBestCase[i] = i;
        arrWorstCase[i] = LENGTH-i;
        arrRandomCase[i] = rand()%LENGTH;
    }

    runQickSort("Increasing",arrBestCase);
    runQickSort("Random",arrRandomCase);
    runQickSort("Decreasing",arrWorstCase);

    return 0;
}
