#include <iostream>
using namespace std;

int main()
{
	// char greet[8] = {'w','e','l','c','o','m','e', '\0'};
	// char greet[] = "Welcome";
	// string greet = "welcome";
	// int length;
	// string greet1 = "Hello";
	// string greet2 = ", world!";
	// string greet3 = greet1 + greet2;
	// length = greet3.size();
	string strg ("Here is a long sentence in a string.");
	cout << strg << '\n';

	// strg.erase(10,5);
	// cout << strg << '\n';

	strg.erase(strg.begin() + 8);
	cout << strg << '\n';

	strg.erase(strg.begin() + 9, strg.end() - 9);
	cout << strg << '\n';

	// cout << "the length of the combined strings is: " << length << "\n";

	// cout << "The Length of the string is: ";
	// cout << greet.size() << "\n";
}