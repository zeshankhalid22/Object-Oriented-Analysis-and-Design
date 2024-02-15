#include <iostream>
#include "Inventory.h"
using namespace std;

Inventory InitializeInventory() {
    Inventory inventory;

    // Add some sample guitars to the inventory
    inventory.addGuitar("V95693", 1499.95, "Fender", "Stratocastor", "electric", "Alder", "Alder");
    inventory.addGuitar("V9512", 1549.95, "Fender", "Stratocastor", "electric", "Alder", "Alder");
    inventory.addGuitar("TG-438", 899.95, "Martin", "D-18", "acoustic", "Mahogany", "Adirondack");
    inventory.addGuitar("LG-354", 799.95, "Gibson", "Les Paul", "electric", "Maple", "Maple");

    return inventory;
}

int main() {
    Inventory inventory;

    Guitar whatErinLikes = *new Guitar("any",1556.2,"fender","any","acoustic","Mahogany","Adirondack");

    // * We will not be able to  found anything even we have a Guiter with somehow same specs
    if(inventory.search(whatErinLikes) != NULL) {
        cout<<"Wow, we'd found a Guiter for you!\n";
    }
    else {
        cout<<"Sorry, Erin! we have nothing for you.\n";
    }


    return 0;
}
