

#include <iostream>
                          //  day 2 task 2
using namespace std;

class Date 
{
    private :
     int day ;
     int month ;
     int year ;
     static int count;

    public :

    Date(int Day =0 , int Month =0 , int Year = 0 ) : day(Day ) , month(Month) , year(Year) 
    {
     count ++;
    }
    int getcount(){
        return count ;
    }

    void setday(int Day){
         day = Day ; }
    
    void setmonth(int Month){
         month = Month ;}
    
    void setyear(int Year){
         year = Year ; }
    
    int getday(){
       return day ; }
    int getmonth(){
       return month ; }
    int getyear(){
       return year ; }
    
    int subtractDate(Date d)
    {
        int daysdate1 = ((year*365) + (month*30) + (day));
        int daysdate2 = (((d.getyear()) * 365) + ((d.getmonth()) *30) + (d.getday()));
        int  res  = abs(daysdate1 - daysdate2) ;
        return res ;
    }
   
  
};

int Date:: count = 0 ; 

int main()
{
    
    int day1 ;
    int month1 ;
    int year1 ;
    cout<<"Frist Date  : ";
    cin>>day1>>month1>>year1;
    int day2 ;
    int month2 ;
    int year2 ;
    cout<<"Second Date  : ";
    cin>>day2>>month2>>year2;

    
 Date d1(day1 , month1 , year1) , d2  ;
 Date d1 , d2 ; 
 d1.setday(day1);
 d1.setmonth(month1);
 d1.setyear(year1); 


 d2.setday(day2);
 d2.setmonth(month2);
 d2.setyear(year2);
 
 
 
 cout << "number of days = "<<d1.subtractDate(d2);

} 
