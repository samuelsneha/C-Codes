#include<bits/stdc++.h>
using namespace std;

int helper(int input[],int si,int ei,int element)// UNDERSTAND WHY YOU REQUIRE A HELPER FUNCTION. REFER TO NOTES FOR MORE INFO.
{       if(si>ei) // This is the base condition. Base Condition should always be inside the helper function.
       {
         return -1;
       }

        int mid = ( si + ei ) / 2; //UNDERSTAND WHY ITS OK TO DECLARE MID IN THE HELPER FUNCTION.REFER TO NOTES FOR MORE INFO.
        if( input [ mid ] == element )
        {
            return mid;
        }
        else if ( element < input[ mid ] )
        {
            int throws = helper( input, si, mid-1,element);
           // return throws;
        }
        else if ( element > input[ mid ])
        {
            int throws = helper( input, mid + 1, ei,element );
           // return throws;
        }

 }

int binarySearch(int input[], int n, int x)
{
    if(n==0) // This is not the base condition. Just random condition. You can delete it also. Wont make any difference.
    {
        return -1;
    }

    int start=0;// UNDERSTAND WHY START AND END CANT BE DECLARED IN THE HELPER FUNCTION. REFER TO NOTES FOR MORE INFO.
    int end=n-1;
    int catching= helper(input,start,end,x);
    return catching;

}
int main()
{
    int input[100000],length,element;
    cin >> length;
    for(int i =0; i < length ; i++ )
    {
        cin >> input[i];
    }
    cin >> element;
    int ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
