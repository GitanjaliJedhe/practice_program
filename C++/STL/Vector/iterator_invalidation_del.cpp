#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vec;

	for(int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	for(auto it = vec.begin(); it != vec.end(); it++)
	{
		cout<<(*it)<<" , ";
	}
	cout<<endl;
	
	auto it = find(vec.begin(), vec.end(), 3);
	if(it != vec.end())
		it = vec.erase(it);

	for(; it != vec.end(); it++)
		cout<<(*it)<<" , ";

	exit(0);
}
