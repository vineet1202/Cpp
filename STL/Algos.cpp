#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int>p1, pair<int,int>p2){
    if(p1.second < p2.second){
        return true;
    }
    else if(p1.second == p2.second){
        if(p1.first > p2.first) return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int a[] = {56,3,6,4,3,32,7};
    int n = 7;
    sort(a, a+n);
    
    // sort(v.begin(), v.end());

    sort(a, a+n, greater<int>());
   

    pair<int,int> arr[] = {{1,2}, {2,3}, {4,1}, {7,1}};

    sort(arr, arr+4, comp);  //sort in ascending order
    for(auto x: arr){
        cout << x.first << " " << x.second << endl;
    }

    string s = "123";
    while(next_permutation(s.begin(), s.end())){
        cout << s << endl;    //132 213 ..
    }

    int maxm = *max_element(a, a+n);

    int num = 7;
    int cnt = __builtin_popcount(num);  //3

}