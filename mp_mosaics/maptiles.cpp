/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
    /**
     * @todo Implement this function!
     */
    MosaicCanvas* result = new MosaicCanvas(theSource.getRows(), theSource.getColumns());
    vector<Point<3>> tile;
    map<Point<3>, int> index;
    for(size_t i = 0; i < theTiles.size(); i++){
        Point<3> average = convertToXYZ(theTiles[i].getAverageColor());
        tile.push_back(average);
    }
    for(size_t i = 0; i < theTiles.size(); i++){
        index[tile[i]] = i;
    }
    KDTree<3> tree(tile);
    for(int i = 0; i < theSource.getRows(); i++){
        for(int j = 0; j < theSource.getColumns(); j++){
            Point<3> p = convertToXYZ(theSource.getRegionColor(i, j));
            Point<3> nearest = tree.findNearestNeighbor(p);
            result->setTile(i, j, &theTiles[index[nearest]]);
        } 
    }
    return result;
}

