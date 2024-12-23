#include <iostream>
#include "Actor.h"
#include "Movie.h"

Movie:: Movie()
{
  title = "";
  for(int i = 0; i<10 ; i++)
    {
    actors [i]= nullptr;
    }

  return;
}

Movie:: ~Movie()
{
  //dtor
}

Movie:: Movie(string _title, Actor * _actors[10])
{
  title = _title;
  
  for(int i = 0; i<10 ; i++)
    {
      //if(_actors[i] != nullptr)
      //{
        actors [i]= _actors[i];
      //}
    }
  return;
}

void Movie::display()
{
  for(int i = 0; i<10;i++)
    {
      if(actors[i]!=nullptr)
      {
        cout << actors[i]->name << endl;
      }

    }
  
  return;
}