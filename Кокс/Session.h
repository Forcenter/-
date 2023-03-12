#ifndef SESSION_H
#define SESSION_H

#include "Map.h"

class Session {
private:
  Map map;

public:
  Session();

  bool update();

  void draw();
};

#endif