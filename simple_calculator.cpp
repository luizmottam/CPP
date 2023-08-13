#include <iostream>

using namespace std;

int main() {
  float x, y, res;
  char operador;
  
  cin >> x; cin >> operador; cin >> y;
  switch(operador) {
    case '+':
      res = x + y;
      break;
    case '-':
      res = x - y;
      break;
    case '/':
      res = x/y;
      break;
    case '*':
    case 'x':
      res = x * y;
      break;
    default:
      cout << "Erro\n";
  }
  cout << "Resposta: " << res << "\n";
  return 0;
}