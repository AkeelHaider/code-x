#include <iostream>
#include <queue>

using namespace std;


int main() {
    double bag_weight = 0;
    priority_queue<pair<double ,pair<pair<double,double>,int> > > priorityQueue;
    int n;
    cout << "Enter the Max Weight allowed in Bag: ";
    cin >> bag_weight;
    cout << "Enter Number of Items: ";
    cin >> n;

    for(int i=0;i<n;i++) {
        double w=0,p=0;
        cout << "Enter Total Weight and Total Price" << endl << "\t >> ";
        cin >> w;
        cin >> p;
        double density = p/w;
        priorityQueue.push(make_pair(density,make_pair(make_pair(w,p),i+1)));
    }

    double total_value = 0;
    for(int i=0;i<n;i++) {
        pair<double,pair<pair<double,double>,int>> pair1 = priorityQueue.top();
        priorityQueue.pop();

        double density = pair1.first;
        pair<pair<double,double>,int> pair2 = pair1.second;
        double weight = pair2.first.first;
        double price = pair2.first.second;
        int id = pair2.second;

        if(bag_weight <= 0) {
            return 0;
        } else if(weight > bag_weight) {
            //Put Half and Return
            price = density*bag_weight;
            total_value += price;
            cout << "Item #" << id << ": Weight => " << bag_weight << " Price =>" << price << endl;
            return 0;
        }else {
            //Put Full
            bag_weight = bag_weight-weight;
            total_value += price;
            cout << "Item #" << id << ": Weight => " << weight << " Price =>" << price << endl;
        }

    }


    return 0;
}
