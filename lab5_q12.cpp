//program to input month number and print the number of days of that month
#include <iostream>
using namespace std;
int main(){
	//declaring variables
    	int mon;
		cout<<"enter the number of the month ";
		cin>>mon;
		if (mon == 1 or mon == 3 or mon == 5 or mon == 7 or mon == 8 or mon == 10 or mon == 12 ){
		cout<< " number of days of the month is 31 " ;
		}
		else if (mon = 2){
        cout<< " number of days of the month is 28 " ;
        }
		else {
		mon == 4 or mon == 6 or mon == 9 or mon == 11 ;
        cout<< "number of days of the month " ;
	}
	return 0 ;
	}
