#include <iostream>
using std::cout, std::cin, std::endl;
int main(){
  int head,feet,chick,rabbit,a,b;
  cout << "�ϴ������š�����";
  cin >> a;
  cout << "��С�����š�����";
  cin >> b;
  cout << "ͷ��:";
  cin >> head;
  cout << "���š�����";
  cin >> feet;
  rabbit = (feet - head * b) / (a-b);
  chick = head - rabbit;
  cout << "��С����" << chick << "�����ϴ�����" << rabbit << "��\n";
  system("pause");
}