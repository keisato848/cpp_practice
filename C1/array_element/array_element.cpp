#include <string> // std::stringを使用するためにstringヘッダーを読み込み
#include <iostream>

int main()
{
  // int a[]; //名前と長さを指定しただけでは、初期化されない
  int nums[] = {1, 2, 3, 4, 5};
  int ns[] = {}; // 配列の要素全てを0で初期化
  int arr[5] = {1, 2, 3}; //  残りの要素は全て0で初期化
  
  std::cout << sizeof(nums) << std::endl; // 配列全体のサイズを出力
  std::cout << sizeof(nums) / sizeof(int) << std::endl; // 配列のサイズを要素型で割ると配列の長さがわかる
  std::cout << sizeof(nums) / sizeof(nums[0]) << std::endl; // 型がわからない場合でも配列の長さがわかる

  // 文字列
  char hello[] = "Hello"; // 文字列リテラルで初期化
  char array[6] = {'a', 'b', 'c'};
  array[3] = 'd';
  array[4] = 'e';
  array[5] = '\0'; // 文字列の最後は必ずヌル文字でなければならない

  std::cout << hello << ',' << array << std::endl;

  std::string hey = "Hey";
  std::cout << hey;
  hey = ", string";
  std::cout << hey << std::endl;
}