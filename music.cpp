#include <iostream>
#include <cstring>
#include "music.h"

using namespace std;

//gets and creates music with title, year, publisher, artist, and duration
music::music(const char t[80], int y, const char p[80], const char a[80], int d) : Media(t, y)
{
  strcpy(publisher, p);
  strcpy(artist, a);
  duration = d;
}

// returns the publisher entered by the user
const char* music::getpublisher()
{
  return publisher;
}

//returns the artist
const char* music::getartist()
{
  return artist;
}

//returns the duration
int music::getduration()
{
  return duration;
}

//prints out the publisher, artist, and duration of the music
void music::printMusic()
{
  cout << "Title: " << title << ", year: " << year << ", publisher: " << publisher << ", artist: " << artist << ", duration: " << duration << endl;
}

music::~music()
{}
