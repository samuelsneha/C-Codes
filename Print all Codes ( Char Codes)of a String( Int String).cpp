#include<bits/stdc++.h>
using namespace std;

void helper(string input,string output)
{
    //just the simple base case. If you get the string empty it means you have hit the end, so just print the output.
    if(input.empty())
    {
        cout << output << endl;
        return;
    }
    int first = input[0] -'0';// from the sample input, converting 1 which is the element at 0th index to int.
    char x = 'a' + first - 1; // then converting that int 1 to char a ie. mapping
    helper(input.substr(1),output + x);// calling the first recursive calls with 123 and 1 as the parameters.
    int second = (input[0] - '0')*10 + (input[1] - '0');
    //the above line works as: ( 1 -'0') ie. converting 0th element to its integer form. Then multiply it with 10 ie. 1*10 = 10.
    // Then add the integer form of the 1st index element ( 1 - '0') to 10.
    // So, 1*10 + 1 = 11
    if(second >= 10 && second < 27)// checking the condition whether it fits or no.
    {
        char x2 = 'a' + second - 1;// converting second ie.11 into its char form to map.
        helper(input.substr(2),output + x2);// calling the second recursive function with 23 and 11 in its parameters.
    }
}
void printAllPossibleCodes(string input) {
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.
    */
    string output;
    output = "";
    helper(input,output);
}

int main()
{
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}
