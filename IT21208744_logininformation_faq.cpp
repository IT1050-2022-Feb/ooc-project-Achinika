#include <iostream>
#include<cstring>
using namespace std;

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
//Implement of constructers in loginInformation class
loginInformation::loginInformation (string logUserName, string logPw){
  userName= logUserName;
  password=logPw;
}
//loginInformation class functions implementation
string loginInformation::getDisplayLoginInfo(){
  return  0;
}

/faq class/
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

int main(){  
  return 0;
}