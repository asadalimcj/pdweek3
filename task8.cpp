#include<iostream>
using namespace std;
main()
{
int number;
int sum;
int mod1;
int mod2;
int mod3;
int mod4;
int div1;
int div2;
int div3;
cout<<"enter 4 digit number :";
cin>>number;
mod1 = number%10;

cout<<endl;
div1 = number/10;
mod2 =div1%10;

div2 = div1/10;
mod3 = div2%10;
div3 = div2/10;
mod4 = div3%10;

sum = mod1+mod2+mod3+mod4;
cout<<"sum of modulus is :"<<sum;











}