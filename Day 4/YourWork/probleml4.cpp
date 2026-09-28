#include <bits/stdc++.h>
using namespace std;

int main() {
   vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
vector<int> v2;
v2 = v1;
    for(int i =0;i<v2.size();i++) {
        cout << v2[i] << " ";
    }
    
    return 0;
}
