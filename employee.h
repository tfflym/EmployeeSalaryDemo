#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& id, const std::string& name, double salary);
    std::string getId() const;
    std::string getName() const;
    double getSalary() const;
    void setSalary(double newSalary);

private:
    std::string id;
    std::string name;
    double salary;
};

#endif
