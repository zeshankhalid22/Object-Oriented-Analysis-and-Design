#include <string>
using namespace std;

class Guitar {
private:
    string serialNumber;
    double price;
    string builder;
    string model;
    string type;
    string backWood;
    string topWood;

public:
    Guitar(string serialNumber, double price, string builder, string model,
       string type, string backWood, string topWood)
    : serialNumber(serialNumber), price(price), builder(builder), model(model),
      type(type), backWood(backWood), topWood(topWood) {}
    // Getters
    string getSerialNumber() const {
        return serialNumber;
    }

    double getPrice() const {
        return price;
    }

    string getBuilder() const {
        return builder;
    }

    string getModel() const {
        return model;
    }

    string getType() const {
        return type;
    }

    string getBackWood() const {
        return backWood;
    }

    string getTopWood() const {
        return topWood;
    }

    // Setter
    void setPrice(double newPrice) {
        price = newPrice;
    }
};