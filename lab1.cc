#include <iostream>
#include <string>
#include <cstring>
#include <climits>
#include <iomanip>

using namespace std;
int main()
{
  int integer{};
  double decimal{};
  string word{};
  char Qgarden{};
  
  cout << ("Enter one integer: ");
  cin >> integer;
  cout << ("You entered the number: ") << integer << endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
 
  cout << ("Enter four integers: ");
  cin >> integer;
  cout<< ("You entered the numbers: ") << integer << flush << ' ';
  cin >> integer;
  cout << integer << flush << ' ';
  cin >> integer;
  cout << integer << flush << ' ';
  cin >> integer; 
  cout << integer << flush << ' ' << endl;;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
  
  cout <<  ("Enter one integer and one real number: ");
  cin >> integer; 
  cin >> decimal;
  cout << ("The real is: ");
  std::cout  << std::setw(11)  << std::setprecision(4) << decimal << '\n';
  cout << ("The integer is: ") <<  setfill(' ') << setw(8) << integer << '\n';
  cin.clear();
  cin.ignore(INT_MAX,'\n');
 
  cout << ("Enter one real and one integer number: ");
  cin >> decimal >> integer;
  cout << ("The real is: ");
  std::cout  << std::setfill('.')
	     << std::setw(11)  << std::setprecision(4) << decimal << '\n';
  cout <<("The integer is: ") <<  setfill('.') << setw(8) << integer << endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
  string chartest{"Enter a character: "};
  cout << chartest;
  char ctest{};
  cin >> ctest;
  cout << ("You entered: ");
  cout << ctest << endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
  
  cout << ("Enter a word: ");
  cin >> word;
  cout << ("The word '") << word << ("' has ") << word.length() << (" character(s).") << endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 

  cout << ("Enter an integer and a word: ");
  cin >> integer;
  cin >> word;
  cout << ("You entered '") << integer << ("' and '") << word << ("'.")<< endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
 
  cout << ("Enter an character and a word: ");
  cin >> Qgarden >> word;
  cout << ("You entered the string ") << '"' << word << '"' << (" and the character '") << Qgarden<< ("'.") << endl ;
  cin.clear();
  cin.ignore(INT_MAX,'\n');
  
  cout << ("Enter a word and real number: ");
  cin >> word >> decimal;
  cout << ("You entered ") << '"' << word << '"' << (" and ") << '"';
  std::cout << std::setprecision(4) << left << setfill ('0') << setw(6) << decimal << '"'<< "." << endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
  cout << ("Enter a text-line: ");
  getline(cin, word);
  cout << ("You entered: ") << '"' << word << '"' << endl;
  
  cout << ("Enter a second line of text: ");
  getline(cin, word);
  cout << ("You entered: ") << '"' << word << '"' << endl;

  cout << ("Enter three words: ");
  cin >> word;
  cout  << ("You entered: '") << word << flush << ' ';
  cin >> word;
  cout << word << flush << ' ';
  cin >> word;
  cout << word << flush << ( "'") <<endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
  
}
