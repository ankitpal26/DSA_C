#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cin >>n;

  int  origin_no=n;
  while(n>0){
      int lastdigit = n%10;
      sum += pow(lastdigit,3);
      n= n/10;

  }
  if(sum==origin_no){
      cout <<"Armstrong"<<endl;
    
  }else{
      cout <<"Not Armstrong"<<endl;
  }

}