// checks and define media_h
#ifndef MEDIA_H
#define MEDIA_H

// declares class media
class Media
{
 // protected variables
 protected:
  int year; //stores the year released
  char title[80];

 public:
  // initializes media object with the title and year
  Media(const char t[80], int y);

  //gets the title and the year
  const char* gettitle();
  int getyear();

  //prints the detail of the specific media
  void printDetails();

  virtual ~Media();
};

#endif
