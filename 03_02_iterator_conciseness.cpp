#include <bits/stdc++.h>
using namespace std;

// iterator use in short by after or c++ 11
#if 0
                                      //range base loop
int main(){
vector<int> v={1,2,3,4,5};
//range base loops
for (int &value : v)
{
    //if i use value++ it still not change the vaule of element in v untill i use & before value
    value++;
   cout<<value<<" ";
}cout<<endl;
for (int value :v)
{
    cout<<value<<" ";//on the top for loop we use value++ it work for &(reference)without
                     //it useless cause it copy 
}cout<<endl;

int arr[]={3,4,5,6,7};

for(int &itarr:arr){ //test it by adding & and remove it
    itarr++;
    cout<<itarr<<" ";
}cout<<endl;
for(int itarr:arr){
    
    cout<<itarr<<" ";
}


cout<<endl;

}
#endif
// pair with value
#if 0

int main(){
    vector<int> v={1,2,3,4,5};
    vector<pair<int,int>>  v_p={{1,2},{2,3},{3,4}};
    for (pair<int,int> &value :v_p)
    {
    cout<<value.first<<" "<<value.second<<endl;
    }
   
    cout<<endl;

  
}
#endif
// AUTO

// auto keyword dynamically determine data type and it also assume pair
// auto is great helpfull for pair and 2d,3d vector cause it can assume easily

#if 1

int main()
{
  auto a = 1.0;
  cout << a << endl;
  vector<int> v = {1, 2, 3, 4, 5};

  cout << &(*v.begin()) << endl;
  for (auto it = v.begin(); it != v.end(); ++it)
  {
    cout << (*it) << " ";
  }
  cout << endl;
  for (auto a : v)
  {
    cout << a << " ";
  }
  cout << endl;
  vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
  for (auto &value : v_p) // Auto + range base loop
  {
    cout << value.first << " " << value.second << endl;
  }
}
#endif