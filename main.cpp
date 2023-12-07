#include <iostream>
using namespace std;

struct point {
  double m_x;
  double m_y;
  public:
  point(double x, double y) {
    m_x = x;
    m_y = y;
  }
  double get_m_x() const{ return m_x; }
  double get_m_y() const{ return m_y; }
};

void print_point(const point& point_object);

int main()
{
  int i;
  for (i = 0; i < 5; i++){
    point my_point(i, 2 * i);
    print_point(my_point);
  }
  return 0;
}

void print_point(const point& point_object) {
  std::cout << "x:" << point_object.get_m_x() << ", y: "
    << point_object.get_m_y() << std::endl;
}
