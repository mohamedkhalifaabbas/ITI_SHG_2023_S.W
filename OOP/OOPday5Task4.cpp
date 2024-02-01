#include <iostream>
#include "string"
using namespace std ;

class  Vehicle
{
   private:
    string brand ;
    string model ;
    int year ;
   public:

       Vehicle()
       {

       }

       void setbrand(string namebrand)
       {
         brand = namebrand ;
       }
       void setmodel(string namemodel)
       {
         model = namemodel ;
       }
       void setyear(int y)
       {
         year = y ;
       }

       string getbrand()
       {
         return brand ;
       }
       string getmodel()
       {
         return model ;
       }

       int getyear()
       {
         return year;
       }


};

class Car : public Vehicle
{
  private :

   int numberofdoors ;

  public :
      void setnumberofdoors(int door)
      {
       numberofdoors = door;
      }

      int getnumberofdoors()
      {
      return numberofdoors ;
      }
};


class Motorcycle : public Vehicle
{
  private :

     string typemoto;

  public :
     void settypemoto(string moto)
     {
      typemoto = moto;
     }

     string gettypemoto()
     {
      return typemoto ;
     }
};


 int main()
{






 Car c1;
 c1.setbrand("4X4");
 c1.setmodel("");
 c1.setyear(2018);
 c1.setnumberofdoors(4);

 Motorcycle m1;
 m1.setbrand("HOJAN");
 m1.setmodel("Tiger");
 m1.setyear(2016);
 m1.settypemoto("Motorcycle");

}
