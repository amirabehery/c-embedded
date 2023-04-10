#include <iostream>

class Employee
{
    public:
    Employee(std::uint16_t v0, std::string v1, std::string v2) : id(v0), firstName(v1), lastName(v2)
    {
        salary = 1000;
        hired = true;
    }

    void display()
    {
        std::cout << "====================================" << std::endl;
        std::cout << "Employee Code: " << this->id << std::endl;
        std::cout << "Employee Name: " <<this->firstName << " " << this->lastName << std::endl;
        std::cout << "Employee Salary: " <<this->salary << std::endl;
    };
    void hire()
    {
        hired = true;
    };

    void fire()
    {
        hired = false;
    };

    void setFirstName(std::string value)
    {
        std::cout << "First Name Changed...." << std::endl;
        firstName = value;
    }

    void setLastName(std::string value)
    {
        std::cout << "Last Name Changed...." << std::endl;
        lastName = value;
    }

    void setId(std::uint16_t value)
    {
        std::cout << "Id Changed...." << std::endl;
        id = value;
    }

    void setSalary(std::uint16_t value)
    {
        std::cout << "Salary Changed...." << std::endl;
        salary = value;
    }

    std::string getFirstName()
    {
        return firstName;
    }

    std::string getLastName()
    {
        return lastName;
    }

    std::uint16_t getId()
    {
        return id;
    }

    std::uint16_t getSalary()
    {
        return salary;
    }

    bool isHired()
    {
        return hired;
    }

    private:
    std::uint16_t id;
    std::string firstName;
    std::string lastName;
    std::uint16_t salary;
    bool hired;
};

int main()
{
    Employee e1(2, "Ann","Jack");
    e1.display();
    e1.setSalary(20000);
    e1.display();
    Employee e2(10, "Joe","Jack");
    e2.setSalary(7500);
    e2.display();
    Employee e3(20, "Lue","Sandy");
    e3.setSalary(1500);
    e3.display();
    std::cout << e3.isHired() <<std::endl;
    e3.fire();
    std::cout << e3.isHired() <<std::endl;
    return 0;
}