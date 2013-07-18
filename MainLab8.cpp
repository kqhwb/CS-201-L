#ifndef ITEM_H
#define ITEM_H
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





 // ITEM.cpp file 




#include "Item.h"
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
 #include "Item.h"


 using namespace std;



 int main()
 {
     Item item_object[6];
     double total_price = 0.0;
     item_object[0] = Item("Laptop",1250.00);
     item_object[1] = Item("Printer",499.99);
     item_object[2] = Item("Desktop",399.99);
     item_object[3] = Item("Monitor",125.50);
     item_object[4] = Item("Keyboard",45.00);
     item_object[5] = Item("Mouse",12.99);
     
	 cout << " # Item name \t Price " << endl;
     
	 for(int i=0; i<6; i++)
     {
             cout << i << ". " << item_object[i].getName() << "\t" << item_object[i].getPrice() << endl;
     }
     
	 int k=0,i=0;
     int input;

     while(k!=7)
     {
                cout << " how many " << item_object[i].getName() << "s you want? " << endl;
                cin >> input;
                total_price = total_price + input*item_object[i].getPrice();
                i++;
                if(i==6) break;
     cout << " Enter 7. to finish program " << endl;
     cin >> k;              
     }
     cout << "total purchase amount is " << total_price << endl;
     return 0;
 }

