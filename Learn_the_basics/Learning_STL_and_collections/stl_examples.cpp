#include<iostream>
#include <string>
#include <vector>
using namespace std;

void pairOps(){
    pair<int,int> p;
    p={1,2};
    cout<<p.first<<" " << p.second<<endl;
    pair<int,int> p1[]={{1,2},{2,3}};
    cout<<p1[0].first<<" " << p1[0].second;
}

void iteratorOps(vector<int> v,std::vector<pair<int,int>> vec,vector<int> v2,std::vector<int> v1){
    
}

void vectorOps(){
    vector<int> v;
    v.push_back(2);
    v.emplace_back(3);
    std::vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(5,6);
    vector<int> v2(5,100);
    std::vector<int> v1(v);
    iteratorOps(v,vec,v2,v1);
}


int main(){
    pairOps();
    vectorOps();
}
