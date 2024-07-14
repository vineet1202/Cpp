#include <bits/stdc++.h>
using namespace std;

int main(){
    //sorted and uniuqe elements

    set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    //operations - take O(logn) time

    // find() - returns an iterator if found else returns end()
    auto it = s.find(4); 

    s.erase(5);
    auto it1 = s.find(2);
    auto it2 = s.find(4);
    s.erase(it1, it2); // [first, last) - {4,5}

    int ctr = s.count(3); //returns 0 or 1
    cout<<ctr<<endl;

    auto itr1 = s.lower_bound(3);  
    cout << *itr1; //4

    auto itr2 = s.upper_bound(3);
    cout << *itr2; //4

    // unordered set - unsorted and unique
    //works in O(1) on avg and O(n) in worst case
    //all op are same except bound operations
    unordered_set<int> st;

    // Multiset - sorted and multiple values
    multiset<int> m;
    m.insert(1);
    m.insert(1);
    m.insert(1);
    m.insert(1);
    //{1,1,1,1}

    m.erase(1); //{}

    m.erase(m.find(1));  //remove element pointed to by iterator

}