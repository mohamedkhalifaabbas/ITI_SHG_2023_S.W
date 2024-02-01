#include <iostream>
#include "string"
using namespace std;

class Shape
{
  protected :
        float  width , height;

  public :

    Shape(float w = 0 , float h = 0)
    {
        width = w ;
        height = h ;
    }

    void set_width(float w)
    {
        width = w ;
    }
    void set_height(float h)
    {
        height = h ;
    }

    float get_width()
    {
        return width;
    }
    float get_heiht()
    {
        return height;
    }

} ;

class Circl : protected Shape
{
    public :

    Circl(float r ) : Shape(r , r)
    {

    }

    float calculat_area()
    {
        return 3.14 *( width* height ) ;
    }

    void set_radious(float r)
    {
      width = r ;
      height = r;
    }

};

int main ()
{

   Circl c1(2);
   c1.set_radious(3); // if you want change value of radious
   cout<<"The Area OF Circl = "<<c1.calculat_area();
}
