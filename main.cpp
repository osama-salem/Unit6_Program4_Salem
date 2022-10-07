#include <iostream>
#include "accounts.h"
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
  
  cout << "Start: " << cpuTime() << endl;

  sort(accountBalances, accountBalances + maxAccounts);

  reverse(accountBalances, accountBalances + maxAccounts);

  for (int i = 0; i != maxAccounts; ++i)
        cout << accountBalances[i] << " ";

  cout << "\nEnd: " << cpuTime();

  return 0;
  
}