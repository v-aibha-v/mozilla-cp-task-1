#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    vector<int> v = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    sort(v.begin(),v.end());
    for(int ele: v ) cout<<ele<<"   ";
}
