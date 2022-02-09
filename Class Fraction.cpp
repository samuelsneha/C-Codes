#include<bits/stdc++.h>
using namespace std;

class Fraction
{
    int numerator;
    int denominator;
    public:
    Fraction( int numerator,  int denominator)
    {
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    void print()
    {
        cout << this -> numerator << "/" << this -> denominator << endl;
    }
    void simplify()
    {
        int gcd =1;
        int j = min( this-> numerator, this-> denominator );
        for( int i=1; i <= j; i++ ) //Initially this i was 0 because of which you didn't get the answer.
        {
           if( this-> numerator%i == 0 && this-> denominator%i == 0)
           {
               gcd =i;
           }
        }
        this-> numerator = this-> numerator / gcd;
        this-> denominator = this-> denominator / gcd;
    }
    void add(Fraction const &f2)
    {
        int lcm = this -> denominator * f2.denominator;
        int tnum = (this-> numerator * f2.denominator ) + ( f2.numerator * this-> denominator ); //Basic Cross Multiplication
        this -> numerator = tnum;
        this-> denominator = lcm;
        simplify();
    }
};


int main()
{
 Fraction f1( 15, 20 );
 Fraction f2( 30, 20 );
 f1.print();
// cout << endl;
 f2.print();
// cout << endl;
 f1.add(f2);
 //cout << endl;
 f1.print();
}
//jo humara first wala object hai, jispe hum iss function call kar rahe the wo  this mai chala jata hai ( uska address this mai jata hai ).Second object ko hum argument mai pass karte hai.

//#include<iostream>
//using namespace std;

 /*   class fraction{

	int numerator;
	int denominator;

	public:
		fraction(int numerator,int denominator) //PARAMETRIZED CONSTRUCTORS WITH 2 PARAMETERS
		{
			this->numerator=numerator;
			this->denominator=denominator;
		}
		void print()
		 {
			cout<<this->numerator<<"/"<<this->denominator<<endl;
		 }

			void simplify()
         {
			int gcd = 1;
			int j = min(numerator,denominator);
			for(int i=1;i<=j;i++)
            {
				if(numerator%i==0 && denominator%i==0)
				gcd=i;
			}
			this->numerator/=gcd;  // BECAUSE WE WANT THE OUTPUT IN F1 AND THIS REPRESENTS F1 SO...
			this->denominator/=gcd; // BECAUSE WE WANT THE OUTPUT IN F1 AND THIS REPRESENTS F1 SO...
		 }

		void add(fraction const &f2) //BECAUSE THERE IS NOTHING AT LINE 107 TO CATCH, ITS RETURN TYPE IS OF VOID.
		{
			int lcm = this -> denominator * f2.denominator;
	        int tnum = (this-> numerator * f2.denominator ) + ( f2.numerator * this-> denominator );
	        this -> numerator = tnum; //THERE IS NO RETURN STATEMENT AND WE WANT THE OUTPUT IN THE OBJECT WHICH CALLED IT, ie. F1. So...
	        this-> denominator = lcm; // BECAUSE WE WANT THE OUTPUT IN F1 AND THIS REPRESENTS F1 SO...
	        simplify();
		}

		void multiply(fraction const &f2)
		{
			this->numerator*=f2.numerator;
			this->denominator*=f2.denominator;
			simplify();
		}

};

int main()
{
	fraction f1(10,2); //THIS IS HOW WE CREATE OBJECTS: CLASSNAME SPACE OBJECTNAME///
	fraction f2(15,5);
	f1.add(f2);// FUNCTIONS USE DOT OPERATOR TO CALL THE FUNCTION. LEFT HAND SIDE OF THE DOT IS THE FUNCTION WHICH IS CALLING IT AND WE USE THE SECOND OBJECT (IF NEEDED) IN THE ARGUMENTS OF THE FUNCTION.
 // THIS MEANS WE WANT OUTPUT IN F1
 //   f1.multiply(f2);
	f1.print(); //THIS IS HOW WE CALL FUNCTIONS, NAMEOFTHEOBJECT DOT FUNCTIONAME
	f2.print();
}*/
