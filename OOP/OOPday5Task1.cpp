#include <iostream>
#include "string"
using namespace std ;

//day 5 task 1

class  Course
{
private:
   string coursename ;
   string duration ;
public:


      Course(string s = "" ,string dur="" )
      {
        coursename = s;
        duration = dur ;
      }
      void setcoursename(string name)
       {
         coursename = name ;
       }
      void setduration(string dur)
       {
         duration = dur ;
       }

      string getcoursename()
       {
         return coursename ;
       }
      string getduration()
       {
         return duration ;
       }
};
class  Student
{
   private:
      string studentname ;
      int studentage ;
      int rollnumber;
      Course m1[3] ;
   public:

       Student(string name =" " , int age = 0)
       {
           studentname = name ;
           studentage  = age  ;
           rollnumber = 0 ;
       }

       void set_course(Course c1 )
       {
          m1[rollnumber] = c1 ;
          rollnumber++;
       }

       void display_courses()
       {
        for (int i = 0; i < rollnumber; i++)
        {
          cout<<"course name : "<<m1[i].getcoursename()<<endl;
          cout<<"course duration : "<<m1[i].getduration()<<endl;
          cout<<"\n";
        }

       }

       void setstudentname(string name)
       {
         studentname = name ;
       }
       void setstudentage(int age)
       {
         studentage = age ;
       }
       void setrollnumber(int roll)
       {
         rollnumber = roll ;
       }

       string getstudentname()
       {
         return studentname ;
       }

       int getstudentage()
       {
         return studentage;
       }

       int getrollnumber()
       {
         return rollnumber;
       }

       void displaystudent()
       {
        cout<<"Student name :"<<getstudentname()<<endl;
        cout<<"Student age  :"<<getstudentage()<<endl;
       }


};

int main()
{
  Student s1("Mohamed khalifa" , 19);
  Course  c1("programming language with c++" , "60 hourse");
  Course  c2("object oreinted programming" , "120 hourse");
  Course  c3("Data structure" , "80 hourse");
  s1.displaystudent();
  s1.set_course(c1);
  s1.set_course(c2);
  s1.set_course(c3);

  cout<<"\nStudent "<<s1.getstudentname()<<" enrolled in "<<s1.getrollnumber()<<" couurses\n"<<endl;

  s1.display_courses();


}
