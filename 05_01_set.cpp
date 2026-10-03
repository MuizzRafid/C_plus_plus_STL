#include<bits/stdc++.h>
using namespace std;
#if 1
void printS(set<string> &s){
	for(string value :s){
		cout<<value<<endl;
	}


}

void printI(set<int> &s){
	for(auto it=s.begin(); it!=s.end(); it++){
		cout<<(*it)<<endl;
	}
}
int main(){
	set<string> s;
	s.insert("abc");//O(log(n))
	s.insert("bcd");
	s.insert("cde");
	s.insert("abc"); //abc will not print cause set print unique element
	printS(s);
	auto it=s.find("abc");//O(log(n))//to access perticular value we use .find() and it will give iterator
	if(it !=s.end()){
		//cout<<(*it);
		s.erase(it);   //erase can work two was 1)by using a iterator 2)by directly on a inputed string
	}
	s.erase("bcd");
	printS(s);

	set<int> intset;
	intset.insert(3);
	intset.insert(2);
  intset.insert(1);
  intset.insert(4);

  printI(intset);

}
#endif 
//QUESTION: Given N string,print unique string in lexiographic order N<=10^5 |5|<=100000
#if 0
void print(set<string> &s){
for(string value:s){
	cout<<value<<endl;
}
}

int main(){
int n;
cin>>n;
set<string> s;
for (int i = 0; i < n; ++i)
{
string str;
cin>>str;
s.insert(str);
}
print(s);
}
#endif