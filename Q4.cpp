#include <iostream>
using namespace std;

int main() {
int n;
string mode ,name;

cout<<"How many clients : ";
cin>>n;

string clients[n][2];

 cout<<"\tEnter the Clients names and Phone numbers"<<endl;
     for (int i = 0;i<n;i++)
     {
         cout<<"Client "<<i+1<<" Name : ";
         cin>>clients[i][0];
         cout<<"Client "<<i+1<<" Phone number : ";
         cin>>clients[i][1];
     }
        cout<<"\nFor view your client details input client name";
        cout<<"\nFor edit client details input 'edit'";
        cout<<"\nFor end please input 'end' or continue press any key\n";
do{

        cout<<"\nInput Your next step : ";

        cin>>mode;
        for (int i = 0;i<n;i++)
     {
         if (mode == clients[i][0]){
            cout<<clients[i][0]<<"'s phone number is "<<clients[i][1]<<endl;
         }
     }

        string upname,upnumber,name;
        if (mode == "edit"){
        cout<<"\nClient name what do you want edit :";
        cin>>name;
        cout<<"New name :";
        cin>>upname;
        cout<<"New Phone number :";
        cin>>upnumber;

        for (int i = 0;i<n;i++)
     {
         if (name == clients[i][0]){
            clients[i][0] = upname;
            clients[i][1] = upnumber;

            cout<<"\tUpdated directory"<<endl;
            cout<<"\t"<<clients[i][0]<<"\t\t"<<clients[i][1]<<endl;
         }
     }
        }
        }while(mode != "end");


}


