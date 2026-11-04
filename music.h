#ifndef MUSIC_H
#define MUSIC_H

#include "media.h"

class music : public Media
{
 protected:
  char artist[80];
  char publisher[80];
  int duration;

 public:
  music(const char t[80], int y, const char p[80], const char a[80], int d);
  const char* getpublisher();
  const char* getartist();
  int getduration();
  void printMusic();

};

#endif
