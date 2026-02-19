#include <cstdio>

using namespace std;

class Animal {
public:
    // 鳴く関数（純粋仮想関数）
    virtual void sound() const = 0;
};


class dog : public Animal{
public:
    void sound() const override {
        printf("イヌ鳴き声:ワン\n");
    }
};


class cat : public Animal {
public:
    void sound() const override {
        printf("ネコ鳴き声:ニャー\n");
    }
};

int main() {

    Animal* animal1 = new dog();
    Animal* animal2 = new cat();

    animal1->sound();
    animal2->sound();

    delete animal1;
    delete animal2;

    return 0;
}