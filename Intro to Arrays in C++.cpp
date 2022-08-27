///See Char Arrays in C++ end in null ('\0') while Int Arrays in C++ don't end in null('\0').
///It is compulsory to mention the size of both Int and Char Arrays in C++.
///Arrays can be 1D as well as 2D but Strings can be 1D only.

///To take input for Int arrays,  1) we always have to give the number of elements ie. n and then array of size n ie. int arr[n]. And since we give n, we never have to do strlen(arr) or a for loop to find its length.
///                               eg. int n;   int arr[n];   for( int i = 0; i < n; i++ ) {...}
///To take input for Char arrays, 2) we always declare the size of the array and most of the times since size is uncertain so we give a maximum and large number ie. size = 1e6. Then we give char array ie. char arr[size]. But since in actual the size of the array wont be 1e6 and we need to find out the actual size of the array we do strlen(arr) or a for loop till we encounter a null.
///                               eg. int size = 1e6;        char arr[size];        int n = strlen(arr);       for( int i = 0; i < n; i++ ) {...}
///In case of an Integer Array, suppose we want to take 5 elements as input, an array of size 5 will be good for this. In case of Character Arrays, if the length of the input is 5 then we would have to create an array of size at least 6, meaning Character Arrays require one extra space in the memory from the given size. This is because the Character Arrays store a NULL character at the last of the given input size as the mark of termination in the memory.

///Even through Characters are assumed to be single character such as 'a', 'b' etc. But in reality even a single word can be considered as a character (and a string also). Like there will be many questions in CN where input will be a single word you will use a Char Array instead of String datatype.

///To convert Char to String there are many ways: 1) char x;         2) name_of_string.append( size, char );      3) name_of_string.assign( size, char );
///                                                  string s;
///                                                  s += x;

/// '\0' == 0, 1 > null, 0 == null, -1 < null (while compairing null with integers)

///To take the input for a 2D array:
///     int m, n;
///     cin >> m >> n;
///     int **a = new int *[m]; //Make a habit to understand and implement this when you have to pass 2D Array to the function as a parameter.
///     for( int i = 0; i < m; i++ ){
///     a[i] = new int[n];//Make a habit to understand and implement this when you have to pass 2D Array to the function as a parameter.
///     for( int j = 0; j < n; j++ ){
///            cin >> a[i][j];
///            }
///        }
///If we want to pass this array to a function, we can simply pass the name of the array as we did in the case of 1D arrays. But in the function definition, we can leave the first dimension empty, though the second dimension always needs to be specified.

///Arrays	can	be	passed	to	a	function	as	an	argument. When	an	array is	passed	as	an argument, only the starting address	of	the	array gets passed to the function as an argument. Since, only the starting address gets passed to the function as opposed to whole array, the size of the array	cannot	be	determined	in	function using sizeof operator.Hence,the arrays	that are passed	as an argument to a	function must always be	accompanied	by its size	as	another	argument.
///Syntax	of	the	function call to pass an array	: function_name(array_name,	array_size);



//Write about how you take input for both, find length for both, how one word can also be a char array like Sneha is also char array, convert char to string.
// Also type how you discovered '\0' == 0, 1 > null, 0 == null, -1 < null (while compairing null with integers), how arrays can be 1D as well as 2D but strings are only 1D,  how to take input for 2D arrays.
