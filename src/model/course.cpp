struct Cource
{
public:
  int get_cource_no(void);
  char get_cource_name(void) ;
  int get_cource_count(void);
  void set_cource_no(int cource_no);
  void set_cource_name(char cource_name);
  void set_cource_count(int cource_count);
private:
  // 课号
  int cource_no;
  // 课名
  char cource_name;
  // 学分
  int cource_count;
}

int Cource::get_cource_no(void) {
  return cource_no;
}

char Cource::get_cource_name(void) {
  return cource_name;
}

int Cource::get_cource_count(void) {
  return cource_count;
}

void Cource::set_cource_no(int cource_no) {
  cource_no = cource_no;
}

void Cource::set_cource_name(char cource_name) {
  cource_name = cource_name;
}

void Cource::set_cource_count(int cource_count) {
  cource_count = cource_count;
}