#include <iostream>

// クラスの定義
class C
{
  int default_member;
  public: // 公開のアクセス指定子
    int public_member; // 公開設定のメンバー変数
  private: // 非公開のアクセス指定子
    int private_member; // 非公開のメンバー設定
};

int main()
{
  C c; // クラスCのインスタンスを生成
  // c.default_member = 0; // 非公開なのでエラー
  // c.public_member = 40; // 公開されているメンバーなのでアクセス可
  // c.private_member = 70; // 非公開なのでエラー
}
