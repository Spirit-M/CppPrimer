// exceed.cpp -- exceeding some integer limits
#include <iostream>
#include <climits>				// defines INT_MAX as largest int value

#define ZERO 0					// makes ZERO symbol for 0 value

int main()
{
	using namespace std;
	short sam = SHRT_MAX;		// initlialize a variable to max value
	unsigned short sue = sam;	// okay if variable sam already defined

	cout << "Sam hsa " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl
		<< "Add $1 to each account." << endl << "Now";
	sam = sam + 1;
	sue = sue + 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;

	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl;
	cout << "Take $1 from each account." << endl << "Now ";
	sam = sam - 1;
	sue = sue - 1;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Lucky Sue!" << endl;
	cin.get();
	return 0;
}