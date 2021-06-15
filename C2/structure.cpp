#include <iostream>

// 構造体の定義
struct product
{
  // メンバー変数の数だけ初期値を記述する
  int id;
  int price;
  int stock;
};

// 共用体の定義
union U
{
  // 全て同じアドレス、値を持つ
  int a;
  int b;
  int c;
};

// 列挙体の定義
enum class Category
{
  value1,
  value2,
  value3 = 100, // 暗黙的には2だが、明示的に100を指定
  value4, // 暗黙的に101
};

// ベースとなる型の指定付き列挙体
enum class Animal : char
{
  value1,
  value2,
  value3 = 100,
  value4,
};


void show_product(product product) // 構造体を受け取る変数
{
  // アロー変数を使ったメンバー変数の取得
  std::cout << "商品ID: " << product.id << std::endl;
  std::cout << "単価: " << product.price << std::endl;
  std::cout << "在庫数: " << product.stock << std::endl;
}
int main()
{
  product pen =
  {
    // 定義した順番通りに初期値を書く
    0,
    100,
    200,
  };

  product* ptr = &pen; // 構造体変数へのポインター

  show_product(pen); // 通常の変数と同様に関数に渡す

  Category cat = Category::value3;
  std::cout << static_cast<int>(cat) << std::endl;
}