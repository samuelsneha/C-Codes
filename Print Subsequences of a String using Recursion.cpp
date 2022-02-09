#include <iostream>
using namespace std;

void print_subs(string input, string output)
 {
	if (input.length() == 0) // if (input.empty()== 0 )
    {
		cout << output << endl;
		return;
	}

	print_subs(input.substr(1), output);// first function call to the  same input.  Here the user has taken the decision to not include the input in the output.
	print_subs(input.substr(1), output + input[0]);// second function call to the same input.Here the user has taken the decision to include the input in the output.
// Initially we used to make only 1 recursive call at bc, but now we are making two recursive calls with two decisions.
// Here first we are making the decisions of including it ( first character of i/p) and not including it and leaving the rest to recursion. It then further hits the base condition.
// Initially we used to return the outputs for bc ,work on it and then return it. Here we are not returning the outputs of bc we get initially. We are just making the decisions and let recursion do its work till the base condition is hit.
}


int main() {
	string input;
	cin >> input;
	string output = "";
	print_subs(input, output);
}
