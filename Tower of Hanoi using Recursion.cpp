
#include<bits/stdc++.h>
using namespace std;

void helperfunc(int n, char source, char auxiliary, char destination)
{
    if(n>0)
    {
        helperfunc(n-1,source, destination,auxiliary);
    	cout<<source<<" "<<destination<<endl;
    	helperfunc(n-1,auxiliary, source,destination);
// lOOK AT THE FORMAL ARGUMENTS, WRITE YOUR ACTUAL ARGUMENTS WRT THE FORMAL ARGUMENTS FOR EACH RECURSION.
// AN EASY TIP - JUST TAKE CARE OF THE SOURCE AND DESTINATION WRT THE FORMAL ARGUMENTS, THE AUXILARY WILL FOLLOW ACCORDINGLY.
    }
}
void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    helperfunc(n,source, auxiliary, destination);
}
int main()
{
    int n;
    cin >> n;
    towerOfHanoi(n, 'a', 'b', 'c');
}
