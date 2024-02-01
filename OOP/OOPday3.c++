#include <iostream>
using namespace std ;

class Fraction
{   
  private :
    int numerator;
    int denominator;

  public : 
    Fraction(){
       
        denominator = 1;
    }

    bool cheakdenominator(int de)
    {
        if (de != 0)
        {
            return true ;
        }

        else 
          return false ;
        
    }
    void setnumerator(int num )
    {
        numerator = num; 
    }

    void setdenominator(int de )
    {
        if ( cheakdenominator(de))
             denominator = de; 
     
        else 
         cout<< "Eror , The denominator must not be zero! "<<endl ;
    }
   

     int getnumerator(){
        return numerator;
     }

     int getdenominator(){
        return denominator;
     }

     void print()
     {
        if (cheakdenominator(this-> denominator)){
             if (denominator == 1 )
             {
                cout<<"Fraction is : "<<numerator <<endl;
             }
             else if (numerator==0)
             {
                 cout<<"Fraction is : "<<0<<endl;
             }
             else if ( (denominator == numerator) && denominator >= 1)
             {
                cout<<"Fraction is : "<<1<<endl;
             }
             else if (denominator == -1)
             {
                cout<<"Fraction is : "<<-numerator<<endl ;
             }
             else 
                cout<<"Fraction is : "<<numerator<<"/"<<denominator<<endl ;
             }
        
       
     }
   
    Fraction operator*(Fraction obj)
    {
        Fraction mult ;
        mult.numerator = numerator * obj.numerator;
        mult.denominator = denominator * obj.denominator ;
        return mult ;
    }
    Fraction operator/(Fraction objdiv)
    {
        Fraction div ;
        div.numerator = numerator * objdiv.denominator;
        div.denominator = denominator * objdiv.numerator ;
        return div ;
    }
    Fraction operator+(Fraction objsum)  
    {
        Fraction sum ;
        sum.denominator = denominator * objsum.denominator ;
        sum.numerator   = (numerator *  objsum.denominator) + (denominator *  objsum.numerator);
        return sum ;
    }
    Fraction operator-(Fraction objsubtraction)  
    {
        Fraction sub ;
        sub.denominator = denominator * objsubtraction.denominator ;
        sub.numerator   = (numerator *  objsubtraction.denominator) - (denominator *  objsubtraction.numerator);
        return sub;
    }
    

    bool operator==(Fraction objequal)
    {
     if ((numerator == objequal.numerator)&&(denominator == objequal.denominator))
     
        return true;
     
     else 
        return false ;
     
    }
    bool operator!=(Fraction objnotequal)
    {
     if ((numerator != objnotequal.numerator)||(denominator != objnotequal.denominator))
     
        return false;
     
     else 
        return true ;
     
    }

};

int main()
{
  Fraction n1 , n2;
  int numerator ;
  int denominator ;
          // get Frist fractions ( numerator & denominator)  from user......
  cout<<"Frist Fraction : " <<endl;
  cout<<"Enter numerator = ";
  cin>> numerator ;
  cout<<"Enter denominator = ";
  cin>> denominator ;

  n1.setnumerator(numerator);
  n1.setdenominator(denominator);




   int numerator2 ;
   int denominator2 ;
         // get Second fractions ( numerator & denominator)  from user......
   cout<<"\nSecond Fraction : " <<endl;
   cout<<"Enter numerator = ";
   cin>> numerator2 ;
   cout<<"Enter denominator = ";
   cin>> denominator2 ;


   n2.setnumerator(numerator2);
   n2.setdenominator(denominator2);

         //  print Two fractions  
   cout<<"\nFrist  ";
   n1.print();
   cout<<"Second "; 
   n2.print();
       
         // summtion two fractions 
   Fraction sum ;
   sum  = n1+n2 ;
   cout<<"\nSummtion ";
   sum.print();
        
        // subtraction two fractions
   Fraction sub ;
   sub  = n1-n2 ;
   cout<<"Subtraction ";
   sub.print();
    
        //  Multiply two fractions 
   Fraction mult ;
   mult = n1*n2 ;
   cout<<"Multiply ";
   mult.print();

       //   divide two fractions 
   Fraction div ;
   div = n1/n2 ;
   cout<<"divide ";
   div.print();
        
       // cheak equality between two fractions 
   bool equality = n1==n2;
        equality = n1!=n2;
      if(equality)
         cout<<"\nFrist Fraction and Second Fraction are equal"<<endl;

      else 
         cout<<"\nFrist Fraction and Second Fraction are not equal"<<endl;



}