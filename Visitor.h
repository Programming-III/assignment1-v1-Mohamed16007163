#ifndef Visitor_h
#define Visitor_h


#include <iostream>
using namespace std;

class Visitor{
    private:
  string name;
  int numTickets;
  public:
  Visitor(string name,int numTickets );
  void displayinfo();
  int getTickets(int ticketsBought);
};
#endif
