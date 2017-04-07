#include <iostream>
#include <cstdlib>
#include <set>
#include <ctime>
#include <unistd.h>
using namespace std;
#define LEN 15
int person[15];

int main() {
    cout << "Initiating Hiring Process..." << endl;
    cout << "Accepting " << LEN <<" Application... \n\n" << endl;
    _sleep(1000);
    srand(time(NULL));

    for(int i=0;i<LEN;i++) {
        person[i] = rand()%100;
    }

    cout << "Preparing List...\n" << endl;
    _sleep(1000);
    cout << "People \t\t Quality" << endl;
    cout << "--------------------------" << endl;
    for(int i=0;i<LEN;i++) {
        cout << "   " << i+1 << " \t\t " << "   " << person[i] << endl;
    }
    _sleep(1000);
    cout << "Starting Hiring..." << endl;
    _sleep(1000);
    cout << "Person Hired => ";

    int currentTrushHold  = 0;

    set<int> s;
    int count = 0;
    while(count != 15) {
        int id = rand()%LEN;
        if(s.end() == s.find(id)) {
            if(person[id] >= currentTrushHold) {
                currentTrushHold = person[id];
                cout << person[id] << " ";
            }
            s.insert(id);
        }
    }


    return 0;
}
