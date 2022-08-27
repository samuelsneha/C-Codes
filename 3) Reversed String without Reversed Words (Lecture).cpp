#include<bits/stdc++.h>
using namespace std;
/*int length( char str[] )
{
  int count =0;
  for ( int i =0; str[i] != '\0'; i++)
  {
      count++;
  }
    return count;
}
char reversedstringwithreversedwords ( char str[] )
{
 int len = length( str );
 int end = len -1;
 char temp; //DONT DO THE MISTAKE OF INITIALIZING THIS TEMP AS INT AS HERE NOW ITS CHAR
 for ( int i=0; i < end; i++) // DONT DO THE MISTAKE OF THE CONDITTION
  {
    temp = str[i];
    str [i] = str[end];
    str [end] = temp;
    end--;
  }
  return str;
}
void reversedstring ( char str[])
{   int len = length( str );
   str = reversedstringwithreversedwords(str);

   int start =0;
   for ( int i=0; i < len; i++)
   {
     if ( str[i] == ' ')
     {
         int last = i-1;
         reversedstringwithrversedwords ( str, start, last );
         start = i +1;
     }
   }
}
int main()
{
    char str[100];
    cin.getline( str, 100);
    reversedstringwithreversedwords( str );
    cout << str;
}*/

/*int length(char* str)
{
  int count =0;
  for ( int i =0; str[i] != '\0'; i++)
  {
      count++;
  }
    return count;
}
void reversedstringwithreversedwords (char* str, int s, int e) /// You have to reverse from index s to index e s = 0, e = len-1
{
 char temp; //DONT DO THE MISTAKE OF INITIALIZING THIS TEMP AS INT AS HERE NOW ITS CHAR
 for ( int i=s; i <= e; i++) // DONT DO THE MISTAKE OF THE CONDITTION
  {
    temp = str[i];
    str [i] = str[e];
    str [e] = temp;
    e--;
  }
}
void reversedstring (char* str)
{
    int len = length(str);
    reversedstringwithreversedwords(str, 0,len-1); // Full reversal we added 2 params one is start index and one is ending index
    /// for full reversal 0 - (len-1);

   int start =0;
   for ( int i=0; i <= len; i++)
   {
     if ( str[i] == ' ' || str[i] == '\0') //  SPACE AND NULL CHAR AS WELL (pos-1) => end of word .... -> we'll reverse word s - (pos-1)
     {
         int last = i-1;
         reversedstringwithreversedwords ( str, start, last);
         start = i +1;
     }
   }
}
int main()
{
    char str[1000];
    cin.getline(str, 1000); // add spaces

    reversedstring(str);

    cout << str;
}*/

/*
void reverseWords(char input[],int start,int end){
    while(start<end){
        char temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
}
void reverseStringWordWise(char input[]) {
    int i=0;
    int j=strlen(input)-1;
    int len=strlen(input);
    while(i<j){
        char temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
// Reverse Words Indivisually
    int start=0;
    int end=0;
    for( i=0;i<len;i++){
        if(input[i]==' '){
            end=i-1;
            reverseWords(input,start,end);
            start=i+1;
            end=i+1;
        }
    }
    end=i-1;
    reverseWords(input,start,end);
}*/

/* void reverseStringWordWise( char input[] )
 {
/// THIS IS THE FIRST PART OF THE CODE FROM BELOW
     int count = 0;
     for( int i = 0; input[i] != '\0'; i++ )
     {
        count++;
     }
     int j = count - 1;
     for( int i = 0; i <= j ; i++, j-- )
     {
        char temp = input[i];// Dont do the mistake of putting this temp as int here.
        input[i] = input[j];
        input[j] = temp;
     }
/// THIS IS THE SECOND PART OF THE CODE FROM BELOW
     int current = 0, ei = 0, start = 0 ;
     while( input[current] !=  '\0'  )
     {
// REMEMBER: THIS IS HOW YOU REPRESENT SPACE - ' ', IN SINGLE QUOTES. NOT IN DOUBLE QUOTES.
        while( input[current] !=  ' ' && input[current] != '\0')// You want a condition when you will come out of a loop. Try implementing || and see you wont get the correct answer. && is required.
        {
           current++;
        }
        ei = current - 1;
        for( start ; start <= ei; start++, ei-- )
        {
           char temp = input[start];// Dont do the mistake of putting this temp as int here.
           input[start] = input[ei];
           input[ei] = temp;
        }
        start = current + 1;
        current = start;
     }
// input[start] = '\0';
     return;
}
 int main()
 {
     char input[1000];
     cin.get( input, 1000 );
     reverseStringWordWise( input );
     cout << input;
     return 0;
 }*/
void reverseStringWordWise( string input ){
    int length = input.length();
    int z = length - 1, start = 0;
    for( int i = 0; i <= z; i++, z-- ){
        int temp = input[i];
        input[i] = input[z];
        input[z] = temp;
    }
    for( int i = 0; i <= length; i++ ){
        if( input[i] == ' ' || input[i] == '\0' ){
            int end = i - 1;
            for( int j = start; j <= end; j++, end-- ){
                int temp = input[j];
                input[j] = input[end];
                input[end] = temp;
            }
            start = i + 1;
        }
    }
}
int main(){
   string s;
   getline( cin, s);
   reverseStringWordWise(s);
   cout << s;
}
