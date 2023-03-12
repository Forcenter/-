#include "SFML/Graphics.hpp"
#include "Session.h"

int main() {
  Session session;

  while (session.update()) {
    session.draw();
  }
  return 0;
}