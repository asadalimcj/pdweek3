#include<iostream>
using namespace std;
main()
{
string name;
int adult_price;
int child_price;
int adult_ticket_sold;
int child_ticket_sold;
int percentage;
int donation;
int child_collection;
int adult_collection;
int total;
int donated_money;
int remaining;

cout<<"enter movie name :";
cin>>name;
cout<<"adult ticket price :";
cin>>adult_price;
cout<<" child ticket price :";
cin>>child_price;
cout<<"number of adult tickets sold:";
cin>>adult_ticket_sold;
cout<<" number of child ticket sold:";
cin>>child_ticket_sold;
cout<<"enter donation percentage";
cin>>donation;

child_collection = child_price*child_ticket_sold;
adult_collection = adult_price*adult_ticket_sold;
total = child_collection+adult_collection;
cout<<"total amount generated"<<total;
cout<<endl;
donated_money = donation*total/100;
remaining = total-donated_money;
cout<<"amount after donation is :"<<remaining;














}