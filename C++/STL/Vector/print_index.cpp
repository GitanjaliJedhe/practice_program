#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> vectOfInt;
	
	for(int i = 0; i < 10; i++)
	{
		vectOfInt.push_back(i);
	}

	std::vector<int>::iterator it = vectOfInt.begin();
	while(it != vectOfInt.end())
	{
		cout<<*it<<" , ";
		it++;
	}
	cout<<endl;

	for(int i = 0; i < vectOfInt.size(); i++)
	{
		cout<<vectOfInt[i]<<" , ";
	}
	cout<<endl;

	exit(0);
}
