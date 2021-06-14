#include <iostream>
// 組み込み型は基本的にJavaと同じ(^ v ^)

void nochange(int i)
{
  i = 42;
}

void set42(int* pi)
{
  *pi = 42;
}

int main()
{
  // 型
  float f = 3.1415926f; // 最後にfをつけるとfloat型の値となる
  std::cout << f << std::endl;
  printf("%f", f); // Cで出力してみた

  // ポインターで値を変更
  int i = 0;
  nochange(i); //  値渡しなので、実引数は変更されない
  std::cout << i << std::endl; // 0
  set42(&i); //  参照渡しなので、実引数も変更される
  std::cout << i << std::endl; // 42

  // null ポインター
  int* ptr = nullptr;
  if (ptr == nullptr)
  {
    std::cout << "ptrはヌルポインターです" << std::endl;
  }
  else
  {
    *ptr = 42;
  }

  // キャスト演算子による型変換
  char c = 99;
  std::cout << static_cast<int>(c) << std::endl; // char型のcをint型に変更
}

/* リテラル
  0 // 数値リテラル
  '0' // 文字リテラル
  "0" // 文字列リテラル
  0b1010 0b0101u1 <- 10 5ul // 2進数の整数リテラル 
*/

/* 間接参照
  int i = 0 // 変数iを0で初期化
  int* pi = &i; // piは変数iのアドレスを持つ
  *pi = 42; // piが持つアドレスを使って変数iを間接参照・代入する
*/

/* constなポインター変数
  int n = 0;
  int m = 1;
  int* const num = &n;
  num = &m; <- エラーになる
*/