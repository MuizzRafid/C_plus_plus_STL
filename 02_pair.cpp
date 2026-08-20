
#include<bits/stdc++.h>
using namespace std;

int main()
{
//pair usually come with 2 which is pair
	pair<string,int>p;
	p=make_pair("julie",7);

	cout<<p.first<<endl;

	p.first="simbah";
	p.second=2;

	cout<<p.first<<endl;

//add more then 2 value in pair

	//name , age, weight



	pair<string,pair<int,float>>NAW;
	NAW.first="july";
	NAW.second.first=7;
	NAW.second.second=3.5;

	NAW=make_pair("simbah",make_pair(2,3.8));
	cout<<NAW.second.second<<endl;
	
	return 0;
}
