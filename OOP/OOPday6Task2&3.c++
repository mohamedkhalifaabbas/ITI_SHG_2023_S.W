#include <iostream>
#include "string"

using namespace std;


class Vehicle
{

 protected :

  string  brand ;
  string  model ;

 public :
  Vehicle(string b = "unkwon" , string m = "unkwon" )
  {
    brand = b;
    model = m;
  }
  void set_brand(string b )
  {
    brand = b;
  }
  void set_model(string m )
  {
    model = m;
  }

  string get_brand()
  {
    return brand;
  }
  string get_model()
  {
    return model;
  }
   virtual void displayInfo()
  {
    cout<<"brand : "<<brand<<endl;
    cout<<"model : "<<model<<endl;
  }



   };

class Car : public Vehicle
{
  int numDoors;

   public :
   Car(string s1 , string s2 ,int num = 0): Vehicle(s1 , s2)
   {
      numDoors = num ;
   }
    void set_numDoors(int num)
    {
        numDoors = num ;
    }
      int get_numDoors()
    {
       return numDoors ;
    }

    void displayInfo()
    {
      Vehicle :: displayInfo();
      cout<<"number of Doors : "<<numDoors<<endl;
    }
};
class Bike : public Vehicle
{
  int numGears;

   public :
   Bike(string s1 , string s2 ,int num = 0): Vehicle(s1 , s2)
   {
      numGears = num ;
   }
    void set_numGears(int num)
    {
       numGears = num ;
    }

    int get_numGears()
    {
       return numGears ;
    }

    void displayInfo()
    {
      Vehicle :: displayInfo();
      cout<<"number of Gears : "<<numGears<<endl;
    }

};

int main()
{
    Car c1("BMW" , "B2022" ,4 ) ;
    Bike b1("Bacchetta" ,"Centurion" ,12);
   // c1.displayInfo();
   // b1.displayInfo();
       cout<<"\nInformation about the car"<<endl;
    Vehicle *ojb_v  = new Car("Nissan" ,"Altima" , 4) ;
    ojb_v->displayInfo(); // display car info

       cout<<"\nInformation about the bike "<<endl;

     ojb_v = new Bike("ALAN","Argon 18 ",9);
     ojb_v->displayInfo(); // display bike info


}
