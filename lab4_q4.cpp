#include <iostream>
using namespace std;
int main(){
int y,w,d;
cout << "enter the no. of days ";
cin >> d;
y= d/365;
d= d%365;
w=d/7;
d=d%7;
cout << " days in years is = " << y << endl;
cout << " days in weeks is = " << w << endl;
cout << " days in days is = " << d << endl;
return 0;
}
