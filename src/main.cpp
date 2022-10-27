#include <iostream>
#include "./model/student.cpp"
using namespace std;
int main()
{
    Student stu;
    stu.set_stu_no(1);
    cout << "stu_no:" << stu.get_stu_no();
    return 0;
}