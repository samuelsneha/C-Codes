#include <bits/stdc++.h>
using namespace std;
/*int main () {
int x;
int i=1;
int output =0;
int count=1;
cin >> x;
while( count <= x){
output = (3*i)+2;

if ( output % 4 == 0){
i++;
output = ( 3*i)+2;
cout << output << " ";
count++;
}
else {
cout << output << " ";
count++;
   }
i++;
  }
}
*/

int main()
{
    int num;
    cin >> num;
    int sum = 0;
    int i = 1;
    while( num != 0)
    {
        while ( num > 0 )
        {
            sum = (3 * i) + 2;
            i++;
            if ( sum % 4 != 0 )
            {
              cout << sum << " ";
              num--;
            }
        }

    }
}
