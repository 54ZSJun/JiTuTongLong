#include <iostream>
using std::cout, std::cin, std::endl;
int main(){
  int head,feet,chick,rabbit,a,b;
  cout << "较大数“脚”数：";
  cin >> a;
  cout << "较小数“脚”数：";
  cin >> b;
  cout << "头数:";
  cin >> head;
  cout << "“脚”数：";
  cin >> feet;
  rabbit = (feet - head * b) / (a-b);
  chick = head - rabbit;
  cout << "较小数有" << chick << "个，较大数有" << rabbit << "个\n";
  system("pause");
}