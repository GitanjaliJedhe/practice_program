#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

void removeAllMatchingElements_nonEfficient(vector<int> &vec, int elem) {
	vector<int>::iterator it = vec.begin();
	while(it != vec.end())
	{
		if(*it == elem)
		{
			it = vec.erase(it);
		}
		else 
		{
			it++;
		}
	}
}

void displayVector(vector<int> &vec)
{
	vector<int>::iterator it = vec.begin();
	while(it != vec.end())
	{
		cout<<(*it)<<" , ";
		it++;
	}
	cout<<endl;
}

void removeAllMatchingElements_Efficient(vector<int> &vec, int elem) {
	vec.erase(remove(vec.begin(), vec.end(), elem), vec.end());
}

int main()
{
	int arr[] = {1, 2, 5, 4, 5, 6, 5, 8, 9};

	vector<int> vec_1(arr, arr+9);
	removeAllMatchingElements_nonEfficient(vec_1, 5);
	displayVector(vec_1);

	vector<int> vec_2(arr, arr+9);
	removeAllMatchingElements_Efficient(vec_2, 5);
	displayVector(vec_2);

	exit(0);
}
