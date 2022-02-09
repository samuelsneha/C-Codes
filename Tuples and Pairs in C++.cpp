//There can be some instances where you need to return multiple values (maybe of different data types ) while solving a problem.
//We can declare the function with return type as pair or tuple and pack the values to be returned and return the packed set of values.
//The returned values can be unpacked in the calling function.
//Tuple:a) A tuple is an object which holds a collection of elements of a different datatypes.
//      b) Class template std::tuple is a fixed-size collection of heterogeneous values.
//      c)  Tuple can also be used to return two values instead of using pair .
//Pair: a) This class couples together a pair of values, which may be of different datatypes.
//      b) A pair is a specific case of a std::tuple with two elements

#include<bits/stdc++.h>
using namespace std;

// A Method that returns multiple values using
// tuple in C++.
tuple<int, int, char> foo(int n1, int n2)
{
	// Packing values to return a tuple
	return make_tuple(n2, n1, 'a');
}

// A Method returns a pair of values using pair
std::pair<int, int> foo1(int num1, int num2)
{
	// Packing two values to return a pair
	return std::make_pair(num2, num1);
}

int main()
{
	int a,b;
	char cc;

	// Unpack the elements returned by foo
	tie(a, b, cc) = foo(5, 10);

	// Storing returned values in a pair
	pair<int, int> p = foo1(5,2);

	cout << "Values returned by tuple: ";
	cout << a << " " << b << " " << cc << endl;

	cout << "Values returned by Pair: ";
	cout << p.first << " " << p.second;
	return 0;
}
