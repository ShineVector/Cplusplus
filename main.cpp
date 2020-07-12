
#include <iostream>

using namespace std;

int main() {

int cents = 0;
cout << "Enter an amount in cents : "; 
 cin >> cents;


 
  

const int dollar_value = 100;
const int quarter_value = 25;
const int dime_value = 10;
const int nickel_value = 5;
const int penny_value = 1;
int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

dollars = (cents / dollar_value);
cout <<"dollars  : "<<dollars<< endl;
balance = (cents % dollar_value);



quarters = (balance / quarter_value);
cout <<"quarters : "<<quarters<< endl;
balance = (balance % quarter_value);


dimes = (balance / dime_value);
cout <<"dimes    : " <<dimes<< endl;
balance = (balance % dime_value);


nickels = (balance / nickel_value);
cout <<"nukels   : "<<nickels<< endl;
balance = (balance % nickel_value);

pennies = (balance / penny_value);
cout <<"pennies  : " <<pennies<< endl;




 
  

    cout << endl;
    return 0;
}


