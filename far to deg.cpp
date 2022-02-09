#include<iostream>
using namespace std;
int main(){
int S;
int E ;
int W ;
int Cel;
int i = 0;
cin >> S >> E >> W ;
for ( i= i+S; i <= E; i= i+W ) {
    Cel = (( i-32)*5)/9;
    cout << i << "\t" << Cel << endl;
}
    //cout << i << " " << Cel << endl;

}
















