#include<iostream>

using namespace std;

class account
{ protected:
    char name[20];
    int balance;
    int accno;
    
};
class savings:public account
{    
    int min_bal;
    int with=0,dep=0;
    public:
    void getdata()
    {
        cout<<"\n***Welcome to savings account**"<<endl;
        cout<<"Please enter the name of the acoount holder";
        cin>>name;
        cout<<"\n Please enter the account number: ";
        cin>>accno;
        cout<<"Enter the balance in the account: ";
        cin>>balance; 
        cout<<endl;
        cout<<"Enter the min Balance:";
        cin>>min_bal;
     }
     void deposite()
     {
         cout<<"enter the ammount to be deposited: ";
         cin>>dep;
         balance+=dep;
         cout<<endl;
     }
     void withdraw()
     {    int temp;
         cout<<"Enter the ammount to be withdrawn: ";
         cin>>with;
         temp=balance-with;
         if(min_bal>temp)
         {
         cout<<"Withrraw exceeding min bal"<<endl;
         with=0;
         }
         else
         {
             balance=balance-with;
    
          } 
     }
     void display()
     {   cout<<"ACCOUNT NO: "<<accno<<endl;
         cout<<"ACCOUNT HOLDER'S NAME: "<<name<<endl;
         cout<<"AMOUNT WITHDRAWN "<<with<<endl;
         cout<<"AMOUNT DEPOSITED "<<dep<<endl;
         cout<<"ACCOUNT BALANCE: "<<balance<<endl;

     }
   
};
class current:public account
{    int overdue;
    int with=0,dep=0;
    public:
    void getdata()
    {
        cout<<"\n***Welcome to current account**"<<endl;
        cout<<"Please enter the name of the acoount holder";
        cin>>name;
        cout<<"\n Please enter the account number: ";
        cin>>accno;
        cout<<"Enter the balance in the account: ";
        cin>>balance; 
        cout<<endl;
        cout<<"Enter the overdue ammount: ";
        cin>>overdue;
     }
     void deposite()
     {
         cout<<"enter the ammount to be deposited: ";
         cin>>dep;
         balance+=dep;
         cout<<endl;
     }
     void withdraw()
     {    int temp;
         cout<<"Enter the ammount to be withdrawn: ";
         cin>>with;
         temp=balance-with;
         if(overdue>temp)
         {
         cout<<"Withdraw exceeding overdue ammount"<<endl;
          with=0;
         }
        
         else
         {
             balance=balance-with;
    
          } 
     }
     
    };
    
int main()
{  savings a;
   current b;
   int n;
   cout<<"1->FOR SAVINGS ACCOUNT\n2->FOR CURRENT ACCOUNT";
   cin>>n;
   if(n==1)
   {  
        int n1;
        a.getdata();
        cout<<"\n1->FOR WITHDRAWL\n2->FOR DEPOSIT ";
        cin>>n1;
        if(n1==1)
        a.withdraw();
        else if(n1==2)
        a.deposite();
        a.display();
  }
  else if(n==2)
  {
      int n2;
        b.getdata();
        cout<<"\n1->FOR WITHDRAWL\n2->FOR DEPOSIT ";
        cin>>n2;
        if(n2==1)
        b.withdraw();
        else if(n2==2)
        b.deposite();
       
  }
  
}