
#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int, int>> &v)
{
	cout << "size of v :" << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].first << " " << v[i].second << endl;
	}
	cout << endl;
}

int main()
{
	vector<pair<int, int>> v = {{1, 2}, {2, 3}, {3, 4}};
	printvec(v);
}

int main()
{
	// pair usually come with 2 which is pair
	pair<string, int> pp;
	pp = make_pair("julie", 7);

	cout << pp.first << endl;

	pp.first = "simbah";

	pp.second = 2;

	cout << pp.first << endl;

	// add more then 2 value in pair

	// name , age, weight

	pair<string, pair<int, float>> NAW;
	NAW.first = "july";
	NAW.second.first = 7;
	NAW.second.second = 3.5;

	NAW = make_pair("simbah", make_pair(2, 3.8));
	cout << NAW.second.second << endl;

	pair<int, string> p;
	// p=make_pair(2, "abc");
	p = {2, "abcd"};
	pair<int, string> &p1 = p; // p1 is not copy of p instead reference
	p1.first = 3;
	cout << p.first << " " << p.second << endl;
	int a[] = {1, 2, 3};
	int b[] = {2, 3, 4};
	pair<int, int> p_array[3]; // we can easily make array by 3rd bracket
	p_array[0] = {1, 2};
	p_array[1] = {2, 3};
	p_array[2] = {3, 4};
	swap(p_array[0], p_array[2]);
	for (int i = 0; i < 3; i++)
	{
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}

	//                        Pair In Vector
	vector<pair<int, int>> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y)); // or v.push_back({x,y}) //taking input of vector pair
	}
	printvec(v);

	return 0;
}
