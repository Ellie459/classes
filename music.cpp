#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

music::music(const char t[80], int y, const char p[80], const char a[80], int d) : Media(t, y)
{
  strcpy(publisher, p);
  strcpy(artist, a);
  duration = d;
}

const char* music::getpublisher()
{
  return publisher;
}

const char* music::getartist()
{
  return artist;
}

int music::getduration()
{
  return duration;
}

void music::printMusic()
{
  cout << "Publisher: " << publisher << ", artist: " << artist << ", duration: " << duration << endl;
}
