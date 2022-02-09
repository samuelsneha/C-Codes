#include<bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector <int > v;//Statically declaring
//    vector < int > * v = new vector < int> ();// Dynamically declaring

    // To insert elements into the vector
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    // Updating the elements in the vector
    v[1] = 100;
    v[2] = 2000;
    v[3] = 500;
    // To print the elements in the vector
    // cout<< v[0] << endl;
    //cout << v[1] << endl;
    //cout << v[ 2 ] << endl;
    // Size Function
    cout << " Size of the vector is :" << v.size() << endl;
    // AT Function, A SAFER AND BETER OPTION COMOARED TO  SQUARE BRACKETS BECAUSE, we get an error if we pass an index which is not in range
    cout << v.at(2) << endl;
//    cout << v.at(4) << endl;
//    cout << v.at(6) << endl;
    // To delete the elements in the vector
    v.pop_back(); // This will delete the last element in the vector. We dont need to mention the element/index.
    // To print the elements in the vector
    for( int i =0; i < v.size(); i++ )
    {
        cout<< v[i]<< endl;
    }
    // Capacity Function. Also try to understand the difference between capacity and size function.
    for( int i =0; i < 100; i++ )
    {
        cout << "Capacity of the vector is:" << v.capacity() << endl;
        cout << " Size of the vector is:"  << v.size() << endl;
        v.push_back( i + 1 ) ;
    }

    // Don't use square brackets to insert elements. Reason you know, if you have forgotten then refer to your notes.
}
