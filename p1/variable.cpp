#include <iostream>

// 戻り値がない関数の定義
void print(int x)
{
  std::cout << x << std::endl;
}

// 戻り値がある関数の定義
int add(int x, int y)
{
  int z = x + y;
  return z; // 呼び出し元に処理が戻る
  // 以下の記述は呼び出されない
  std::cout << "表示されません" << std::endl;
}

int sum(int a, int b, int c)
{
  return a + b + c;
}

int main()
{
  // 変数の宣言と初期化
  int l = 5;
  int m(5);
  int a = 1, b = 2, c = 3; // 複数の変数宣言と初期化

  // 定数の宣言と初期化
  const int height = 175;
  int const weight = 70;
  // const int bmi; <-初期化をしないとエラーになる

  // 関数の呼び出し
  int add_r = add(10, 20); // 関数の戻り値が代入される
  print(add_r); // 30が出力される
  int sum_r = sum(111, 222, 333); // 関数の戻り値が代入される
  print(sum_r); // 666が出力される
}