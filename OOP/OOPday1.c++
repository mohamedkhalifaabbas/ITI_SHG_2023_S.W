#include <iostream>
using namespace std;
class complex
{
 private : 
   int real ;
   int imag ;

 public :
   void setreal(int r)
   {
       real = r;
   } 
   void setimag(int i)
   {
       imag = i;
   } 
   
   int getreal()
   {
    return real ;
   }

   int getimag()
   {
    return imag ;
   }

   void printcomplex()
    {
     
    if((real > 0 || real < 0 ) && (imag > 0 &&  imag != 1))

           cout<<"sum complex number = "<<real<<"+"<<imag<<"i";
      

      else if((real > 0 || real < 0 ) && imag == 1 )

           cout<<"sum complex number = "<<real<<"+i";
      

      else if(real == 0 && imag != 0)

           cout<<"sum complex number = "<<imag<<"i";
      

      else if(imag == 0 && real != 0)
           cout<<"sum complex number = "<<real;
      

      else if(imag == 0 && real == 0)

           cout<<0;
      

      else if( imag == -1)

            cout<< "sum complex number = "<<real<<"-i";
    
      else 
     
            cout<<"sum complex number = "<<real<<imag<<"i";
      
    }


      
     
 
 
   complex summember(complex c) //// member functon 'sum two complex number'
    {
     complex result ;
       result.real = real - c.getreal();
       result.imag = imag - c.getimag();
       return result ;
    }

    
};

    // stand alone funtion 'sum two complex number'
complex sumstandalone(complex m1 , complex m2)
{
      complex result ;
       result.setreal(m1.getreal() + m2.getreal());
       result.setimag(m1.getimag() + m2.getimag());
       return result ;
}

int main()
{

  complex c1 , c2 ,c3 ;

    c2.setreal(10);
    c2.setimag(7);
    c3.setreal(2);
    c3.setimag(3);

    c1 = c2.summember(c3);     // sum by member function
    c1 = sumstandalone(c2 , c3); // sum by stand alone function 
    c1.printcomplex();
 

}