#include <iostream>
#include <string>

struct Student {
    int id;
    std::string name;
    float gpa;
    std::string getDetails() const {
        return "ID: " + std::to_string(id) + ", Name: " + name + ", GPA: " + std::to_string(gpa);
    }
};

int main() {
    Student s1;
    s1.id = 1;
    s1.name = "Alice";
    s1.gpa = 3.9;

    std::cout << "ID: " << s1.id << "\n";
    std::cout << "Name: " << s1.name << "\n";
    std::cout << "GPA: " << s1.gpa << "\n";
    std::cout << "Details: " << s1.getDetails() << "\n";
    return 0;
}