#include <vector>
#include <algorithm>
#include "Guitar.h"
using namespace std;

class Inventory {
private:
    vector<Guitar> guitars;

public:
    void addGuitar(string serialNumber, double price, string builder, string model,
               string type, string backWood, string topWood) {
    Guitar newGuitar(serialNumber, price, builder, model, type, backWood, topWood);
    guitars.push_back(newGuitar);
}

    Guitar* getGuitar(string serialNumber) {
        for (Guitar& guitar : guitars) {
            if (guitar.getSerialNumber() == serialNumber) {
                return &guitar;
            }
        }
        return nullptr; // return null if no guitar with the given serial number is found
    }

    Guitar* search(const Guitar& searchGuitar) {
        for (Guitar& guitar : guitars) {
            if (guitar.getBuilder() == searchGuitar.getBuilder() &&
                guitar.getModel() == searchGuitar.getModel() &&
                guitar.getType() == searchGuitar.getType() &&
                guitar.getBackWood() == searchGuitar.getBackWood() &&
                guitar.getTopWood() == searchGuitar.getTopWood()) {
                return &guitar;
            }
        }
        return nullptr; // return null if no matching guitar is found
    }
};