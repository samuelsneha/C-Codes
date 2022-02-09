#include<bits/stdc++.h>
using namespace std;
#include<stack>

bool isBalanced(string input)
{
    if ( input[0] == ')' || input[0] == '}' || input[0] == ']' )
    {
        return false;
    }

    stack<char> s;

    int i = 0;
    while(i < input.size())
    {
        if ( input[i] == '(' || input[i] == '{' || input[i] == '[' )
        {
            s.push(input[i]);
            i++;
        }


        if (input[i] == ')')
        {

            if (s.empty())// If closing brackets are more than opening brackets.
            {
                return false;
            }

            if(s.top() == '(') // If the brackets are not mapped to the correct bracket.
            {
                s.pop();
                i++;
            }
            else
            {
                return false;
            }
        }

        else if (input[i] == ']')
        {

            if (s.empty()) // If closing brackets are more than opening brackets.

            {
                return false;
            }

            if (s.top() == '[') // If the brackets are not mapped to the correct bracket.
            {
                s.pop();
                i++;
            }
            else
            {
                return false;
            }
        }

        else if (input[i] == '}')
        {

            if (s.empty()) // If closing brackets are more than opening brackets.

            {
                return false;
            }

            if (s.top() == '{')// If the brackets are not mapped to the correct bracket.
            {
                s.pop();
                i++;
            }
            else
            {
                return false;
            }
        }
        // else
       //     i++;  For cases where you want to input non brackets and non  empty strings as input.
       // But remember, for the cases of brackets as inputs you wont get the right answer.
       // So basically you cant deal with both types of inputs in a single same code. Else create a new code with more conditions to handle all types of inputs.

    }


    if (s.empty()) // If opening brackets are more than closing brackets AND input is an empty string.
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}
