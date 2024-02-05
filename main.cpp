#include <iostream>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   ItemToPurchase item1;
   ItemToPurchase item2;
    
    cout << "Item 1" << endl;
    cout << "Enter item name;" << endl;
    string name1;
    getline(cin, name1); 
    item1.SetName(name1);
    
    cout <<"Enter the item price:" << endl;
    int price1;
    cin >> price1;
    item1.SetPrice(price1);
    
    cout << "Enter the item quantity:" << endl;
    int quantity1;
    cin >> quantity1;
    item1.SetQuantity(quantity1);
    
    cin.ignore();
    cout << endl;
    
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    string name2;
    getline(cin, name2);
    item2.SetName(name2);
    
    cout << "Enter the item price:" << endl;
    int price2;
    cin >> price2;
    item2.SetPrice(price2);
    
    cout << "Enter the item quantity:" << endl;
    int quantity2;
    cin >> quantity2;
    item2.SetQuantity(quantity2);
    
    int totalCost = (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice());
    
    cout << "\nTOTAL COST:" << endl;
    
    cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << "= $" << (item1.GetQuantity() * item1.GetPrice()) << endl;
    
    cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << "= $" << (item2.GetQuantity() * item2.GetPrice()) << endl;
    
    cout << endl;
    
    cout << "Total: $" << totalCost << endl;
    return 0;
}
