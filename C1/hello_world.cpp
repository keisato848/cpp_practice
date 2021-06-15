#include <iostream> // 標準で提供されている入出力機能を有効するために必要なヘッダーファイルを読み込む

// main()関数の定義
int main() 
{
  std::cout << "Hello, world" << std::endl << "everyone" << std::endl; // std::coutを左側に起き、左シフト演算子の右側に出力したい文字列を配置し、std::endlで改行される
  std::cout << "Hello, c++" << std::endl;
}