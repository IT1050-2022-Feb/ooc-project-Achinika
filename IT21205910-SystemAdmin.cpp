#include <iostream>
#include<cstring>
using namespace std;

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
//main function begins
int main(){
  
lecturer * lecturer2=new lecturer();
  return 0;
}