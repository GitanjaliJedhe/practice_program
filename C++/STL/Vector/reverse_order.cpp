#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vect_of_num {1, 3, 5, 7, 9};
	
	// Using indexing
	for(int i = vect_of_num.size() - 1; i >= 0; i--)
	{
		cout<<vect_of_num[i]<<" , ";
	}
	cout<<endl;

	// Using reverse iterator
	vector<int>::reverse_iterator it = vect_of_num.rbegin();
	while(it != vect_of_num.rend())
	{
		cout<<*it<<" , ";
		it++;
	}
	cout<<endl;

	// Single line (for_each(start, end, callback))
	for_each(vect_of_num.rbegin(), 
		vect_of_num.rend(),
		[](const auto &elem) {
			cout<<elem<<" , ";
		});

	exit(0);
}
