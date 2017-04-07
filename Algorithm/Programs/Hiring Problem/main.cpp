#include <iostream>
#include <set>
using namespace std;
#define LEN 15
int person[15];

int main() {
    for(int i=0;i<LEN;i++) {
        person[i] = rand()%100;
    }

    cout << "Preparing List...\n" << endl;
    cout << "People \t\t Quality" << endl;
    cout << "--------------------------" << endl;
    for(int i=0;i<LEN;i++) {
        cout << "   " << i+1 << " \t\t " << "   " << person[i] << endl;
    }
    cout << "Starting Hiring..." << endl;
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
