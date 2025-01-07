#include <bits/stdc++.h>
using namespace std;

int main() {

int x;
cin >> x;

vector<int> inp(x, 0);
for(int i = 0; i < x; i++) {
    cin >> inp[i];
}

for(auto val : inp) {
    cout << val << endl;
}

unordered_map<int, vector<int>> graph;
for(int i = 0; i < x; i++) {
    graph[inp[i]].push_back(inp[i]);
}
}
