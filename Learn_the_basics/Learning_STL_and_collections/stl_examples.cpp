#include<iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
using namespace std;

void pairOps(){
    pair<int,int> p;
    p={1,2};
    cout<<p.first<<" " << p.second<<endl;
    
    cout<<"-------------"<<endl;
    
    pair<int,int> p1[]={{1,2},{2,3}};
    cout<<p1[0].first<<" " << p1[0].second<<endl;
}

void iteratorOps(vector<int> v,std::vector<pair<int,int>> vec,vector<int> v2,std::vector<int> v1){
    cout<<"-------------"<<endl;
    for(vector<int>::iterator it = v.begin();it!=v.end();it++){
        cout<<*(it)<<endl;
    }
    cout<<"-------------"<<endl;
    for(auto it = vec.begin();it!=vec.end();it++){
        cout<<it->first<<endl;
    }
    cout<<"-------------"<<endl;
    for (auto it:v2){
        cout<< it<<endl;
    }
    cout<<"-------------"<<endl;
    for (auto it:v1){
        cout<< it<<endl;
    }
}

void vectorOps(){
    
    vector<int> v;
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.emplace_back(3);
    
    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(5,6);
    
    vector<int> v2(5,100);
    
    std::vector<int> v1(v);
    
    iteratorOps(v,vec,v2,v1);
    
    cout<<"------*------"<<endl;
    v.erase(v.begin()+2);
    for (auto it:v){
        cout<< it<<endl;
    }
    cout<<"-----**------"<<endl;
    v.erase(v.begin(),v.begin()+2);
    for (auto it:v){
        cout<< it<<endl;
    }
    cout<<"-----***-----"<<endl;
    v.insert(v.begin(),10);
    for (auto it:v){
        cout<< it<<endl;
    }
    cout<<"----****-----"<<endl;
    v.insert(v.begin()+2,3,51);
    for (auto it:v){
        cout<< it<<endl;
    }
    cout<<"-------------"<<endl;
    int s=v.size();
    cout<< "size= "<<s<<endl;
    cout<<"-------------"<<endl;
    cout << "pop() and clear() Ops..."<<endl;
    v.pop_back();
    v2.clear();
    cout<<"-------------"<<endl;
    if(v2.empty()) cout<<"Clear"<<endl;
}
void listOps(){
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);
    ls.push_back(4);
    ls.emplace_back(5);
    
    ls.push_front(0);
    ls.emplace_front(9);
    
    int bck = ls.back();
    cout<<"-------------"<<endl;
    for(int it:ls){
        cout<<it<<endl;
    }
    cout<<"-------------"<<endl;
    cout<< bck << endl;
    cout<<"-------------"<<endl;
    for(list<int>::reverse_iterator it=ls.rbegin();it!=ls.rend();++it){
        cout<<*it<<endl;
    }
}
//Same for dequeue
void stackOps(){
    stack<int> st;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);
    
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    int tops = st.top();
}
void queueOps(){
    queue<int> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(5);
    cout<<"-------------"<<endl;
    cout<<q.back()<<endl;
    cout<<"-------------"<<endl;
    cout<<q.front()<<endl;
    cout<<"-------------"<<endl;
    q.pop();
    
    cout<<q.front()<<endl;
}
void setOps(){
    set<int> st;
    
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(3);
    st.insert(4);
    st.emplace(5);
    cout<<"-------------"<<endl;
    for (set<int>::iterator it = st.begin(); it != st.end(); ++it) {
        cout << *it << " ";
    }
    cout<<endl;
    cout<<"-------------"<<endl;
    st.erase(2);
    auto it1 = st.find(1);
    auto it2 = st.find(4);
    st.erase(it1,it2);
    for (int x : st) {
        cout << x << " ";
    }
    cout<<endl;
    cout<<"-------------"<<endl;
    auto it = st.find(4);
    cout<<*it<<endl;
    //All other functions same as Vector
    auto itr1 = st.upper_bound(2);
    auto itr2 = st.lower_bound(2);
    

}
//Multiset is same as set.
//Unordered set is also same 

void mapOps(){
    map<int,int> mp;
    
    mp[1] = 2;
    mp.emplace(3,4);
    mp.insert({2,4});
    // mp[{2,3}] = 10; valid case when map<pair<int,int>,int>
    cout<<"-------------"<<endl;
    for(auto it:mp){
      cout<< it.first<<":"<<it.second<<endl;
    }
   cout<<"-------------"<<endl;
}
//multimap is same as map
//unordered map is same as map


int main(){
    // pairOps();
    // vectorOps();
    // listOps();
    // stackOps();
    // queueOps();
    // setOps();
    mapOps();
}
