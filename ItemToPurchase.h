#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
   public:
      ItemToPurchase();
      
      void SetName(const string& itemName);
      string GetName() const;
      
      void SetPrice(int itemPrice);
      int GetPrice() const;
      
      void SetQuantity(int itemQuantity);
      int GetQuantity() const;
   
   private:
      string itemName = "none";
      int itemPrice = 0;
      int itemQuantity = 0;
};
#endif