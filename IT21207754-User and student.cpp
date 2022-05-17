#include <iostream>
#include<cstring>
using namespace std;

//defining class user
class user{
  private:
    string ID;
    string password;
    string userName;
    int contact_No;
    int NIC;
    string Email;
    string Faculty_name;

  public:
    user();
    user(string id,string pw, string name,int conNo,int nic,string email,string fName);
    void setRegister(string id, string pw, string name,int conNo,int nic,string email,string fName);
    void setEditDetails(string pw, string name,int conNo, string fName);
    void setAddDetails();
};

//defining class student
class student{
  private:
    string degree_name;
    int degree_year;
    user * Namal; //inheritance relationship

  public:
    student();
    student(string degName, int degYear, user * student1);
    int degYear();
    void login();
};

/*user class*/
//Implement of constructers in user class
user::user(string id, string pw, string name, int conNo, int nic, string email, string fName){
    ID = id;
    password = pw;
    name = name;
    contact_No = conNo;
    NIC = nic;
    Email = email;
    Faculty_name = fName;
}
user::user(){
  
}
//user class functions implementation
void user::setRegister(string id, string pw, string name,int conNo,int nic,string email,string fName){
  ID= id;
  password=pw;
  userName=name;
  contact_No=conNo; 
  NIC= nic;
  Email=email;
  Faculty_name= fName;
}
void user:: setEditDetails(string pw, string name,int conNo, string fName){
  password=  pw;
  userName=name;
  contact_No=conNo;
  Faculty_name=fName;
}
  void user:: setAddDetails(){
      
}

/*student class*/
//Implement of constructers in student class
student::student(string degName, int degYear,user * student1){
  degree_name=degName;
  degree_year=degYear;
  Namal=student1;
}
student::student(){
  
}
//student class functions implementation
 int student::degYear(){
return 0;
}
void student:: login(){
  
}
//main function begins
int main(){
  user *Namal = new user();
  user * lecturer1 = new user();
 
  
  
  return 0;
}