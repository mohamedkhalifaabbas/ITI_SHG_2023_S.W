#include <iostream>
#include "string"
using namespace std ;

class Department
{
  string name ;
  string location;
  string head;

  public :

  Department(string n = "unkwon",string l = "unkwon",string h = "unkwon"  )
  {
    location = l;
        name = n;
        head = h;

  }

  void set_name(string n)
  {
    name = n;
  }
  void set_location(string l)
  {
    location = l;
  }
  void set_head(string h)
  {
    head = h;
  }

  string get_name()
  {
    return name ;
  }
  string get_location()
  {
    return location ;
  }
  string get_head()
  {
    return head ;
  }



};

class University
{
  Department *D1[3];
  int numofDepartment;

  public :
  University():numofDepartment (0)
  {

  }



  void add_departments(Department *b)
  {
    D1[numofDepartment++] = b ;
  }

  void display_departments()
  {
   for (int i = 0; i < numofDepartment; i++)
   {
    cout<<"\nDepartment Name .......> "<<D1[i]->get_name()<<endl;
    cout<<"Department location ...> "<<D1[i]->get_location()<<endl;
    cout<<"head of the department.> "<<D1[i]->get_head()<<endl;
   }

  }


};


 int main()
 {
  Department d("artificial intelligence" , "Center Sohag" , "DR Yaseer ");
  Department d2("Computer since" , "Center Sohag" , "DR Mohamed khaled ");
   University unv;
   unv.add_departments(&d);
   unv.add_departments(&d2);
   unv.display_departments();
 }
