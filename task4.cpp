#include<iostream>
using namespace std;
main()
{
string name;
float subject1;
float subject2;
float subject3;
float subject4;
float subject5;
float percentage;
float sum;
cout<<"enter your name:";
cin>>name;

cout<<"enter subject 1 marks";
cin>>subject1;


cout<<"enter subject 2 marks";
cin>>subject2;


cout<<"enter subject 3 marks";
cin>>subject3;


cout<<"enter subject 4 marks";
cin>>subject4;


cout<<"enter subject 5 marks";
cin>>subject5;
sum = subject1+subject2+subject3+subject4+subject5;

percentage = sum*100/500;

cout<<"your percentage is :"<<percentage;













}