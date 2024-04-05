/*Define a class to represent a bank account. Include the members like name of the depositor, account number, type of account, and balance amount in the account. 
Make functions :
(1) To assign initial values, 
(2) To deposit an amount, 
(3) To withdraw an amount after checking the balance, 
(4) To display name and balance. 
Write a main program to test the program. */

#include<iostream>
using namespace std;
class Bank {
    public:
    string name;
    int acc_no=0;
    long double bal=0,net=0;
    char type;
    void set_data(){
        /*cout<<"Enter Account No. : ";
        cin>>acc_no;*/
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Account Type : ";
        cin>>type;
        cout<<"Enter Balance : ";
        cin>>bal;
    }
    void check_bal(){
        //cout<<"Account No : "<<acc_no<<endl;
        cout<<"Amount in current account is : "<<bal;
    }
    void deposit(){
        cout<<"Enter Amount to be deposited : ";
        cin>>net;
        bal+=net;
        check_bal();
    }
    void withdraw(){
        check_bal();
        cout<<"Enter Amount to be withdrawn : ";
        cin>>net;
        bal-=net;
        check_bal();
    }
};
int main(){
    int choice;
    Bank user[2];
    for(int i=0;i<2;i++){
        cout<<"Enter Data For Acc_No."<<i+1<<" : "<<endl;
        user[i].set_data();
        user[i].acc_no=i-1;
    }
    int i=0;
    cout<<"Enter function : "<<endl<<"1. Check balance "<<endl<<"2. Deposit"<<endl<<"3. Withdraw : ";
    cin>>choice;
    cout<<"Enter Acc_No. :";
    cin>>i;
    if(choice==1)
        user[i-1].check_bal();
    else if(choice==2)
        user[i-1].deposit();
    else if(choice==3)
        user[i-1].withdraw();      
}