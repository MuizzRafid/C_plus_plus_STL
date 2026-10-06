//like map set also use Red-Black tree and unordered set uses hash table like unordered map.
//unordered set doesn't guaranty that the value will be sorted
                  //UNORDERED SET

                              //we use US To check  a string is present or not cause take O(1)time 
                            //but in set it takes O(logn) //and duplicate is not allowed
//set = unique + ordered
//unordered_set = unique + fast average lookup
#if 0
int main(){                     
	unordered_set<string> s;//O(Log(1))
	s.insert("abc");
	s.insert("zza");
	s.insert("cce");
	s.insert("hello");
	for(auto value:s){
		cout<<value<<endl; 
	}
}
#endif