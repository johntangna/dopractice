#include <string>
#include <cstring>
using namespace std;

class Student
{
public:
  int get_stu_no(void);
  const string get_stu_name(void);
  const string get_stu_gender(void);
  int get_stu_age(void);
  void set_stu_no(int stu_no);
  void set_stu_name(const string stu_name);
  void set_stu_gender(const string stu_gender);
  void set_stu_age(int stu_age);

private:
  // 学号
  int stu_no;
  // 姓名
  const string stu_name;
  // 性别
  const string stu_gender;
  // 年龄
  int stu_age;
};

int
Student::get_stu_no(void)
{
  return stu_no;
}

const string Student::get_stu_name(void)
{
  return stu_name;
}

const string Student::get_stu_gender(void)
{
  return stu_gender;
}

int 
Student::get_stu_age(void)
{
  return stu_age;
}

void 
Student::set_stu_no(int stu_no)
{
  this->stu_no = stu_no;
}

void 
Student::set_stu_name(const string stu_name)
{
  strcpy(this->stu_name, stu_name);
}

void 
Student::set_stu_gender(const string stu_gender)
{
  strcpy(this->stu_gender, stu_gender);
}

void 
Student::set_stu_age(int stu_age)
{
  this->stu_age = stu_age;
}