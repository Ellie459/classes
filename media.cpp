#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media(const char t[80], int y)
{
  strcpy(title, t);
  title[79] = '\0';
  year = y;
}


const char* Media::gettitle()
{
  return title;
}

int Media::getyear()
{
  return year;
}

void Media::printDetails()
{
  cout << "Title: " << title << ", year: " << year << endl;
}
