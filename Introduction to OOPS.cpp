#include<bits/stdc++.h>
using namespace std;

class Student
{
   public: // Setting the access modifier to public from private so that we can access them from anywhere in the code
   int rollnum;
   private: // Changing the access to private. So now whatever is below private access modifier will be private like age, but above private which is the rollnum is public.
   int age;
};
int main()
{
    //Create objects statically
    Student s1;
    Student s2;
    Student s3, s4, s5;
    // Accessing values to the properties of objects of Student.
    s1.age = 21;
    s1.rollnum = 8306;
    s2.age = 20;
    // Printing out the values of the properties of the objects
    cout << s1.age << endl;
    cout << s2.rollnum << endl;
    //Create objects dynamically
    Student *s6 = new Student;
    // Accessing values to the properties of the objects
    (*s6).age = 24;
    (*s6).rollnum = 1001;
         //OR
     s6 -> age = 24;
     s6 -> rollnum = 1001;
}
