#include<iostream>
#include"vector.hpp"

class Empty{
    public:
        virtual void print ()
        {
            std::cout << "Base class" << std::endl;
        }
};

class Student : public Empty{
    private:
        int m_age {0};
        std::string m_name {""};
    public:
    Student() = default;
    ~Student() = default;
    void SetAge(int age)
    {
        m_age = age;
    }
    void SetName(const std::string& name)
    {
        m_name = name;
    }
    int GetAge()
    {
        return m_age;
    }
    std::string GetName()
    {
        return m_name;
    }
};

class Airplane : public Empty{
    private:
        std::string m_model {""};
        int m_serial_number{0};
    public:
        Airplane() = default;
        ~Airplane() = default;
        void SetModel(const std::string& model)
        {
            m_model = model;
        }
        void SetSerialNumber(int number)
        {
            m_serial_number = number;
        }
        int GetSerialNumber()
        {
            return m_serial_number;
        }
        std::string GetModel()
        {
            return m_model;
        }
};

int main(){
    
    int size = 3;
    Student* pt1 = new Student;
    Airplane* pt2 = new Airplane;
    Empty* tmp1 = dynamic_cast<Empty*>(pt1);
    Empty* tmp2 = dynamic_cast<Empty*>(pt2);
    Vector<Empty*> arr(size);
    arr.PushBack(tmp1);
    arr.PushBack(tmp2);
}