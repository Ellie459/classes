#ifndef MUSIC_H
#define MUSIC_H

#include "media.h"

//declares class music in media
class music : public Media
{
 protected:
  char artist[80]; //stores the artist
  char publisher[80]; //stores the publisher
  int duration;  //stores the duration

 public:
  //initializes music object with title, year, publisher, artist, and duration
  music(const char t[80], int y, const char p[80], const char a[80], int d);
  const char* getpublisher(); //gets the publisher
  const char* getartist(); //gets the artist
  int getduration(); //gets the duration
  void printMusic(); //prints out the detail of music

  virtual ~music();
};

#endif
