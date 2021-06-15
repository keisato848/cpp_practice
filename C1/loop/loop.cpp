#include <iostream>

int main()
{
  int value[] = {10, -5, 20, 0, 40, -5};
  int s = sizeof(value) / sizeof(int);

  // while文での処理
  int i = 0; // ループカウンター
  while (i < s)
  {
    if (value[i] > 0)
    {
      std::cout << value[i] << "は正の数です" << std::endl;
      i++;
      continue; // この回ループを中断して、条件式に飛ぶ
    }
    else if (value[i] == 0)
    {
      break; // ループ処理を中断して、次の処理に進む
    }
    else
    {
      std::cout << value[i] << "は負の数です" << std::endl;
      i++;
      continue;
    }
  }
  std::cout << "while処理の終了" << std::endl;

  // for文での処理
  for (int n = 0; n < s; n++)
  {
    if (value[n] > 0)
    {
      std::cout << value[n] << "は正の数です" << std::endl;
      // i++; <-for文では不要になる
      continue; // この回ループを中断して、条件式に飛ぶ
    }
    else if (value[n] == 0)
    {
      break; // ループ処理を中断して、次の処理に進む
    }
    else
    {
      std::cout << value[n] << "は負の数です" << std::endl;
      // i++; <-- for文では不要になる
      continue;
    }
  }
  printf("for処理の終了\n"); // cで書いてみた

  // 範囲for文での処理
  for (int elem : value) // 範囲for文を使って走査
  {
    if (elem > 0)
    {
      std::cout << elem << "は正の数です" << std::endl;
      continue; // この回ループを中断して、条件式に飛ぶ
    }
    else if (elem == 0)
    {
      break; // ループ処理を中断して、次の処理に進む
    }
    else
    {
      std::cout << elem << "は負の数です" << std::endl;
      continue;
    }
  }
  printf("範囲for処理の終了");
}