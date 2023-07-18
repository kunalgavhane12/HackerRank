/******************************************************************************
classes and objects
*******************************************************************************/
#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;
//Write your Student class here
class Student{
  int score[5];
  public:
  int sum=0;
  void input()
  {
      for(int i=0; i<5; i++)
      {
          cin >> score[i];
          sum+=score[i];
      }
  }
  int calculateTotalScore()
  {
      return sum;
  }
  
};

int main()
{
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; //an arrays of n studnets
    
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
    
    //calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();
    
    //determine how many studnets scored higher than kristen
    int count=0;
    for(int i=1; i<n ;i++)
    {
        int total = s[i].calculateTotalScore();
        if(total > kristen_score)
        {
            count++;
        }
    }
    //print result
    cout << count;
    
    return 0;
}