#ifndef VISITOR_H
#define VISITOR_H

#include <string>
using namespace std;

//define visitor class here

class Visitor{
    private:
  String name;
  int numTickets;
  public:
  Visitor(String name,int numTickets );
  void displayinfo();
  int getTickets(int ticketsBought);
};





#endif
