#include<bits/stdc++.h>
using namespace std;
/*int length ( char str[] )
{
        int count = 0;
        for( int i=0; str[i] != '\0'; i++)
        {
            count++;
        }
        return count;

}
void trimspaces( char str[]) //string trimspaces ( char str[] )
{
       int j=0;
       int len = length( str );
       for( int i=0; i < len; i++ )
      {
        if ( str[i] != ' ') //DONT DO THE MISTAKE OF PUTTING SPACES AS " "
        {
               str[j] = str[i];
               j++;
        }

      }
      str[j] = '\0';
      //return str;


}
int main()
{
    int size = 100;
    char str[size];
    cin.getline( str, 100 );
    trimspaces( str );
    cout << str;
    // cout << str;
}*/

/// 1) Approach when you are focussing on the  non spaces.

/*void trimSpaces( char input[] )
{
    int j = 0;
   for( int i = 0; input[i] != '\0'; i++ )
   {
     if( input[i] != ' ' )
     {
       input[j] = input[i];
       j++;
     }
   }
   input[j] = '\0';// Suppose the string is Sneha Samuel/0. Then after the for loop is executed we get SnehaSamuell because one index element is still left to be filled and some gaebage gets printed there till we get null character. So its necessary to put null ny ourselves when we finish. Do dry run and check yourself.
// Eg. Sneha Aniket- so after your for loop t comes in place of e and after t its null so we come out of the for loop. So t has been copied at e's place but what about the t which is still at its original place. That original t still remains there only and since we have come out of the for loop nothing can be done done and this SnehaAnikett gets printed which is the wrong string. So once we come out of the for loop we put null after the last element we copied.
    return;
}*/
/// 2) Approach when you are focussing on the spaces.

void trimSpaces( char input[] )
{
 for( int i = 0; input[i] != '\0'; i++ )
 {
     if( input[i] == ' ' )
     {
       int j;
       for( j = i + 1; input[j] != '\0'; j++ )
       {
           input[j - 1] = input[j];
       }
         input[j - 1] = '\0';// We usually put this after every left shifting.
         i--;// This we are doing because suppose Sneha   Samuel is the string. When the first space is encountered, all the elements from its right are shifted one step towards its left. So now there is some character that has come in the place of the first space. Earlier we incremented i and moved on to the next index without checking the character which has come now in the place of first space is space or nonspace character. So to check the character which has come onto the place of first character is space or non space we do i-- and then i++ happens inside the for loop so basically we are at the same index and we check whether the current index element is space or non space. If its space then shifting happens and if it is non space then it doesnt enter the if statement.
     }
 }
}

int main()
{
    char input[100];
    cin.get( input, 100 );
    trimSpaces( input );
    cout << input;
}
