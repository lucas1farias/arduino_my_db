

/*
Executar códigos com input no terminal usando C++
No Vscode: File/Preferences/Settings/Digitar "run in terminal"
Procurar pela opção "Code-runner: Run In Terminal"
Marcar o checkbox "Whether to run code in Integrated Terminal."
*/

#include <iostream>
using namespace std;
int main()
{
  string first_name, last_name;

  cout << "Type the first name :";
  cin >> first_name;
  cout << "Type the last name :";
  cin >> last_name;
  cout << "Your full name is " << first_name + " " + last_name;

  return 0;
}
