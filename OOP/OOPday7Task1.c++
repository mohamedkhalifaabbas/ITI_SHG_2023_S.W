*#include <iostream>

using namespace std ;

class Animal
{

    public :

    virtual void sound() = 0 ;
    virtual void diet() = 0 ;

};

class Dog : public Animal
{

    public :

     void sound()
     {
        cout<<"sound dog"<<endl;
     }
     void diet()
     {
        cout<<"diet dog"<<endl;
     }


};
class Cat : public Animal
{

    public :

     void sound()
     {
        cout<<"sound cat"<<endl;
     }
     void diet()
     {
        cout<<"diet cat"<<endl;
     }


};

int main()
{

   Dog d1 ;
   d1.sound();
   d1.diet();

   Cat c1 ;
   c1.sound();
   c1.diet();
}*
