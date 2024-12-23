#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include "Actor.h"
using namespace std;


class Movie
{
  public:
    Movie();
    Movie(string, Actor *[]);
    virtual ~Movie();


    string title;
    Actor * actors[10];
    void display();
};
#endif