
// QUESTION ON MAP: Given N string print unique strings in lexiographical oreder with their frequency
// N<=10^5 & |5|<=100
// here i think string as a key and i increase the value in the time of
#if 0
int main(){
	map<string,int> m;
	int n;
	cin>>n;
	string s;

	for (int i = 0; i < n; ++i)
	{ 
				cin>>s;
		m[s]=m[s]+1;      //if in m[s]  there has no s yet it will return 0. we know m[] denotes to the key
	}
	for(auto pr:m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}
#endif

#if 1
void takeInput(map<int, string> &m)
{
  int key;
  cin >> key;
  string val;
  cin >> val;
  m[key] = val;
}
void printName(map<int, string> m)
{
  for (auto ele : m)
  {
    cout << "key:" << ele.first << " value:" << ele.second << "\n";
  }
  cout << "============" << endl;
}

int main()
{
  int n;
  cin >> n;
  map<int, string> m;

  for (int i = 0; i < n; i++)
  {
    int cmd;
    cin >> cmd;
    if (cmd == 0)
    {
      takeInput(m);
    }
    else if (cmd == 1)
    {
      cout << "Map output:" << endl;
      printName(m);
    }
    else
    {
      cout << "to give input P:0 or get output P:1" << endl;
      cout << endl;
    }
  }
}

#endif