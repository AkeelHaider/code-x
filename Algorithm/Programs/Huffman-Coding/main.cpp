#include <iostream>
#include <queue>
#include <cctype>
using namespace std;
#define ROOT 0
#define CHILD 1
struct Node {
    int type;
    int index;
    int value;
    struct Node* left;
    struct Node* right;
};
void traverse(struct Node *root,string val) {
    if(root == NULL) return;
    if(root->type == ROOT) {
        string temp = val;
        traverse(root->left,temp+"0");
        traverse(root->right,temp+"1");
    }else{
        cout << "Character:" << ((char)(root->index + 'a')) << "\tValue: " << val << endl;
    }
}
int main() {
    string input;
    cout << "Enter Your String: ";
    getline(cin,input);
    int frequencyArray[26];
    for(int i=0;i<26;i++) frequencyArray[i]=0;
    for(int i=0;i<input.length();i++) {
        if(isalpha(tolower(input[i]))) frequencyArray[tolower(input[i]) - 'a']++;
    }
    priority_queue<pair<int,struct Node*>> priorityQueue;
    for(int i=0;i<26;i++) {
        if(frequencyArray[i] != 0) {
            struct Node *node = new struct Node;
            node->index = i;
            node->left = NULL;
            node->right= NULL;
            node->value = frequencyArray[i];
            node->type = CHILD;
            priorityQueue.push(make_pair(frequencyArray[i],node));
        }
    }
    while(priorityQueue.size() > 1) {
        pair<int,struct Node*> p1,p2;
        p1 = priorityQueue.top();
        priorityQueue.pop();
        p2 = priorityQueue.top();
        priorityQueue.pop();
        struct Node *node = new struct Node;
        node->type = ROOT;
        node->value = p1.first + p2.first;
        if(p1.first > p2.first) {
            node->right = p1.second;
            node->left = p2.second;
        }else {
            node->right = p2.second;
            node->left = p1.second;
        }
        priorityQueue.push(make_pair(node->value,node));
    }
    pair<int,struct Node*> p = priorityQueue.top();
    priorityQueue.pop();
    struct Node *root = p.second;
    traverse(root,"");
    return 0;
}
