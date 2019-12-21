#include <iostream>

using namespace std;

int global = 0;

int main()
{
	short int automatic = 0;
	short int* dynamic;
	dynamic = new short int;

	cout << "automatic "   << &automatic << endl
		 << "dynamic   "   << dynamic   << endl
		 << "global    "   << &global    << endl;
}


