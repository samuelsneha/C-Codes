#include<bits/stdc++.h>
using namespace std;

class Polynomial {
    public:
    int *degCoeff;      // Name of your array (Don't change this)
    int capacity;

    Polynomial(){
        this->degCoeff=new int[3];
        this->capacity=3;// Minimum Req so that it doesnt holds garbage, then  once we get to know its exact size then PC
    }
    //Making paramaterized constructor for defining with capacity so that we can efficiently store the result of the operations we will be doing like the result of addition.
    // By making a PC we can store the result more efficiently than by going to DC and then doubling the capacity , copying and all.
    // ALso remember that at one time only 1 constructor will be working. Initiallly DC and then PC.

    Polynomial (int capacity){
        this->degCoeff=new int[capacity];//capacity is storing size. So if size is 5 then make an array of size 5 where 4 will be highest index. =
        this->capacity=capacity;
    }

    Polynomial (Polynomial const &p)
    {
        int *newdeg = new int[p.capacity];// Because whatever is thesize given, that much only array we need to make and its highest degree will be 1 less.

        for(int i=0;i< p.capacity;i++)// suppose 5 is the size the, copy indexes 0 to 4.
            newdeg[i]=p.degCoeff[i];

        this->degCoeff=newdeg;

        this->capacity=p.capacity;
    }

    void setCoefficient(int deg,int coef){
        if(deg >= capacity)// If size is 5 ( ie. o to 4 degrees) and then 5th degree / greater than 5 is asked then we will have to increase
        {
            int newcapacity=deg + 1;// Whatever is your degree asked, the capacity ( size required to accomodate them) will always be +1.
            int *newdeg=new int[ newcapacity];// Making an array of size which is equal to 1 + highest degree asked.
            //Copy the contents from original to new
            for(int i=0;i < capacity;i++)// If size is 5 then 0 to 4 indexes we have to copy.
                newdeg[i]=degCoeff[i];

            this->degCoeff=newdeg;
            this->capacity=newcapacity;
            //Set the new coeff;
            degCoeff[deg]=coef;
        }
        else
        {
            degCoeff[deg]=coef;
        }
    }

    Polynomial operator+(Polynomial const &P2)
    {

        int newcap=max(this->capacity,P2.capacity);

        Polynomial P3(newcap);

        for(int i=0;i< newcap;i++)
        {// if, else, else if could be done in while loop also . The way it was done in Merge Sort.
            if( i <  capacity && i < P2.capacity )
                P3.degCoeff[i]=this->degCoeff[i]+P2.degCoeff[i];
            else if(i< capacity)
                P3.degCoeff[i]=this->degCoeff[i];
            else
                P3.degCoeff[i]=P2.degCoeff[i];
        }

        return P3;
    }
    //Remember , capacity is NOT THE NUMBER OF TERMS. IT IS HIGHEST DEGREE  + 1 WHICH IS EQUAL TO THE SIZE WE WILL NEED TO ACCOMODATE ALL OF THEM.
    Polynomial operator-(Polynomial const &P2)
    {
        int newcap = max(this->capacity,P2.capacity);
        // acc to 1st sample input, this capacity ( P1 ) will have 6 and p2 capacity will have 4
        Polynomial P3(newcap);

        for(int i=0;i< newcap;i++)
        {
            if(i< capacity && i< P2.capacity)
                P3.degCoeff[i]=this->degCoeff[i]-P2.degCoeff[i];

            else if(i <capacity)// if suppose extra terms are in P1 ie. first polynimial eg. (2x3 + x4 ) - x3
                P3.degCoeff[i]=this->degCoeff[i];
            else //if extra terms are in P2, the 2nd polynomial eg. ( 2x3 ) - x3 + x4
                P3.degCoeff[i]=-P2.degCoeff[i];
        }

        return P3;
    }

    Polynomial operator*(Polynomial const &P2)
    {

        int newcap=this->capacity+P2.capacity;
        Polynomial P3(newcap);

        for(int i=0;i< this->capacity;i++){

            for(int j=0;j< P2.capacity;j++){
                P3.degCoeff[i+j] = P3.degCoeff[i+j] + this->degCoeff[i]*P2.degCoeff[j];
// Suppose x3 * x4 = x12 then at 12th index you out the product of the coefficients right whcich is here
// And then the add them to your whatever was stored in that index originally.
            }
        }
        return P3;
    }

    void operator=(Polynomial const &p){
        int *newdeg=new int[p.capacity];
        //Copy the contents
        for(int i=0;i<p.capacity;i++)
            newdeg[i]=p.degCoeff[i];


        this->degCoeff=newdeg;

        this->capacity=p.capacity;
    }

    void print(){

        for(int i=0;i < this->capacity;i++){
            if(degCoeff[i]!=0)
                cout<<degCoeff[i]<<"x"<<i<<" ";
        }
        cout<<endl;
    }

};
// THE TRUE AND FALSE IN THE MAIN CODE OF COPY CONSTRUCTOR AND ASSIGNMENT OPERATOR ARE JUST TO CHECK WHETHER THE COPYING WORK IS DONE PROPERLY OR NO.
// IF WE GET THE OUTPUT AS FALSE THEN IT MEANS THAT COPYING HAS NOT BEEN DONE PROPERLY AND IF COPYING HAS BEEN DONE PROPERLY THEN IT WILL RETURN TRUE.

int main()
{
    int count1,count2,choice;
    cin >> count1;

    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }

    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }

    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }

    cin >> count2;

    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }

    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }

    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }

    cin >> choice;

    switch(choice){
            // Add
        case 1:
        {
            Polynomial result1 = first + second;
            result1.print();
            break;
        }
            // Subtract
        case 2 :
        {
            Polynomial result2 = first - second;
            result2.print();
            break;
        }
            // Multiply
        case 3 :
        {
            Polynomial result3 = first * second;
            result3.print();
            break;
        }
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }

        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }

    }

    return 0;
}





