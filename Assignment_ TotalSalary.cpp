#include<iostream>
#include<cmath>
using namespace std;
//int main() {
//int basic;
//char grade;
//float hra;
//float da;
//float pf;
//int allow;
//float total;
//cin >> basic >> grade;
//hra = (20.0*basic) /100;
//da = (50.0* basic) /100;
//pf = (11.0* basic) /100;

//if ( grade =='A') {
// allow =1700;
//}
//else if ( grade == 'B') {
//allow = 1500;
//}
//else {
//allow = 1300;
//}
//total = basic + hra + da + allow - pf;
//cout << (int)round(total);
//}

int main(){
    int basic = 0, allow = 0;
    float hra = 0, da = 0, pf = 0, totalSalary = 0;  /* or 0.0f or 0.0 */
    char grade;
    // cout << "Enter the basic salary and grade";
    cin >> basic >> grade;
    hra = (20.0/100.0)*basic;  /*OR float(20.0)/float(100.0)*/
    da = (50.0/100.0)*basic;
    pf = (11.0/100.0)*basic;
    if( grade == 'A'){
        allow = 1700;
    }
    else if ( grade == 'B'){
        allow = 1500;
    }
    else{
        allow = 1300;
    }
    // cout << hra << " " << da << " " << pf << " ";
    totalSalary = basic + hra + da + allow - pf;
    cout << round(totalSalary); //HERE IF WE USE 'CEIL'/'FLOOR' WE GET SLIGHTLY DIFFERENT OUTPUTS, 'ROUND' PERFECTLY DOES THE WORK
}
