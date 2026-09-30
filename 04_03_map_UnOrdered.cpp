//When passing an `unordered_map` directly by reference (`&m`), C++ creates an alias for the original 
// map, allowing the function to access and modify the underlying data directly without creating an 
// expensive copy. The primary advantage of this approach is safety and clean syntax: references cannot
//  be `nullptr`, which completely removes the risk of null-pointer dereferencing errors, and you can 
// interact with the map using standard object syntax without needing dereference operators. This makes 
// pass-by-reference the standard, idiomatic choice in C++ whenever a function strictly requires a valid
// container to operate on.

//When passing a pointer by value (`*pv`), the function receives a copy of the memory address pointing 
// to the map. The main benefit of this approach is flexibility, as it allows you to pass `nullptr` when
// an argument is optional or conditional. While the function can still modify the map's contents 
// through dereferencing (`*pv`), any attempt to reassign the pointer itself to a different address 
// will only affect the local copy inside the function, leaving the caller's pointer in `main()` 
// untouched. This provides a safety layer when you want to allow pointer access without accidentally 
// altering where the original pointer points.

//When passing a pointer by reference (`*&pr`), the function receives a direct alias to the caller's 
// pointer variable rather than a copy of the address. The key benefit here is full authority over both 
// the data and the pointer itself: the function can not only modify the map's contents, but it can also
// rebind the caller's pointer to a completely new memory location or set it to `nullptr`. This 
// capability makes passing pointers by reference essential for low-level memory management, dynamic 
// memory allocations, and managing pointer-based data structures like linked lists or binary trees 
// where node pointers must be redirected directly in place.

#include<bits/stdc++.h>
using namespace std;
                                  //UNORDERED__MAP
                      //Maps use trees for inbuild implementation where unordered_map use hash table
                                //here time complexity of insertion and exertion become O(1)
                                //cann't use hard data type cause they are not  define internally

#if 1

void printUnorderedMap(unordered_map<int,int> &m,unordered_map<int,int> *pv,unordered_map<int,int> *&pr){

for (auto it:m)
{
cout<<it.first<<"  "<<it.second<<endl;
}
for(auto it2:*pv){
	cout<<it2.first<<" "<<it2.second<<endl;
}
for(auto it2:*pr){
	cout<<it2.first<<" "<<it2.second<<endl;
}

}

void printUM(unordered_map<string,int>m){
	cout<<"size "<<m.size()<<endl;

	for (auto it:m)
	{
		cout<<it.first<<" "<<it.second<<endl;
	}

}
 int main(){
 unordered_map<int,int> m;
 m[1]=32;
 m[42]=23;
 m[3]=42;
 m[4]=9;
 //printUnorderedMap(m);

 unordered_map<string,int> m2;
 m2["alpha"]=10;
 m2["gama"]=7;
 m2["beta"]=5;
 printUM(m2);
 }
 #endif
 // QUESTINO :Given N string and Q queries in each query you are given a string print frequency of that string 
 //N<-10^6 & |5| <= 100 & Q <= 10^ 6
 /*int main(){
	int n;
	cin>>n;
	unordered_map<string,int> m;
	for (int i = 0; i < n; ++i)
	{
	string s;
	cin>>s;
	m[s]=m[s]+1;
	}
	int q;
	cin>>q;
	while(q--){
		string s;
		cin>>s;
		cout<<m[s]<<endl;
	}
 }*/
 #if 0
int main(){
	map<int,string> m;

	m[4]="hell0";
	cout<<m[4]<<endl;
m[1]="daf";
for(auto p:m){
	cout<<p.first<<" "<<p.second<<endl;
}
}
#endif