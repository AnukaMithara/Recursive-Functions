#include <iostream>
using namespace std;

int main() {
    string mode;

int n,number;

cout<<"How many students(Please input minimum 10): ";
cin>>n;
 int arraym[n][2];
if (n<10)
{
    cout<<"Not enough Students"<<endl;
    return main();
 }
 else
 {
     cout<<"\tEnter the students ID numbers and Marks"<<endl;
     for (int i = 0;i<n;i++)
     {
         cout<<"Student "<<i+1<<" ID number : ";
         cin>>arraym[i][0];
         cout<<"Student "<<i+1<<" Marks : ";
         cin>>arraym[i][1];
     }
     cout<<"\n\tMarks of the Students"<<endl;
     cout<<"\tID number\tMarks"<<endl;
      for (int i = 0;i<n;i++)
     {
         cout<<"\t"<<arraym[i][0]<<"\t\t"<<arraym[i][1]<<endl;
     }
cout<<endl;
    do{ int marks;
    cout<<"Enter the ID number to view the marks again or to continue press 0  : ";
    cin>>number;
    for (int i = 0;i<n;i++)
    {
        if (number == arraym[i][0]){
           cout<<arraym[i][1]<<" marks of the student holding the ID number "<<number<<endl;;
        }
    }
     cout<<"\nInput your next step(max,min or end) or press any key to continue : ";
     cin>>mode;
     if (mode == "max" ){
        int maximum = arraym[0][1];
        for(int i = 1;i<n;i++)
        {
            if (arraym[i][1]>maximum){maximum = arraym[i][1]; }
        }
        cout<<"The maximum marks is "<<maximum<<endl;
     }
     if (mode == "min" ){
        int minimum = arraym[0][1];
for(int i = 1;i<n;i++)
        {
            if (arraym[i][1]<minimum){minimum = arraym[i][1]; }
        }
        cout<<"The minimum marks is "<<minimum<<endl;
     }
}while(mode!="end");
 }
  return 0;
}

