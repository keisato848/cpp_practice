#include <iostream>

void show_message(int a)
{
  // if文による条件分岐
  if (a >= 10)
  {
    std::cout << a << "は10以下です" << std::endl;
  }
  else if (a == 0)
  {
    std::cout << a << "は0です" << std::endl;
  }
  else
  {
    std::cout << a << "は11以上です" << std::endl;
  }
}

void show_number(int a)
{
  // switch文による条件分岐
  switch (a + 1)
  {
  case 1:
    std::cout << a << "+1は1です" << std::endl;
    break;
  
  case 2:
    std::cout << a << "+1は2です" << std::endl;
    break;
  
  default:
    std::cout << a << "+1は1でも2でもありません" << std::endl;
    break;
  }
}

int main()
{
  show_message(10);
  show_message(11);
  show_message(0);

  show_number(1);
  show_number(2);
}