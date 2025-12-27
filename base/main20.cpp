#include <iostream>
#include <stack>
#include <queue>
#include <deque>
#include <unordered_map>
#include <map>
#include <set>

using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    // Node* head = nullptr;
    // Node* newNode = new Node{10, nullptr};
    // head = newNode;

    // cout << "The value of the first node is: " << head->data << endl;

    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // cout << s.top();
    // s.pop();
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // cout << q.front() << " ";
    // q.pop();


    // deque<int> dq;
    // dq.push_back(1);
    // dq.push_front(2);
    // cout << dq.front() << " ";
    // dq.pop_front();

    // unordered_map<string, int> hashtable;
    // hashtable["apple"] = 10;
    // hashtable["banana"] = 20;
    // cout << hashtable["apple"] << endl;

    // map<string, int> mymap;
    // mymap["apple"] = 100;
    // mymap["banana"] = 20;
    // cout << mymap["apple"] << endl;

    set<int> myset;
    myset.insert(10);
    myset.insert(20);
    myset.insert(5);

    for (int i : myset) {
        cout << i << " ";
    }
 
    return 0;
}