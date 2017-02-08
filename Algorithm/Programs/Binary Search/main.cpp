/**
 * Created by ReezPatel on 24-Jan-17.
 */
#include <iostream>
#include <ctime>
#include <cstdlib>
#define LENGHT 10000

using namespace std;

int doBinarySearch(int array[],int len,int key) {
    int high = len-1;
    int low = 0;

    while(high >= low) {
        int mid = (high+low)/2;
        if(key == array[mid]) {
            return mid;
        }else if(array[mid] > key) {
            high = mid-1;
        }else {
            low = mid+1;
        }
    }

    for(int i=0;i<10000;i++) {
        for(int j=0;j<1000;j++) {

        }
    }

    return -1;
}

int main() {
    clock_t s,e;
    int myArray[LENGHT];
    for(int i=0;i<LENGHT;i++) {
        myArray[i] = i;
    }
    int key;
    cout << "[-1 to exit]";
    do {
        cout << "Enter a Key to Search >> ";
        cin >> key;

        if(key == -1)
            break;

        s = clock();
        int result = doBinarySearch(myArray,10,key);

        e = clock();
        double timeTaken = ((double)e-s)/(double)CLOCKS_PER_SEC;
        cout << "Result: " << result  <<  "\n      >>  Time Taken: " << fixed << timeTaken << " Sec \n\n";
    } while(1);
    return 0;
}