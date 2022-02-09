#include<iostream>
#include<cmath>
using namespace std;
int main() {
int basic;
char grade;
float hra;
float da;
float pf;
int allow;
float total;
cin >> basic >> grade;
hra = (20.0*basic) /100;
da = (50.0* basic) /100;
pf = (11.0* basic) /100;

if ( grade =='A') {
 allow =1700;
}
else if ( grade == 'B') {
allow = 1500;
}
else {
allow = 1300;
}
total = basic + hra + da + allow - pf;
cout << (int)round(total);
}
