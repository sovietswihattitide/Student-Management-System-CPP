#include <iostream>
#include <string>
#include <vector>
using namespace std;

void a(string sname,vector<string>& name,vector<string>& roll,string choice1,string sroll){
	
	for( int  j = 0; j < 3; j++){
	
cout << "________Enter students_____ " << endl;
cout << "Enter the students name :      "; cin >> sname ;
name.push_back(sname);
cout << "\n";
cout << "Enter the Roll number    :     "; cin >> sroll;
roll.push_back(sroll);
cout << "\n";
cout 	<< "do you want to continue      [y/n]  ?";cin >> choice1; cout << "\n";
 if(choice1 == "n"){
 	
 	return;
 }		
  }
   }

void b(vector<string>& name,vector<string>& roll){
	
	cout << "View Students __________________    : " << endl;
	for(int k = 0; k < name.size(); k++){
		
		cout << "Names   :    " << name[k] << endl;
		cout << "Roll numbers : " << roll[k] << endl;
	   
	  			
	}	
}

void c(string name0,int password,string choice3){
	
	for(int z = 0; z < 3; z++){

    cout << "Only Three Chances You Have ! " << endl;	
	cout << "Enter your name here   :    "; cin >> name0; 
	cout << "Enter Your Password here :    ";cin >> password;
 

	
	if(name0 == "admin" && password == 12321){
		
		cout << " access Granted  ! " << endl;
		
		return;
		  
	}else if(name0 == "admin" && password != 12321){
		cout << "The password is incorrect !" << endl;
		
	}else{
		cout << "invalid credentials please try again ! " << endl;
	}	
  }	
}

int main(){
	
vector<string> name;
string sname;
vector<string> roll;
string sroll;
string choice1;
string choice2;
int password = 12321;
string name0 = "admin";
string choice3;
int choicea;


cout << "What Is Your Choice To Work   ?  " << endl << endl;

cout << "1  : Enroll Students ?" << endl;
cout << "2  : View Students   ?"<< endl;
cout << "3  : Login           ?" << endl;
cin >> choicea;

switch(choicea){


case 1:
	a( sname, name,  roll,choice1,sroll);

break;
case 2:
b( name,roll);	
	
	break;
	
case 3:
	 c(name0, password, choice3);
	break;
	
}
	return 0;
}
