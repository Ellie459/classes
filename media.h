#ifndef MEDIA_H
#define MEDIA_H

class Media
{
 protected:
  int year;
  char title[80];

 public:
 Media(const char t[80], int y);
  const char* gettitle();
  int getyear();
  void printDetails();

};

#endif
