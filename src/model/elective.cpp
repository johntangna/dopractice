/**
 * @brief 选课实体类
 * 
 */
class Elective
{
public:
  int get_stu_no(void);
  int get_cource_no(void);
  int get_grade(void);
  void set_stu_no(int stu_no);
  void set_cource_no(int cource_no);
  void set_grade(int grade);

private:
  // 学号
  int stu_no;
  // 课号
  int cource_no;
  // 成绩
  int grade;
}


int Elective::get_stu_no() {
  return stu_no;
}

int Elective::get_cource_no() {
  return cource_no;
}

int Elective::get_grade() {
  return grade;
}

void Elective::set_stu_no(int stu_no) {
  this->stu_no = stu_no;
}

void Elective::set_cource_no(int cource_no) {
  this->cource_no = cource_no;
}

void Elective::set_grade(int grade) {
  this->grade = grade;
}