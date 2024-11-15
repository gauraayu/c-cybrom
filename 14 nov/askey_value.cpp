#include <iostream>
using namespace std;
int main()
{
    // askey values are the values given to a letter like a has 97 and A has 65
    int a ;
  for (char ch ='a'; ch <='z'; ++ch)
  {
    // here we have done type casting 
    // means converting one datattype into another 
    cout<<int(ch)<<endl;
  }
  
}