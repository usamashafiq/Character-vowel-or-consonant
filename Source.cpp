#include<iostream>
#include<conio.h>
using namespace std;
void main() {
char x, y;
cout << "Enter a character" << endl;
cin >> x;
switch (x)
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
case'a':
case'e':
case'i':
case'o':
case'u':
cout << "Its a vowel";
break;
default:
cout << "Its a consonant";

}
