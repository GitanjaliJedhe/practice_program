#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vect {10, 11, 20, 22, 30, 44};

	for(vector<int>::iterator it = vect.begin(); it != vect.end(); it++)
	{
		cout<<*it<<" , ";
	}	

	exit(0);
}
