#include<bits/stdc++.h>
using namespace std;

///1) Using Pass by Value
/*void replaceString( string input )
{
    input = " Now this is the updated string ";
    return ;
}
int main()
{
    string input;
    getline( cin , input );
    replaceString( input );
    cout << input;
    return 0;
}
///2) Using pass by Reference
void replaceString( string &input )
{
    input = " Now this is the updated string ";
    return ;
}
int main()
{
    string input;
    getline( cin , input );
    replaceString( input );
    cout << input;
    return 0;
}

///3) Using Pass by Value and String return type
string replaceString( string input )
{
    input = " Now this is the updated string ";
    return input;
}
int main()
{
    string input;
    getline( cin , input );
    string answer = replaceString( input );
    cout << input << endl;
    cout << answer;
    return 0;
}*/
///4) Using Pass by Reference and String return type
string replaceString( string &input )
{
    input = " Now this is the updated string ";
    return input;
}
int main()
{
    string input;
    getline( cin , input );
    string answer = replaceString( input );
    cout << input << endl;
    cout << answer;
    return 0;
}

