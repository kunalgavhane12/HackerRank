/******************************************************************************
class
*******************************************************************************/
#include <iostream>
#include <sstream>

using namespace std;
class Student{
  int age,standard;
  string first_name,last_name;
  public:
    void set_age(int a)
    {
        age=a;
    }
    int get_age()
    {
        return age;
    }
    void set_first_name(string name)
    {
        first_name=name;
    }
    string get_first_name()
    {
        return first_name;
    }
    void set_last_name(string lname)
    {
        last_name=lname;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_standard(int std)
    {
        standard=std;
    }
    int get_standard()
    {
        return standard;
    }
    string to_string()
    {
        stringstream ss;
        char ch=',';
        ss<<age<<ch<<first_name<<ch<<last_name<<ch<<standard;
        return ss.str();
    }
};

int main()
{
    int age,standard;
    string first_name,last_name;
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout<<st.get_age()<<endl;
    cout<<st.get_first_name()<<", "<<st.get_last_name()<<endl;
    cout<<st.get_standard()<<endl;
    cout<<endl;
    cout<<st.to_string();
    return 0;
}