#include <bits/stdc++.h>
using namespace std;
// MAPS
// Maps use trees(a balanced binary search tree , to more precise Red-Black tree) for inbuild
// implementation,so all stored in a sorted order based on their key where unordered_map use hash table
// Elements are not stored in any specific order.
// Here time complexity of insertion and exertion is O(log(n)).for string it may become O(Llog(n)).
// for unorderd map insert, delete,search avarge O(1) ,worst case O(n)
// can use hard data type cause they are define internally
#if 0
int main(){  // Map is a data structure which store key value pair one data for key and one for value
	          //which store key crospond data and also map store string lexicographically
map<int,string> m;
           //insertion of map
//m is a object. so in auto we first need the address of each element
m[1]="abc";  
m[5]="cdc";
m[3]="acd";//map take to insert O(log(n)) time
m.insert({4,"afg"});

map<int,string> :: iterator it;
//first it has the firt memory node of m
//by *it -> dereferences the iterator. It goes to that node and gives you the actual pair object.
//(*it).first accesses the .first member (the key) of that pair.
for (it=m.begin(); it!=m.end(); ++it)// we use ++ cause data in map not store continuesly
{
	cout<<(*it).first<<" "<<(*it).second<<endl;
	//cout<<it->first<<" "<<it->second<<endl;


}
for(auto &pr:m){
	cout<<pr.first<<" "<<pr.second<<endl;
}

}

#endif
// Also keys store sorted order in map and value too
#if 1
void print(map<int, string> &m)
{ // it exeicute like vector
  cout << "size: " << m.size() << endl;
  for (auto &pr : m)
  { // the time of excese also O(log(n))
    cout << pr.first << " " << pr.second << endl;
  }
}
int main()
{
  map<int, string> m;
  m[1] = "abc"; // O(log(n)) and the exersion time also O(log(n))
  m[5] = "bdc";
  m[3] = "efg";
  m[5] = "bde";
  // auto it=m.find(3);//it will return iterator if their has no value on 3 it will
  // return m.end() means iterator after the existing value iterator
  auto it = m.find(6); // this search also O(log(n))
  if (it != m.end())
    ;
  // erase can take number or iterator and if we use it which not exist give error
  // m.erase(3);     //O(log(n))
  // m.erase(it);
  // m.clear();
  if (it == m.end())
  {
    cout << "no value" << endl;
  }
  else
  {
    cout << "have value: " << (*it).first << " " << (*it).second << endl;
  }
  print(m);
}
#endif