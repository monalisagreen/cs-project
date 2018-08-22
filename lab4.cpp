#include<iostream>
using namespace std;
int main () {
float km,met,cent;
cout << "Enter length in cm : ";
cin >> cent;
met = cent / 100;
km = cent / 100000;
cout << "length in meter is = " << met << endl;
cout << " length in kilometer is = " << km << endl;
return 0;
}

