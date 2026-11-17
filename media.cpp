#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

// gets the title and the year published from user
Media::Media(const char t[80], int y)
{
  strcpy(title, t);
  title[79] = '\0';
  year = y;
}

// returns the title entered from user
const char* Media::gettitle()
{
  return title;
}

//returns the year published from user
int Media::getyear()
{
  return year;
}

//prints the title and year of the media
void Media::printDetails()
{
  cout << "Title: " << title << ", year: " << year << endl;
}

Media::~Media()
{}
