#include <iostream>
using namespace std;
#include "Actor.h"
#include "Movie.h"


int main() {
    Actor a;
  Actor b;
  Actor c;
  a.name = "a";
  b.name = "b";
  c.name = "c";


   Actor * actorsX[10] = {&a, &b, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};
  Actor * actorsY[10] = {&c, &b, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};
  Actor * actorsZ[10] = {&a, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};
  
  Movie x("x", actorsX);
  Movie y("y", actorsY);
  Movie z("z", actorsZ);

  Movie * moviesA[10] = {&x, &z, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};
  Movie * moviesB[10] = {&x, &y, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};

  Movie * moviesC[10] = {&y, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr, nullptr};


  for(int i = 0; i <10 ; i++)
    {
      a.movies[i] = moviesA[i];
      b.movies[i] = moviesB[i];
      c.movies[i] = moviesC[i];

    }


  a.display();
  b.display();
  c.display();

  x.display();
  y.display();
  z.display();
return 0;
}
