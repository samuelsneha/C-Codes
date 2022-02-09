#include<bits/stdc++.h>
using namespace std;

///1) cin stops at spaces, 4 spaces and newline.
/* int main()
{
  char sneha[100];
  cin >> sneha;
  cout << sneha;
}

///2) This getline uses newline as the delimiter by default.
/// getline is used only strings.
/// If you are using string with spaces like - My name is Sneha then you have to use getline. If you are using string without spaces like - Sneha then you can use cin.
 int main()
{
  string sneha;
  getline( cin, sneha );
  cout << sneha;
}

///3)
///  cin.get and cin.getline can be used only in Character Arrays
///  using cin.get you can input single string / character arrays with spaces
///  give i/p as - My name is sneha
int main()
{
  char sneha[100];
  cin.get (sneha,100);
  cout << sneha;
}
///4) cin.get is used only when we want a single string/character arrays with spaces ie. only a single line input with spaces.
/// It can't take multiple new line inputs. For multiple line inputs with spaces you need to use cin.getline.
 int main()
{
  char sneha1 [100];
  char sneha2 [100];
  cin.get(sneha1,100);
  cin.get(sneha2,100);
  cout << sneha1 << " " << sneha2;
}*/
///5) cin.getline is used when you need to input multiple stings/character arrays with spaces from new line.
/// cin.getline takes input of multiple strings with spaces but printing it in separate/same line is our responsibility.
int main()
{
  char sneha1 [100];
  char sneha2 [100];
  cin.getline(sneha1,100);
  cin.getline(sneha2,100);
  cout << sneha1 << " " << sneha2;
}
