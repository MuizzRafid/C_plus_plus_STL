#include<bits/stdc++.h>
using namespace std;
                                                      //pair

/*int main(){
    pair<int,string> p;
   //p=make_pair(2, "abc");
   p={2, "abcd"};
   pair<int,string> &p1=p;// p1 is not copy of p instead reference
   p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3]; // we can easily make array by 3rd bracket
    p_array[0]={1,2};
    p_array[1]={2,3};
    p_array[2]={3,4};
    swap(p_array[0],p_array[2]);
    for (int  i = 0; i <3; i++)
    {
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    
}*/
        // How we can cin pairs
/*
int main(){
    pair<int,string> p;
    cin>>p.first;
    cout<<p.first<<endl;
}*/

                                                                   //VECTOR
       // Arrays of dynamic size is called vector
/*
void printVec(vector<int> v){
    cout<<"size :"<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector<int> v;
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        int x;
        cin>>x;
        printVec(v);// this line shows that vector is dynamic
        v.push_back(x);//O(1)           //push_back for vector input

    }
    //printVec(v);
}*/
/*
void printVec(vector<int> &v){
    cout<<"size :"<<v.size()<<endl;
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i] <<" ";
    }
    v.push_back(2);
    cout<<endl;
}
int main(){
                 //vector<int> v{10,3};//with this there are 10element and all element are 3
    vector<int> v;
    v.push_back(7);
    v.push_back(4);
 //printVec(v);   
// v.pop_back();//it will throw out the last element ande push_back add in the last and both are O(1)
 vector<int> v2=v;//0(n) //vector<int> &v2=v
 v2.push_back(5);
 printVec(v);
 printVec(v);
printVec(v2);
printVec(v2);
}*/
//string vector

/*void printVec(vector<string> v){
cout<<"size of v :"<<v.size()<<endl;
for (int i = 0; i <v.size(); i++)
{
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main(){
    vector<string> v;
    int n;
    cin>>n;
    for (size_t i = 0; i <n; i++)
    {
    string s;
    cin>>s;
    v.push_back(s);
    }
    printVec(v);
    
}*/