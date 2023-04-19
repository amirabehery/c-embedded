#include <iostream>

class Control
{
    public:
    void manualControl()
    {
        std::cout <<"Control switched to manual" <<std::endl;
    }
    void autoControl()
    {
        std::cout <<"Control witched to Automatic" <<std::endl;
    }
};

class Vehicle
{
    public:
    Vehicle(std::string vtype ="unknown", std::uint16_t x=0) : v_type(vtype), speed(x)
    {

    }

    void display_info()
    {
        std::cout << "Vehicle Type: " <<this->v_type << std::endl;
        std::cout << "Vehicle Speed: " <<this->speed << std::endl;
    }
    void setType(std::string v)
    {
        v_type = v;
    }

    void setSpeed(std::uint16_t s)
    {
        speed = s;
    }

    void Run()
    {
        std::cout  <<this->v_type << " is moving..........."<< std::endl;
    }
    void Stop()
    {
        std::cout  <<this->v_type << " is Stopped..........."<< std::endl;
    }


    private:
    std::string v_type;
    std::uint16_t speed;
};

class Bike : public Vehicle, public Control
{
    public:
    Bike()
    {
        Stop();
        manualControl();
    }    
    private:

};

class Aeroplane : public Vehicle, public Control
{
    public:
    Aeroplane()
    {
        Run();
        autoControl();
    }    
    private:

};
int main()
{
    Vehicle v1;
    v1.setType("Car");
    v1.setSpeed(100);

    v1.display_info();
    v1.Run();
    v1.Stop();

    Bike b;
    b.setType("bike");
    b.setSpeed(150);
    b.display_info();
    b.Run();
    b.Stop();

    Aeroplane p;
    p.setType("Plane");
    p.setSpeed(1000);
    p.display_info();
    return 0;
}