#ifndef MAP_H
#define MAP_H

#include <vector>
#include "SFML/System/Vector2.hpp"
#include "Constants.h"

class Map {
private:
  std::vector<std::vector<con::Tile>> tiles;

  void generate();

public:
  Map(int width, int height);

  void setTileType(con::TileType type, const sf::Vector2i& pos);

  void draw();
};

#endif