#ifndef MAPTILEPAIR_H
#define MAPTILEPAIR_H
#include "Tile.hpp"

class MapTilePair {
	private:
		int coords[3];
		Tile tile;
		bool* adjacent;
	public:
		MapTilePair();
		MapTilePair(int coords[3], Tile tile);
		MapTilePair(int coords[3], Tile tile, bool* adjacent1);
		int* getCoords();
		Tile getTile();
		void changeTile(Tile tile);
		bool* getAdjacent();
		void changeAdjacentX(bool adjacentX);
		void changeAdjacentY(bool adjacentY);
		void changeAdjacentZ(bool adjacentZ);
		void changeAdjacent(bool adjacentX, bool adjacentY, bool adjacentZ);
		~MapTilePair();
};

#endif