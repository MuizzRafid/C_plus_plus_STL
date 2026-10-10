#include<bits/stdc++.h>
using namespace std;

                //QUESTION AC WITH MULTI SET , WA WITH SETS
//1<=T<=10,1<=N<=10^5,0<=K<=10^5,0<=Ai<=10^10
#if 0
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset<long long> bags;
		for (int i = 0; i < n; ++i) //N log(N)
		{
			long long candy_ct;
			cin>>candy_ct;
			bags.insert(candy_ct);
		}
		long long total_candies=0;
		for (int i = 0; i < k; ++i)//K log(N)
		{
			auto last_it=(--bags.end());//we write -- first cause first it decrease then it will assign
			//last_it--;
			long long candy_ct=*last_it;
			total_candies +=candy_ct;
			// if i erase by a value like 2 or 6 it will delete every 2 or 6 present in the multiset 
			//instead iterator just delete only one location where the value store    
			bags.erase(last_it);  //for iterator O(1) for value O(log(N))
			bags.insert(candy_ct/2);//O(log(N))
		}
		cout<<total_candies<<endl;
			}
}
#endif
 
#if 0
int main(){
	int t;
	cin>>t;
	while(t--){
int n,k;
cin>>n>>k;
multiset<long long>bags;
for (int i = 0; i < n; ++i)
{
	long long candy_ct;
	cin>>candy_ct;
	bags.insert(candy_ct);
}
long long total_candies=0;
for (int i = 0; i < k; ++i)
{
	auto last_it=(--bags.end());
	long long candy_ct=(*last_it);
      total_candies +=candy_ct;
      bags.erase(last_it);
      bags.insert(candy_ct/2);

}

cout<<total_candies<<endl;
}
}
#endif