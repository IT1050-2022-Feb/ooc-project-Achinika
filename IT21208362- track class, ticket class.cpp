#include <iostream>
#include<cstring>
using namespace std;

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

//functions implementation of classes

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
  track * track1= new track();

  return 0;
}