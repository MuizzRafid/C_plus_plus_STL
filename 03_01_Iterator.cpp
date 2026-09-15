#include <bits/stdc++.h>
using namespace std;

// iterator are for non-random-access container. like maps, sets, linkedList . if i try to use
// for loop for them then it might become O(n2)

// ITERATORS

#if 1
int main()
{
  vector<int> v = {2, 3, 5, 7};
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;                           // end() function point place after the last element where have nothing
  vector<int>::iterator it = v.end() - 1; // to be specified more we use v.begin and without it,work as well
  cout << (*it) << endl;
  for (it = v.begin(); it != v.end(); ++it)
  {
    cout << (*it) << " ";
  }
  cout << endl;
  // Requires both type and size: <type, size>
  array<int, 5> arr = {1, 2, 3, 4, 5};

  array<int, 5>::iterator arrit;
  for (arrit = arr.begin(); arrit != arr.end(); arrit++)
  {
    cout << *arrit << " ";
  }
  cout << endl;

  // explicit type: Raw pointer (int*) is the iterator

  int *arrit2;
  for (arrit2 = begin(arr); arrit2 != end(arr); ++arrit2)
  {
    cout << *arrit2 << " ";
  }
  cout << endl;
  // the easiest way to use auto
  for (auto arrit = std::begin(arr); arrit != std::end(arr); ++arrit)
  {
    cout << *arrit << " ";
  }
  cout << endl;
}
#endif
// iterator on vector pair
#if 0
int main(){
    vector<pair<int,int>> v_p={{1,2},{2,3}};
    vector<pair<int,int>> ::iterator it;
    for ( it = v_p.begin(); it !=v_p.end(); ++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
     for ( it = v_p.begin(); it !=v_p.end(); ++it)
    {
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }
    array<int>::iterator it;
    
    
}
#endif