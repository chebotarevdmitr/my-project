#include <iostream>
#include <string.h>
using namespace std;
 //->( string name )<-parametr
  void introduceMi (string name,string sity,int age=0){
 cout <<" My name is : "<<name<< endl;
 cout <<"I am from : "<<sity<< endl;
 if(age!=0)
 cout <<" Age: "<<age<< "year old"<<endl;
 }
  
 int main() {
 	string name,sity;
 	int age;
 	cout<<"Name: ";
 	cin>> name;
 	cout<<"Sity: ";
 	cin>>sity;
 	cout<<"Age: ";
 	cin>> age;
 	introduceMi(name,sity,age);
 // ->("DIMA")<-argument	
 //introduceMi("DIMA","Sevastopol",45);
 //introduceMi("Student","Otradnoe");
	
system("pause>0");	
}