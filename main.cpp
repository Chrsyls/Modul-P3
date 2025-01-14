#include <iostream>
using namespace std;


class basic_Stat {
public:
    int hp,def,att;
public:
    basic_Stat(int a, int b,int c) : hp(a), def(b),att(c) {}
    virtual void displayInfo() {
        cout<<"basic stat"<<endl;
        cout << "hp: " << hp << ", def: " << def << ", att: " << att << endl;
    }
    int getHp() const {
        return hp;
    }
    int getDef() const {
        return def;
    }
    int getAtt() const {
        return att;
    }



};


// Buat kode disini

class Monster : public basic_Stat {
public:
    Monster(int a, int b, int c) : basic_Stat(a, b, c) {}

    void displayInfo() override {
        cout << "Monster stat" << endl;
        cout << "hp: " << getHp() << ", def: " << getDef() << ", att: " << getAtt() << endl;
    }

    void setHp(int newHp) {
        hp = newHp;
    }

    void getSlash(int damage) {
        setHp(getHp() - damage);
    }
};

// selese


class SwordMaster : public basic_Stat {
public:
    SwordMaster(int a, int b, int c) : basic_Stat(a, b, c){}




    void displayInfo() override {
        cout<<"Sword master stat"<<endl;
        cout << "hp: " << getHp() << ", def: " << getDef() << ", att: " << getAtt() << endl;
    }
  
    void slash(Monster &target) {
        int damage = getAtt() - target.getDef();
        if (target.getHp() >= 400) {
            target.setHp(target.getHp() - 400);
        }
        else {cout << "def terlalu tinggi coba berlatih kembali"<< endl;
         }
    }
};

int main() {
    SwordMaster alice(100, 2, 30);
    Monster Titan1(1000, 200, 100);//*




    cout << "Before slash:" << endl;//*
    alice.displayInfo();//*

    // output sebelum dan setelah terkena serangan, hp Titan1 berkurang 400 setelah terkena serangan dan keluarkan displayInfo hp def dan attnya
    // Buat kode disini

    Titan1.displayInfo();
    alice.slash(Titan1);
    
    cout << "After slash:" << endl;
    alice.displayInfo();
    Titan1.displayInfo();

    // selese


    return 0;}
