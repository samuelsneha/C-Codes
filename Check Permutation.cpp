#include<bits/stdc++.h>
using namespace std;
/*bool checkpermutation( char str1[], char str2[] , char freq[])
 {

    int len1 = strlen( str1 );
    int len2 = strlen( str2 );
    if( len1 != len2 )
    {
        return false;
    }
    else
        for( int i=0; str1[i] != '\0'; i++)
        {
            int a = str1[i];
            freq[a]+=1;
        }
        for ( int j=0; str2[j]!='\0'; j++)
        {
            int a = str2[j];
            freq[a]-=1;
        }
        for ( int k=0; k <= 256; k++)
        {
            if( freq[k]!= 0)
                return false;

        }
           return true;


 }
int main()
{
    int size = 100;
    char str1[size];
    char str2[size];
    char freq[256] = {0};
    cin >> str1 >> str2;
    if (checkpermutation( str1, str2, freq ) == true)
      {
          cout << "true";
      }

      cout << "false";
}*/
///Using C String
/*bool isPermutation( char arr1[], char arr2[] )
{
    bool answer = false;
    int len1 = strlen( arr1 );
    int len2 = strlen( arr2 );
    if( len1 != len2 )
       return answer;

    for( int i = 0; arr1[i] != '\0'; i++ )
    {
        int j;
        for( j = 0; arr2[j] != '\0'; j++ )
        {
            if( arr1[i] == arr2[j] )
            {
                answer = true;
                arr2[j] = INT_MAX;/// TO TACKLE DUPLICATES.
                break;
            }
        }
        if ( arr2[j] == '\0' )/// THIS IS A VERY SMART LOGIC!! PROUD OF YOU !!
        {
          answer = false;
          return answer;
        }
    }
    return answer;
}
int main()
{
    char arr1[100], arr2[100];
    cin >> arr1 >> arr2;
    bool answer = isPermutation( arr1, arr2 );
    if ( answer )
        cout << " true ";
    else
        cout << " false ";
}*/
///String OBject
bool isPermutation( string str1, string str2 )
{
    bool answer = false;
    int len1 = str1.length();
    int len2 = str2.length();
    if( len1 != len2 )
       return answer;

    for( int i = 0; str1[i] != '\0'; i++ )
    {
        int j;
        for( j = 0; str2[j] != '\0'; j++ )
        {
            if( str1[i] == str2[j] )
            {
                answer = true;
                str2[j] = INT_MAX;/// TO TACKLE DUPLICATES.
                break;
            }
        }
        if ( str2[j] == '\0' )/// THIS IS A VERY SMART LOGIC!! PROUD OF YOU !!
        {
          answer = false;
          return answer;
        }
    }
    return answer;
}
int main()
{
    string str1, str2;
    //cin >> str1 >> str2;
    getline( cin, str1 );
    getline( cin, str2 );
    bool answer = isPermutation( str1, str2 );
    if ( answer )
        cout << " true ";
    else
        cout << " false ";
}
