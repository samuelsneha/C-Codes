#include<bits/stdc++.h>
using namespace std;
void compressstring( char str[], int freq[] )
{
    char res;
    int i;
    int a;
    for( int i=0; str[i] != '\0'; i++ )
    {
            a = str[i];
            freq[a] = freq[a] + 1;
    }

       for(int i=0;i<256;i++)
{
        if(freq[i]>0) // cause we want to print only those characters whose frequencies are 1,2,3 and so on  We dont want to print the ones with 0 frequency ie. the ones which are not in the string.
      {
            res=i;
            cout<<res<<freq[i];
      }
}
    //cout <<  res << ' ' <<  freq[a];


}
int main()
{

    int freq[256] = {0};
    char str[100];
    cin >> str;
    compressstring( str , freq );

}
