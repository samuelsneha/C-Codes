/*class ComplexNumbers
{
    int real;
    int imaginary;
    ComplexNumbers( int rea1, int imaginary )
    {
        this-> real = real;
        this-> imaginary = imaginary;
    }
    void add( ComplexNumbers c2 )
    {
        int treal = this-> real + c2. real;
        int timag = this-> imaginary + c2.imaginary;
        int areal = treal;
        int aimag = timag;
    }
    void multiply( ComplexNumbers c2 )
    {
        int treal = ( this-> real * c2. real )- ( this -> imaginary * c2. imaginary );
        int timag = ( this-> real * c2.imaginary) + ( this-> imaginary * c2.real );
        int areal = treal;
        int aimag = timag;
    }
    void print()
    {
       cout << areal << " " << "+" << " " << aimag << 'i';
    }

};*/
 #include<bits/stdc++.h>
 using namespace std;

class ComplexNumbers
{

    int real;
    int imaginary;
    public:
    ComplexNumbers( int real, int imaginary ) //FIRST AND ONLY CONSTRUCTOR
    {
        this-> real = real;
        this-> imaginary = imaginary;
    }
    void plus( ComplexNumbers c2 )
    {
        int treal = this-> real + c2. real;
        int timag = this-> imaginary + c2.imaginary;
        this-> real = treal;
        this-> imaginary = timag;
    }
    void multiply( ComplexNumbers c2 )
    {    //(a + bi)*(c + di) = (a*c) - (b*d) ---> REAL PART
        //                    = (a*d) + (b*c) ---> IMAGINARY PART
        int treal = ( this-> real * c2. real )- ( this -> imaginary * c2. imaginary );
        int timag = ( this-> real * c2.imaginary) + ( this-> imaginary * c2.real );
        this-> real = treal;
        this-> imaginary = timag;
    }
    void print()
    {
       cout << this-> real << " " << "+ i" << this-> imaginary ; // More Efficient
    //  cout << this-> real << " " << " + " << " " <<this-> imaginary << 'i';
    //  cout << this-> real  << " + "  <<this-> imaginary << 'i';
    //  cout << this-> real << " " << "+" << " " << "i" << this-> imaginary ;
    }
};
int main()
{
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if(choice == 1)
    {
        c1.plus(c2); //THIS MEANS THAT YOU WANT TO STORE THE OUTPUT IN C1 ONLY.  HENCE ITS VOID
        c1.print(); //THIS MEANS THAT YOU WANT THE ANSWER IN C1, HENCE ITS VOID.
    }
    else if(choice == 2)
    {
        c1.multiply(c2); ///THIS MEANS THAT YOU WANT TO STORE THE OUPUT IN C1 ONLY. HENCE ITS VOID.
        c1.print();     ///THIS MEANS THAT YOU WANT THE ANSWER IN C1, HENCE ITS VOID.
    }
    else
    {
        return 0;
    }
}
