#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getParent(int value,int* parent) {
    if(value == parent[value]) return value;

    return getParent(parent[value],parent);
}

int main() {
    vector<pair<int,pair<int,int> > > vec,solution;

    cout << "Enter Number of edges: ";
    int n;
    cin >> n;
    cout << "Enter U V W for each edge:\n";
    for(int i=0;i<n;i++) {
        int u,v,w;
        cin >> u;
        cin >> v;
        cin >> w;

        vec.push_back(make_pair(w,make_pair(u,v)));
    }

    sort(vec.begin(),vec.end());


    int parent[10000];
    for(int i=0;i<=10000;i++) parent[i] = i;

    int totalWeight = 0;
    for(int i=0;i<n;i++) {
        int u = vec[i].second.first;
        int v = vec[i].second.second;
        int parentU = getParent(u,parent);
        int parentV = getParent(v,parent);
        if(parentU != parentV) {
            solution.push_back(make_pair(vec[i].first,make_pair(u,v)));
            totalWeight += vec[i].first;
            parent[parentU] = parent[parentV];
        }
    }


    cout << "MST =>" << endl;
    for(int i=0;i<solution.size();i++) {
        int w = solution[i].first;
        int u = solution[i].second.first;
        int v = solution[i].second.second;

        cout << "\t" << u << " - " << v << " => " << w << endl;

    }

    cout << "--------------\nTotal Weight = " << totalWeight << endl;

    return 0;
}
