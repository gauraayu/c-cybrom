#include <iostream>
using namespace std;
int main()
{
    int fact=1;
  for (int i = 1; i <= 5; i++)
  {
   fact=fact*i;
 
//  cout<<fact;
// we donot use cout here because it repeat itself if we put it in bracket
  }
  cout<<fact;
   
  
}