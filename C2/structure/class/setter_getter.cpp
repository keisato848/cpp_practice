#include <iostream>

class product
{
  int id;
  int price;
  int stock;

  public:
    int get_id(); // 商品IDのgetter
    void set_id(int new_id); // 商品IDのsetter

    int get_price(); // 商品価格のgetter
    void set_price(int new_price); // 商品価格のsetter

    int get_stock(); // 商品在庫のgetter
    void set_stock(int new_stock); // 商品価格のsetter

    void set_all(int new_id, int new_price, int new_stock);
};

int product::get_id()
{
  // メンバー関数の内側ではメンバー変数に直接アクセスできる
  return id;
}
void product::set_id(int new_id)
{
  id = new_id;
}

int product::get_price()
{
  return price;
}
void product::set_price(int new_price)
{
  if (new_price < 0)
  {
    std::cout << "単価は0以上にしてください" << std::endl;
    return;
  }
  price = new_price;
}

int product::get_stock()
{
  return stock;
}
void product::set_stock(int new_stock)
{
  stock = new_stock;
}

void product::set_all(int new_id, int new_price, int new_stock)
{
  id = new_id;
  price = new_price;
  stock = new_stock;
}

int main()
{
  product pen;
  pen.set_id(0);
  pen.set_price(100);
  pen.set_stock(200);

  product* ptr = &pen; // インスタンスへのポインター

  // アロー関数を用いてgetterから値を取得
  std::cout << "ID:" << ptr->get_id() << std::endl;
  std::cout << "単価:" << ptr->get_price() << std::endl;
  std::cout << "在庫:" << ptr->get_stock() << std::endl;

  pen.set_all(1, 150, 300);

  std::cout << "変更後ID:" << ptr->get_id() << std::endl;
  std::cout << "変更後単価:" << ptr->get_price() << std::endl;
  std::cout << "変更後在庫:" << ptr->get_stock() << std::endl; 
}