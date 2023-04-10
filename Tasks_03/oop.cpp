#include <iostream>

// struct Fruit
class Fruit
{
    public:
    // default constructor
    Fruit() : fruit_type("Apple"), price_kg(0), weight(0)
    {
    }

    // paramterized constructor
    // Fruit(std::string ftype)
    // {
    //     this->fruit_type = ftype;
    // }

    //intializer list
    Fruit(std::string ftype): fruit_type(ftype)
    {
    };

    void setPrice(std::uint16_t value)
    {
        price_kg = value;
    };

    void setWeight(std::uint16_t value)
    {
        this->weight = value;
    };

    std::uint16_t getTotalPrice()
    {
        return price_kg * weight;
    };

    std::string getFruitType()
    {
        return this->fruit_type;
    };
    private:
    std::string fruit_type;
    std::uint16_t price_kg;
    std::uint16_t weight;
    std::uint16_t total_price;
};

int main()
{
    Fruit f("orange");
    std::uint16_t p;
    std::uint16_t w;
    std::cout <<"Enter price: " <<std::endl;
    std::cin >> p;
    f.setPrice(p);

    std::cout <<"Enter weight: " <<std::endl;
    std::cin >> w;
    f.setWeight(w);
    std::cout <<"Fruit is : " << f.getFruitType() << std::endl;
    std::cout <<"Total price : " << f.getTotalPrice() << std::endl;

    Fruit a;
    std::cout <<"Fruit is : " << a.getFruitType() << std::endl;
    std::cout <<"Total price : " << a.getTotalPrice() << std::endl;
    return 0;
}
