#include <iostream>


int main()
{
  int i = 1 / 2; // 0(小数点以下を切り捨てた整数)
  float f = 1 / 2; // 0.5(浮動小数点数)

  // sizeof演算子
  int n = 5;
  std::cout << sizeof(n) << std::endl; // バイト数が出力される(char型のみ1バイト)
  std::cout << sizeof(n + 1) << std::endl;

  // 優先順位と結合規則
  int a = 10;
  a *= 5;
  std::cout << a << std::endl;
}