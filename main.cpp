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

//defining class lecturer
class lecturer{
private:
  user * lecturer1; //inheritance relationship

  public:
    lecturer();
    lecturer(user * lect1);
    void resolveTicket();
    void sendTicketAnswer();
    string getTicket();
};

//defining class systemAdmin
class systemAdmin{
  private:
    string name;
    int contactNumber;
    string email;
    string adminId;
    lecturer * lecturer2; //composition relationship

  public:
    systemAdmin();
    systemAdmin(string sysName, int sysContNo, string sysEmail, string sysId,lecturer * lect1);
    string getStdTicket();
    void setSendTicket();
    string getTicketAnswer();
    void setStdTicketAnswer();
};

//defining class loginInformation
class loginInformation{
  private:
    string userName;
    string password;

  public:
    loginInformation (string logUserName, string logPw);
    string getDisplayLoginInfo();
};

//defining class faq
class faq{
  private:
    int faqId;
    string faqName;
    string faqType;

  public:
    faq (int faqid, string faqname,string faqtype);
    string searchFaq();
};

//defining class track
class track{
  private:
    int trackTicketId;
    string date;
    string type;

  public:

    track();
    track (int trkTkId,string trkDate, string trkType);
    void setAddTrack(string trkType);
    string searchTrack (int trkId);
};

//defining class ticket
class ticket{
  private:
    int ticketId;
    string date;
    string type;
    string Description;
    track * track1;//composition relationship

  public:
    ticket(int tkId,string tkDate, string tkType, string tkDescrip,track * trk1);
    void setAddTicket(string tkType,string tkDescrip);
    void setEditTcket(string tkType,string tkDescrip);
    string searchTicket();
    void deleteTicket ();
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

/*lecturer class*/
//Implement of constructers in lecture class
lecturer::lecturer(){
  
}
lecturer::lecturer(user * lect1){
  lecturer1=lect1;  
}
//lecturer class functions implementation
void lecturer::resolveTicket(){
  
}
void lecturer:: sendTicketAnswer(){
  
}
string lecturer::getTicket(){
  return 0;
}

/*systemAdmin class*/
//Implement of constructers in systemAdmin class
systemAdmin::systemAdmin(){
  
}
systemAdmin::systemAdmin(string sysName, int sysContNo, string sysEmail, string sysId,lecturer * lect1){
  name= sysName;
  contactNumber= sysContNo;
  email= sysEmail;
  adminId= sysId;
  lecturer2 =lect1; 
}
//systemAdmin class functions implementation
string systemAdmin::getStdTicket(){
  return  0;
}
void systemAdmin::setSendTicket(){
  
}
string systemAdmin::getTicketAnswer(){
  return  0;
}
void systemAdmin::setStdTicketAnswer(){
  
}

/*loginInformation class*/
//Implement of constructers in loginInformation class
loginInformation::loginInformation (string logUserName, string logPw){
  userName= logUserName;
  password=logPw;
}
//loginInformation class functions implementation
string loginInformation::getDisplayLoginInfo(){
  return  0;
}

/*faq class*/
//Implement of constructers in faq class
faq::faq (int faqid, string faqname,string faqtype){
  faqId=faqid;
  faqName= faqname;
  faqType=faqtype;
}
//faq class functions implementation
 string faq::searchFaq(){
   return  0;
 }

/*track class*/
//Implement of constructers in track class
track::track (int trkTkId,string trkDate, string trkType){
  trackTicketId=trkTkId;
  date=trkDate;
  type= trkType;
}
track::track (){
  
}
//track class functions implementation
void track::setAddTrack(string trkType){
  
}
string track::searchTrack (int trkId){
    return 0;
}

/*ticket class*/
//Implement of constructers in ticket class
ticket::ticket(int tkId,string tkDate, string tkType, string tkDescrip,track * trk1){
  ticketId=tkId;
  date=tkDate;
  type=tkType;
  Description= tkDescrip;
  track1= trk1;
}
//ticket class functions implementation
void ticket::setAddTicket(string tkType,string tkDescrip){
  type=tkType;
  Description=tkDescrip;
}
void ticket::setEditTcket(string tkType,string tkDescrip){
  type=tkType;
  Description=tkDescrip;
}
string ticket::searchTicket(){
    return 0;
}
void ticket::deleteTicket (){
      
}

//main function begins
int main(){
  user *Namal = new user();
  user * lecturer1 = new user();
  lecturer * lecturer2= new lecturer();
  track * track1= new track();
  
  
  return 0;
}