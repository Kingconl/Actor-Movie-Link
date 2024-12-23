#include <iostream>
#include "Actor.h"
#include "Movie.h"

Actor:: Actor()
{
  name = "";
  for(int i = 0; i<10 ; i++)
    {
    movies [i]= nullptr;
    }

  return;
}

Actor:: ~Actor()
{
  //dtor
}

Actor:: Actor(string _name, Movie * _movies[10])
{
  name = _name;

  for(int i = 0; i<10 ; i++)
    {
    movies [i]= _movies[i];
    }
  return;
}
void Actor::display()
{
  cout << name << "movies:" << endl;
  for(int i = 0; i<10;i++)
    {
      if(movies[i]!= nullptr)
      {
        cout << movies[i]->title << endl << "Actors of: " << endl;
        movies[i]->display();
      }
    }

  
  return;
}