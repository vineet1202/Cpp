#include <bits/stdc++.h>
using namespace std;

int main(){
    // key:value 
    
    //unique keys in sorted order

    map<int,int> mp;

    map<int, pair<int,int>> mpp;

    mp[1] = 2;
    mp.insert({3,1});

    for(auto it: mp){
        cout << it.first << " " << it.second << "\n";
    }
    //1 2
    //3 1

    mp[1]; //2
    mp[5]; //5

    auto itr = mp.find(3);
    // cout<< (*itr).second; //1

    auto itrr = mp.find(5); //mp.end()

    mp.insert({4,3});
    mp.insert({5,7});
    mp.insert({8,9});

    auto it1 = mp.lower_bound(9);
    auto it2 = mp.upper_bound(3); 

    //erase, swap, size, empty same

    // multimap
    // allows duplicate keys but sorted

    // unordered_map
    //not sorted- unique keys but not sorted

    //comparator function

}