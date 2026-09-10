#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int> &v)
{
  cout << "size of v :" << v.size() << endl;
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}
// array of vector
#if 0
int main(){
    //array of vector
    //vector<int> v[10];//now become 10 vector
int n;
cin>>n;
vector <int> v[n];


for (int i = 0; i < n; ++i)
{
    int n2;
    cin>>n2;
    for (int j = 0; j < n2; ++j)
    {
        int value;
        cin>>value;
        v[i].push_back(value);
    }
}

for (int i = 0; i < n; ++i)
{
    for (int j = 0; j < v[i].size(); ++j)
    {
      cout<<v[i][j]<<" ";
   }cout<<endl;
}

cout<<endl;
for (int i = 0; i < n; ++i)
{
    printvec(v[i]);
}


}
#endif
// vector of vector
#if 1

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> v;
  for (int i = 0; i < n; i++)
  {
    int n2;
    cin >> n2;
    // vector<int>temp;  //vector of vector has no index so that we can push_back so first we
    // need to creat a vector like temp than try to push it to the vector
    v.push_back(vector<int>());
    for (int j = 0; j < n2; j++)
    {
      int value;
      cin >> value;
      // temp.push_back(x);
      v[i].push_back(value);
    }
    // v.push_back(temp);
  }
  v[0].push_back(10); // this will push 10 in the end of 1st vector we can use cause early we decide a vector and push to it

  v.push_back(vector<int>()); //****BY THIS WE PUSH A EMTEY VECTOR IN THE VECTOR

  for (int i = 0; i < v.size(); i++)
  {
    cout << "vector no:" << i << " ";
    printvec(v[i]);
  }
  cout << v[0][1]; // 0 th vector's 1st element
}
#endif