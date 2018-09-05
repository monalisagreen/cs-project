#include <iostream>
using namespace std;
int main(){
int year;
cout<<"enter a year ";
cin>>year;
if ( year % 4 == 0 and year % 100 == 0 and year % 400 == 0 ){
cout<<"This year is a leap year"<<endl;}
else {
	year % 4 <= 3 && year % 100 <= 99 && year % 400 <= 399;
	cout<<"this year is not a leap year"<<endl;
	}

return 0;
}
