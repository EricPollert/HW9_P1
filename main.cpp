#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  
  const int COL_NUM = 5;
  const int ROW_NUM = 5;
  int grade [ROW_NUM][COL_NUM] = { {100, 100, }};

  for (int r = 0; r < ROW_NUM; r++){
  for (int c = 0; c < COL_NUM; c++){
    cout << setw(5) << grade[r][c];
    
    }
    int avg = (grade[r][1] + grade[r][2] + grade[r][3] + grade[r][4]) / 4;
    cout << setw(5) << avg;
    
    cout << endl;
  }
  
}