#include <iostream>
#include "string"
using namespace std ;

class City
  {
    string cityname ;

    public :

    City(string city = "unkwon")
    {
      cityname = city ;
    }

    void set_cityname(string city)
    {
      cityname = city ;
    }

    string get_cityname()
    {
      return cityname ;
    }
  } ;



  class State
  {
    string statename ;
    City *cit1[3];
    public :

    State(string state = "unkwon")
    {
       statename= state ;
       for (int i = 0; i < 3; i++)
       {
         cit1[i] = new City();
       }

    }
   ~ State()
    {

       for (int i = 0; i < 3; i++)
       {
         free (cit1[i]) ;
       }

    }

    void set_statename(string state)
    {
      statename = state ;
    }

    string get_statename()
    {
      return statename ;
    }
  } ;



  class Country
  {
    string countryname ;
    State  *st1[2] ;

    public :

    Country(string country = "unkwon" , string s ,string s2)
    {
      countryname  = country ;

      for (int i = 0; i < 2; i++)
      {
        st1[i] = new State(s );
      }

    }
    Country()
    {


      for (int i = 0; i < 2; i++)
      {
        free (st1[i]) ;
      }

    }

    void set_countryname (string country)
    {
     countryname  = country;
    }

    string get_countryname ()
    {
      return countryname  ;
    }

    void display()
    {

    }
  } ;


 int main()
 {

  City ci1 ,ci2 , ci3;
  ci1.set_cityname("AL_zmalek");
  ci2.set_cityname("October");
  ci3.set_cityname("Helwan");

  State st1("sohag") , st2("cairo") ;


  Country cou("Egypt") ;

 }






