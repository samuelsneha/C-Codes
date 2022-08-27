#include<iostream>
using namespace std;

int main(){
    int S, E, W;
    int Cel = 0;
   // cout << "Enter the values of S,E,W" << endl;
    cin >> S >> E >> W;
    //for( int S; S <= E; S = S+W ){ //THIS FOR LOOP WAS CAUSING TIME-LIMIT EXCEEDED ERROR, SO REPLACED IT WITH FOR LOOP
    while( S <= E ){
        Cel = ((S -32)*5)/9;
        cout << S << " " << Cel << endl;
        S = S + W;
    }

}
















