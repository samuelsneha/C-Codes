#include <bits/stdc++.h>
using namespace std;

//int main()
//{
//    int num;
//    cin >> num;
//    int sum = 0;
//    int i = 1;
//    while( num != 0)
//    {
//        while ( num > 0 )
//        {
//            sum = (3 * i) + 2;
//            i++;
//            if ( sum % 4 != 0 )
//            {
//              cout << sum << " ";
//              num--;
//            }
//        }

//    }
//}

int main(){
    int x, product = 0, count = 0;
    //cout << "Enter the value of x";
    cin >> x;
    for( int i = 1; count < x; i++ ){
        product = 3*i + 2;
        if( product % 4 != 0 ){
            count++;
            cout << product << " ";
        }
    }
    return 0;
}
