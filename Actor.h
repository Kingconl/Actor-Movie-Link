#ifndef ACTOR_H
#define ACTOR_H
#include <iostream>
using namespace std;

class Movie;


class Actor
{
  public:
Actor();
Actor(string, Movie *[]);
virtual ~Actor();

    string name;
    Movie * movies[10];
    void display();
};
#endif