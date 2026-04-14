#include<iostream>
#include <string>
#include <vector>
#include <list>
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
}


int main(){
    // pairOps();
    // vectorOps();
    listOps();
}
