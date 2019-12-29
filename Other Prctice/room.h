#ifndef ROOM_H
#define ROOM_H
#include <string>
using namespace std;

class Room
{
  private:
    int capacity;
    bool inUse;
    char roomChar;  //determines what type of room each object is
  public:
    Room(char charIn) {
      roomChar = charIn;
    }

    char getChar() {
      return roomChar;
    }
};

#endif
