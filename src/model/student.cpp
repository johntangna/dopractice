struct Student
{
public:
  int get_stu_no(void);
  int get_stu_name(void);
  int get_stu_gender(void);
  int get_stu_age(void);
  void set_stu_no(int stu_no);
  void set_stu_name(char stu_name);
  void set_stu_gender(char stu_gender);
  void set_stu_age(int stu_age);

private:
  // 学号
  int stu_no;
  // 姓名
  char stu_name;
  // 性别
  char stu_gender;
  // 年龄
  int stu_age;
}

int
Student::get_stu_no(void)
{
  return stu_no;
}

char Student::get_stu_name(void)
{
  return stu_name;
}

char Student::get_stu_gender(void)
{
  return stu_gender;
}

int Student::get_stu_age(void)
{
  return stu_age;
}

void Student::set_stu_no(int stu_no)
{
  stu_no = stu_no
}

void Student::set_stu_name(char stu_name)
{
  stu_name = stu_name
}

void Student::set_stu_gender(char stu_gender)
{
  stu_gender = stu_gender
}

void Student::set_stu_age(int stu_age)
{
  stu_age = stu_age
}