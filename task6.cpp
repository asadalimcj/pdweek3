#include<iostream>
using namespace std;
main()
{
int bag_size;
int bag_cost;
int area;
int cost_perpound;
int cost_persquare;
cout<<"bag size in pound :";
cin>>bag_size;

cout<<"enter cost of bag";
cin>>bag_cost;
cout<<"area covered by bag :";
cin>>area;



cost_perpound = bag_cost/bag_size;
cout<<"cost of fertilizer per pound is :"<<cost_perpound;
cout<<endl;
cost_persquare = bag_cost/area;
cout<<"cost of fertilising per area is :"<<cost_persquare;










}