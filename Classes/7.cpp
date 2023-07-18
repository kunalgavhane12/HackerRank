/******************************************************************************
Virtual Function
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class Person{
  
  public:
  string name;
  int age;
  
  virtual void getdata()
  {
      cin>>name>>age;
  }
  virtual void putdata()
  {
      cout<<name<<" "<<age<<endl;
  }
};
class Professor:public Person{
  public:
  Professor(){
      cur_id=++id;
  }
  int publication;
  static int id;
  int cur_id;
  void getdata()
  {
    cin>>name>>age>>publication;
  }
  void putdata()
  {
      cout<<name<<" "<<age<<" "<<publication<<" "<<cur_id<<endl;
  }
};
int Professor::id=0;
class Student:public Person{
  #define num_of_marks 6
  public:
  Student()
  {
      cur_id=++id;
  }
  static int id;
  int cur_id;
  int marks[num_of_marks];
  void getdata()
  {
      cin>>name>>age;
      for(int i=0;i<num_of_marks;i++)
      {
          cin>>marks[i];
      }
  }
  void putdata()
  {
      int marksSum=0;
      for(int i=0;i<num_of_marks;i++)
      {
          marksSum+=marks[i];
      }
      cout<<name<<" "<<age<<" "<<marksSum<<" "<<cur_id<<endl;
  }
};
int Student::id=0;
int main()
{
    int n,val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];
    for(int i=0;i<n;i++)
    {
        cin>>val;
        if(val==1)
        {
            //if val is 1 current object is of type Professor
            per[i]=new Professor;
        }
        else per[i] = new Student;// Else the current object is of type Student
        per[i]->getdata();//Get the data from the user.
        
    }
    for(int i=0;i<n;i++)
    per[i]->putdata(); // Print the required output for each object.
    
    return 0;
}