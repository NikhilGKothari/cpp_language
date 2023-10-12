#include <iostream>
#include <string>
#include <iomanip>

class Item {
public:
    int id;
    std::string name;
    double price;
    double gst;

    Item(int _id, const std::string& _name, double _price,double _gst) : id(_id), name(_name), price(_price),gst(_gst) {}
};

int main() {
    Item items[] = {
        {1, "Mobile", 500.0,10},
        {2, "Laptop", 1000.0,15},
        {3, "Monitor", 300.0,1.5},
        {4, "Keyboard", 30.0,5},
        {5, "Mouse", 20.0,20}
    };

 // Print table header
        std::cout << "ID  |  Name" << std::endl;
        std::cout << "----------------" << std::endl;

        // Here list of item itrate with single single item
        for (const Item& item : items) {
            std::cout << item.id << " | " << item.name << std::endl;
        }

    std::string userName;
    int itemNo;
    int quantity;
    std::string mobileNo;

    // Input item details from the user
    std::cout << "Enter your Name: ";
    std::cin >> userName;

    std::cout << "Enter the Item No: ";
    std::cin >> itemNo;

    std::cout << "Enter the Quantity: ";
    std::cin >> quantity;

    std::cout << "Enter your Mobile No: ";
    std::cin >> mobileNo;

    // Check if the item number is valid
    if (itemNo < 1 || itemNo > 5) {
        std::cout << "Invalid item number." << std::endl;
        return 1;
    }

    // Calculate the total amount
    double totalAmount = items[itemNo - 1].price * quantity;
    double totalGst = items[itemNo - 1].gst * totalAmount/100;

    // Display the invoice
    std::cout << "----------------------- Invoice -----------------------" << std::endl;
    std::cout << "Item No: " << itemNo << " | Item Name: " << items[itemNo - 1].name << " | Price: $" << items[itemNo - 1].price << std::endl;
    std::cout << "Quantity: " << quantity << " | Total Amount: $" << totalAmount << std::endl;
    std::cout << "Total GST: " << totalGst  << std::endl;
    std::cout << "User Name: " << userName << std::endl;
    std::cout << "Mobile No: " << mobileNo << std::endl;
    std::cout << "-------------------------------------------------------" << std::endl;

    return 0;
}
