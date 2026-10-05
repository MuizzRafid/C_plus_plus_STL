//like map set also use Red-Black tree and unordered set uses hash table like unordered map.

                  //UNORDERED SET

                              //we use US To check  a string is present or not cause take O(1)time 
                            //but in set it takes O(logn) //and duplicate is not allowed
#if 0
int main(){                     
	unordered_set<string> s;//O(Log(1))
	s.insert("abc");
	s.insert("bce");
	for(auto value:s){
		cout<<value<<endl; 
	}
}
#endif