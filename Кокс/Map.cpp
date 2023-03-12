#include "Map.h"

void Map::generate() {
  for (size_t i = 0; i < con::TILE_WIDTH; ++i)
    tiles[i][4].type = con::TileType::forest;
}

Map::Map(int width, int height) {
  tiles.resize(width);
  for (auto& a : tiles)
    a.resize(height);

  generate();
}

void Map::setTileType(con::TileType type, const sf::Vector2i& pos) {
  tiles[pos.x][pos.y].type = type; 
}

#include <iostream>
void Map::draw() {
  for (size_t i = 0; i < con::TILE_HEIGHT; ++i) {
    for (size_t j = 0; j < con::TILE_WIDTH; ++j)
      std::cout << static_cast<char>(tiles[j][i].type);
    std::cout << std::endl;
  }
}
