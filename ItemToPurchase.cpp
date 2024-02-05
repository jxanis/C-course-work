#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() : itemName(""), itemPrice(), itemQuantity () {
}

void ItemToPurchase::SetName(const string& itemName) {
   this->itemName = itemName;
   }
   
string ItemToPurchase::GetName() const {
   return this->itemName;
   }
   
void ItemToPurchase::SetPrice(int itemPrice) {
   this->itemPrice = itemPrice;
   }
   
int ItemToPurchase::GetPrice() const {
   return this->itemPrice;
   }

void ItemToPurchase::SetQuantity(int itemQuantity) {
   this->itemQuantity = itemQuantity;
   }
   
int ItemToPurchase::GetQuantity() const {
   return this->itemQuantity;
   }
