#include <iostream>
#include "employee.h"
#include <vector>

void empDatabases(std::vector<Employee> listOfEmps)
{
    for (size_t i = 0; i < listOfEmps.size(); i++)
    {
        listOfEmps[i].display();
    }
    
}

int main()
{
    std::vector<Employee> emps;
    Employee e1(2, "Ann","Jack");
    // e1.display();
    e1.setSalary(20000);
    // e1.display();
    emps.push_back(e1);
    Employee e2(10, "Joe","Jack");
    e2.setSalary(7500);
    // e2.display();
    Employee e3(20, "Lui","Sandy");
    e3.setSalary(1500);
    // e3.display();
    std::cout << e3.isHired() <<std::endl;
    e3.fire();
    std::cout << e3.isHired() <<std::endl;

    emps.push_back(e2);
    emps.push_back(e3);
    empDatabases(emps);
    return 0;
}