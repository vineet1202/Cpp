#include <bits/stdc++.h>
using namespace std;

int main(){

    vector <int> v;
    v.push_back(3);
    v.push_back(4);
    v.emplace_back(2);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});

    vector<int> vi(5, 100);  //size is 5 with all elements 100
    vector<int> vii(5);  //default value is 0

    vector<int> myvec(v); // copies vector "v" into myvec

    // Iterators
    vector<int>::iterator itr = v.begin();
    //or
    auto it = myvec.begin();
    
    cout << *itr << endl;

    auto itre = v.end(); //Iterator to the element following the last element.
    cout << *itre ;  //large value
    itre--;
    cout << *itre;  //end value

    //Printing a vector
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " " ;
    }

    for(auto it: v){    //it is of type int
        cout << it << " ";
    }

    for(auto it = v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }

    // vector operations

    find(v.begin(), v.end(), 2); // returns iterator or last if no such element present TC - O(dist) dist=last-first
    
    v.erase(v.begin()+1);
    v.erase(v.begin()+2, v.begin()+4); //(start, end)

    v.pop_back(); 

    vector<int> v1 = {1,2};
    vector<int> v2 = {3,4};
    v1.swap(v2);
    //v1 - {3,4}
    //v2 - {1,2}

    v1.empty(); //false 
    
    v1.clear();  //erases the entire vector 

    

}