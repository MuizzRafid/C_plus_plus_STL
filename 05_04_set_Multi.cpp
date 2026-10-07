#include<bits/stdc++.h>
using namespace std;

                //MULTISET
                  //multiset can be use against priroty que
                 //duplicate is allowed and return 1st iterator

#if 0

void print(multiset<string> &s){
	for(string value : s){
		cout<<value<<endl;
	}
}

int main(){
	multiset<string> s;
	s.insert("abc");  //O(log(N))
	s.insert("fed");
	s.insert("dfd");
	s.insert("abc");
	auto it= s.find("abc");
	// if(it !=s.end()){ // this will delete only one cause iterator locate one location
	// 	s.erase(it);
	// }
	s.erase("abc");   // this will delete every "abc"
	print(s);
}

#endif