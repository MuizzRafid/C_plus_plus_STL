#include<bits/stdc++.h>
using namespace std;

int main(){
	std::vector<int> v(4,2);
v.push_back(7);
v.push_back(8);
v.pop_back();//O(1)
v.erase(v.begin()+2);//O(n)
vector <int> w2={3,4,9,0,4,2};


	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
cout<<endl<<endl;
//in gcc the initial size is the capacity . after that it doubles not to do with 4 ->8->16. 
	//if the initail capacity 6 then the next is 12 and so on 


	cout<<"capacity is w2 "<<w2.capacity()<<endl;

	cout<<"capacity of v "<<v.capacity()<<endl; 
	cout<<"size of v "<<v.size()<<endl;
	v.clear();//O(n);
	cout<<"size of v now "<<v.size()<<endl;

	//same way rbegin() is the last position.
	//and rend() is the position before the first element




	cout<<"capacity of v now "<<v.capacity()<<endl;

	w2.push_back(32);// adding new element grow the size of vector
	cout<<"capacity of w2 now "<<w2.capacity()<<endl; // 12 -> double of 6



	cout<<"empty "<<v.empty()<<endl;// means 1=true if 0 means false there is some element there

    cout<<"front w2 "<<w2.front()<<endl;
     cout<<"back w2 "<<w2.back()<<endl;


     //begin gives the same result like front but end give different result then back
     //end means back + 1; 
     for (auto i= w2.begin(); i !=w2.end(); ++i)
     {
     	cout<<*i<<" ";
     	     }
     	     cout<<endl<<endl;


                // SORT


     	    sort(w2.begin(), w2.end(),greater<int>());

      for (auto i= w2.begin(); i !=w2.end(); ++i)
     {
     	cout<<*i<<" ";
     	     }


     	        //SEARCH



}

//You get an error because w2.end() does not return a printable number or
// value; it returns an iterator object, which std::cout does not know how to print. w2.end() is a position not value