/// \t is treated as a single character rather than two different characters. So is \n.
/// \t means 4 spaces, so it should be implemented more than " " to avoid errors. \n means new line.
/// Cel = (( F - 32 ) * 5 ) / 9

#include<bits/stdc++.h>
using namespace std;

void printTable( int s, int e, int w )
{
    for( int i = s; i <= e; i = i + w)
    {
        int celsius = ( i - 32 ) *  5/9 ;
        cout << i <<'\t' << celsius << endl;
    }
}
int main()
{
    int s, e, w;
    cin >> s >> e >> w;

    printTable ( s, e, w );
}





/*int main()
{
    int S,E,W;
    cin >> S >> E >> W;

    int cel = ((S - 32) * 5)/9;// Dont forget to put brackets for 5 also
    cout <<  S << '\t' << cel << endl; //REMEMBER \t >>>  " ". We can avoid errors if we use \t.
    int sum = S;
  while( sum <= E )
    {
        sum = sum + W;
       if ( sum <= E )
       {
         int cel = ((sum - 32) * 5)/9;
         cout << sum << '\t' << cel << endl;
       }
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
int S;
int E ;
int W ;
int Cel;
int i = S;
cin >> S>>E>>W;
for (i=S; i <= E; i= i+W ) {
    Cel = (( i-32)*5)/9.0;
    cout << i << "\t" << Cel << endl;
}
  //  cout << i << " " << Cel;

}*/
