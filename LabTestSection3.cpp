#ifndef Item
#define Item
#include<iostream>
 
using namespace std;
 

class Item
 {
       private:
             string m_name;
             double m_price;
       public:
              Item();
              Item(string name,double price);
              void setName(string name);
              string getName();
              void setPrice(double price);
              double getPrice();
 };

#endif










#include "Item'
 Item::Item()
 {
             m_name="";
             m_price=0.0;
 }
 Item::Item(string name,double price):m_name(name),m_price(price)
 {
                  
 }
 void Item::setName(string name)
 {
      m_name = name;
 }
 string Item::getName()
 {
        return m_name;
 }
 void Item::setPrice(double price)
 {
      m_price = price;
 }
 double Item::getPrice()
 {
        return m_price;
 }











 #include<iostream>
 #include "Item"
 using namespace std;
 int main()
 {
     Item ItemArray[6];
     double total_price = 0.0;
     ItemArray[0] = Item("Laptop",1250.00);
     ItemArray[1] = Item("Printer",499.99);
     ItemArray[2] = Item("Desktop",399.99);
     ItemArray[3] = Item("Monitor",125.50);
     ItemArray[4] = Item("Keyboard",45.00);
     ItemArray[5] = Item("Mouse",12.99);
     cout << " # Item name \t Price " << endl;
     for(int i=0; i<6; i++)
     {
             cout << i << ". " << ItemArray[i].getName() << "\t" << ItemArray[i].getPrice() << endl;
     }
     int k=0,i=0;
     int input;

     while(k!=7)
     {
                cout << " how many " << ItemArray[i].getName() << "s you want? " << endl;
                cin >> input;
                total_price = total_price + input*ItemArray[i].getPrice();
                i++;
                if(i==6) break;
     cout << " Enter 7. to finish program " << endl;
     cin >> k;              
     }
     cout << "total purchase amount is " << total_price << endl;
     return 0;
 }
