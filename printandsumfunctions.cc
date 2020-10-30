#include <iostream>
#include <math.h>
using namespace std;

//Name: Ryan McAliney

int main() {

    int prod = 3;
    int n = 1;
    int sum = 0;
    int m = 1;
    cout<<"sum of the multiples of 3 loop"<<endl;
    
  for (int i=1; i<=10; i++){
     // prod *= i;
      n = i*3;
      sum += n;
       
      
      cout<<"sum is "<<sum<<endl;
  }
  cout<<"odd loop"<<endl;
  for (int j=1; j<=21; j++){
     m *= j; 
     if (j % 2 == 0)
     cout<<""<<endl;
     else
     cout<<j<<endl;
    
  }
  cout<<"doubling loop"<<endl;
  for (int k=0; k<=10; k++){
      cout<<pow(2,k)<<endl;
      
  }
  
 
}
