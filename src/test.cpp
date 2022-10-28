
#include <iostream>
#include <algorithm>
#include "./model/student.cpp"
using namespace std;
/**
 * @file test.cpp
 * @author your name (you@domain.com)
 * @brief 测试类
 * @version 0.1
 * @date 2022-10-28
 * 
 * @copyright Copyright (c) 2022
 * 
 */
int main()
{
    // set<Cource> cource_set;
    // set<Elective> elective_set;
    Student stu;
    // Cource cource;
    // Elective elective;
    stu.set_stu_no(543);
    stu.set_stu_name("wc");
    cout << stu.get_stu_no() << " " << stu.get_stu_name() << endl;
    return 0;
}