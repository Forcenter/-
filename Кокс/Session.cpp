#include "Session.h"

Session::Session():
  map(con::TILE_WIDTH, con::TILE_HEIGHT)
{}

#include <iostream>
bool Session::update() {
  int a, b;
  char c;
  std::cin >> a >> b >> c;

  map.setTileType(static_cast<con::TileType>(c), sf::Vector2i{ a, b });

  std::cin.get();
  return true;
}

void Session::draw() {
  map.draw();
}
