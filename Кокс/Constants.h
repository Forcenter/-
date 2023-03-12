#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace con
{
  const int WINDOW_WIDTH = 1920;
  const int WINDOW_HEIGHT = 1080;

  const int TILE_WIDTH = 10;
  const int TILE_HEIGHT = 6;

  enum class TileType {
    meadow = 'G',
    ocean = '-',
    hills = 'm',
    mountain = 'M',
    cleft = 'V',
    vulcano = 'A',
    desert = '_',
    forest = 'F',
  };

  enum class DistrictType {
    none,
    cityCenter,
    outpostCenter,
    mining,
    generator,
    industrial,
    spaceport,
    production,
    commercial,
    residential,
    railwayStation,

  };


  struct Tile {
    con::TileType type = con::TileType::meadow;
    con::DistrictType district = con::DistrictType::none;
  };
}

#endif
