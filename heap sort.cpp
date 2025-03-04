#include<iostream>
#include<queue>
#include<vector>
using namespace std;
void heap(vector<int> &v) {
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int ele : v) {
        pq.push(ele);
    }
    int start=0;
    cout << "Elements in Min Heap order: ";
    while (!pq.empty()) {
      //  cout << pq.top() << " ";  // smallest element
        v[start]=pq.top();
        pq.pop();
        start++;
    }
    
    cout << endl;
}
int main() {
    vector<int> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    heap(v);
    for(int ele: v ) cout<<ele<<"   ";
}
