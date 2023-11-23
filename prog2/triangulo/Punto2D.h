#pragma once
#include <string>

class Punto2D{

  private:

    int x;
    int y;

  public :

  Punto2D();
  Punto2D(int xv, int yv);

  void setx(int xval);
  void sety(int yval);
  std::string to_string();
  double distance(Punto2D otro);

};