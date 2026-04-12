/*
4 Pillars of STL
Algorithms
Containers
Functions
Iterators

std::pair
  `pair comes under Utility library
  `std::pair<int,int); -> pair of two int
  `printing pair -> p.first, p.second
  `pair<int,pair<int,int>> p = {1,{2,3}}
  `pair<int,int>arr[] = {{1,2},{2,3}}

std::vector ( CONTAINER 1 )
  `vector<int> v;
  `v.push_back(2);
  `v.emplace_back(2);
  `std::vector<pair<int,int>> vec; -> vec.pushback({1,2}); vec.eplace_back(1,2);
  `std::vector(5,100) means [100,100,100,100,100]
  `std::vector(5); -> vector of size 5.
  `copying a vector -> std::vector<int> v1(vec);

**std::iterator
  `std::vector<int>::iterator itr = v.begin(); itr is pointer to the address of first element in vector
  `itr is address if printed directly, we need to derefrence it using '*'. printing value of itr -> cout<<*(itr);
  `vector<int>::iterator it = v.end(); -> this it points to address after the last element of the vector
  `vector<int>::iterator it = v.rend() -> this it points to address before the first element of the vector
  `vector<int>::iterator it = v.rbegin() -> this points to the last element of the vector.
  `v.back(); -> gives last element
  `ex - for printing vector -> for(vector<int>::iterator it=v.begin();it!=v.end();it++){
                                cout<<*(it);
                                }
  `ex - for printing vector -> for(auto it=v.begin();it!=v.end();it++){
                                cout<<*(it);
                                }
  `ex - for printing vector -> for(auto it:v){
                                cout<<*(it);
                                }
  `ERASE -> v.erase(position);
            v.erase(start, end+1); -> start is the starting element to be deleted, end+1 means give +1 position till you want to delete from start

  `INSERT -> v.insert(start position,value); -> this inserts the value to position does not replace it. ex - v.insert(v.begin(),10);
             v.insert(start position,occurances,value) -> this inserts value*occurances times in the vector from the start position. ex - v.insert(v.begin()+1,2,10); inserts 10...2 times
             consider vector new[10,19], ex -> v.insert(v.begin(), new.begin(),new.end()) -> this will insert whole new vector to v
  `v.size();
  `v.pop_back(); -> remove last element
  `v.swap(v1); -> both vector elements will be swapped;
  `v.clear(); remove entire vector
  `v.empty(); returns true or false depending on vector not empty or empty respectively.

std::list


             
*/
