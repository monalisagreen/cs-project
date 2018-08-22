#include <iostream>
using namespace std;
int main(){
float celcius,fahrenheit;
cout << "enter temperature in celcius" << endl;
cin >> celcius;
fahrenheit = (celcius * 9/5) + 32;
cout << "temperature in fahrenheit is = " <<fahrenheit << endl;
return 0;
}
