#include <iostream>
using namespace std;
class Student
{
    char name[30];
     int age;
     char batch[20];
    public:
    void get_details(void)
    {
    cout<< "Enter Student's Name:"<<endl;
    cin>>name;
    cout<< "Enter your Age:"<<endl;
    cin>>age;
    cout<<"Enter your batch:"<<endl;
    cin>>batch;
    }
    void display_details(void);
};
void Student::display_details(void)
{
    cout<< " STUDENT'S NAME:"<<name<<endl;
    cout<< "AGE:"<<age<<endl;
    cout<<"BATCH:"<<batch<<endl;

}

int main()
{
    Student p;
    p.get_details();
    p.display_details();
    return 0;
}
