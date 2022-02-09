#include<bits/stdc++.h>
using namespace std;
/// 1) THIS IS HINT VIDEO METHOD 2 WHERE WE ARE PLACING THE 0TH INDEX AT THE OUTPUTS.
/*void helperfunc( string input, string output )
{
    if( input.length() == 0)
    {
        cout << output<< endl;
        return;
    }
    for( int i =0; i <= output.length(); i++ )
    {
        helperfunc( input.substr(1), output.substr( 0, i) + input[0] + output.substr(i) );// (0,i) means 0 to i-1; (i) means from the ith index till the end of the array
    }
}//if you look at the output carefully of every branch, you will realize that we do take the entire of the previous outputs to the the current output. So its output.substr( 0 ,i ) and output.substr(i) ie. including the entire output. Then we add the 0th element of the current input string.
void printpermutations( string input )
{

    string output = "";
    helperfunc( input, output);
} */

/// THIS IS THE FIRST METHOD OF THE HINT VIDEO WHERE WE ARE CHOOSING FROM THE INPUTS THE 0TH INDEX.
void returnPer(string input, string output)
{
   	if(input.length() == 0) // B.C is very simple ie. if length is 0 then we have hit the end and so just print whatever outputs you have
    {
        cout << output << endl;
        return;
    }

    //returnPer(input.substr(1), output);
   	for(int i = 0; i < input.length(); i++)
    {
        returnPer(input.substr(0,i)+input.substr(i+1) , input[i]+output );
                     //  " "       +     //bc       ,      // a +  " "  - for the first iteration ie. i = 0.
                    // a           +    // c        ,     // b  +  " "  - for the second iteration ie. i = 1.
                   // ab           +   // " "       ,     // c  +   " " - for the third iteration ie. i = 2.
    }
}

void printPermutations(string input)
{
  string output = "";
  returnPer( input, output);
}

int main()
{
    string input;
    cin >> input;
    printPermutations( input );
}
