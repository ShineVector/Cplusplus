
#include <iostream>

using namespace std;

int main() {

int Cents;
cout << "Enter an amount in cents : "; 
 cin >> Cents;


 
  

int dollar = 100;
int quarter = 25;
int dime = 10;
int nickel = 5;
int penny = 1;
  
int dollars_result;
dollars_result = (Cents / dollar);
cout <<"dollars  : "<<dollars_result<< endl;

int dollars_remainder;
dollars_remainder = (Cents % dollar);



int qua_result;
qua_result = (dollars_remainder / quarter);
cout <<"quarters : "<<qua_result<< endl;

int qua_remainder;
qua_remainder = (dollars_remainder % quarter);

int dime_result;
dime_result = (qua_remainder / dime);
cout <<"dimes    : " <<dime_result<< endl;
int dime_remainder;
dime_remainder = (qua_remainder % dime);


int nickels_result;
nickels_result = (dime_remainder / nickel);
cout <<"nukels   : "<<nickels_result<< endl;
int nickels_remainder;
nickels_remainder = (dime_remainder % nickel);

int penny_result;
penny_result = (nickels_remainder / penny);
cout <<"pennies  : " <<penny_result<< endl;




 
  

    cout << endl;
    return 0;
}


