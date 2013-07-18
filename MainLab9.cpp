#include <iostream> 
#include <string>

using namespace std; 




class Animal
{ 

private: 

    string m_speciesName; 

public: 

    Animal()
	{ } 

    Animal(string speciesName)
	{ 

    } 

    virtual void Attack()
	{ 

        cout << "I am a living thing." << endl; 

    } 

}; 




class Human : public Animal
{ 

public: 

    void Attack()
	{ 

        cout << "I can walk, run and tame other animals." << endl; 

    } 

}; 



class Bird : public Animal
{ 

public: 

    void Attack()
	{ 

        cout << "Huffs! I like my master" << endl; 

    } 

}; 

class Dog : public Animal
{ 

public: 

    void Attack()
{ 

        cout << "I just love to fly, pity the humans can not!" << endl; 

    } 

}; 




int main(){ 

    Animal animal; 

    Human human; 

    Bird bird; 

    Dog dog; 

    animal.Attack(); 

    human.Attack(); 

    bird.Attack(); 

    dog.Attack(); 




    Animal *an; 

    an = &human; 

    an -> Attack(); 




    an = &dog; 

    an -> Attack(); 

	system ("pause");
    
	return 0; 

} 
