#include <iostream>
#include<cstring>
using namespace std;

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
/lecturer class/
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

}
//main function begins
int main(){
    return 0;
}

