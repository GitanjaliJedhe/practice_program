#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> vecOfStr;

	cout<<"Size of vector "<<vecOfStr.size()<<endl;
	
	vecOfStr.push_back("Gitanjali");
	vecOfStr.push_back("Dilip");
	vecOfStr.push_back("Jedhe");

	for(string str : vecOfStr) {
		cout<<str<<endl;
	}

	cout<<"Size of vector "<<vecOfStr.size()<<endl;
	
	exit(0);
}
