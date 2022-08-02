#include <iostream>
using namespace std;

int reversed(int num,int upnum);

int main() {
int num;
cout<<"Input the number : ";
cin>>num;
cout<<"Number of the digits are reversed : "<<reversed(num,0)<<endl;
  return 0;
}

int reversed(int num,int upnum)
{
    if (num == 0)
    {
        return upnum;
    }
    else
       return reversed(num/10,(upnum*10)+(num%10));
}
