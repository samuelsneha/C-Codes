/// \t is treated as a single character rather than two different characters. So is \n.
/// \t means 4 spaces, so it should be implemented more than " " to avoid errors. \n means new line.
/// Cel = (( F - 32 ) * 5 ) / 9

#include<bits/stdc++.h>
using namespace std;

//void printTable( int s, int e, int w )
//{
//    for( int i = s; i <= e; i = i + w)
//    {
//        int celsius = ( i - 32 ) *  5/9 ;
//        cout << i <<'\t' << celsius << endl;
//    }
//}
//int main()
//{
//    int s, e, w;
//    cin >> s >> e >> w;

//    printTable ( s, e, w );
//}

void fahrenheitToCelsius( int start, int end, int steps ){
    for( int i = start; i <= end; i = i + steps ){
        int Celsius = (( i - 32 ) * 5) / 9;
        cout << i << " " << Celsius;
        cout << endl;
    }
}

int main(){
    int start, end, steps;
    cin >> start >> end >> steps;
    fahrenheitToCelsius( start, end, steps );
    return 0;
}



