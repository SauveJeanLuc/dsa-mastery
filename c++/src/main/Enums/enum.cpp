#include <iostream>
using namespace std;

//Enum is a user-defined data type that consists of 
//integral constants


/*
    By Default
    ACTIVE = 0,
    DEACTIVED = 1,
    SUSPENDED = 2 
*/

enum status { ACTIVE, DEACTIVATED, SUSPENDED };

int main(){

    status bankAccountStatus  = ACTIVE;
    status mobileMoneyAccountStatus = SUSPENDED;


    double moneyToSend = 0;

    if ( bankAccountStatus == (mobileMoneyAccountStatus-2) ){
        moneyToSend = 359000;
    }

    cout << "Bank Account Status: " << bankAccountStatus << endl;
    cout << "Mobile Money Account Status: " << mobileMoneyAccountStatus << endl;
    cout << "Money to Send: " << moneyToSend << endl;

    return 0;

}