/* Copyright 2021
** Justin Baum
** MIT License
** AlgoExpert Solutions
*/

#include <vector>
using namespace std;

bool classPhotos(vector<int> redShirtHeights, vector<int> blueShirtHeights) {
    sort(redShirtHeights.begin(), redShirtHeights.end());
    sort(blueShirtHeights.begin(), blueShirtHeights.end());
    
    bool redFront = true;
    bool blueFront = true;
    for (int i = 0; i < redShirtHeights.size(); ++i) {
        redFront &= redShirtHeights[i] > blueShirtHeights[i];
        blueFront &= blueShirtHeights[i] > redShirtHeights[i];
    }
    return redFront || blueFront;
    
}
