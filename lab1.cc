#include <iostream>
#include <string>
#include <cstring>
#include <climits>
#include <iomanip>

using namespace std;
int main()
{
  /*
  string str {"Enter one integer: "};
  cout << str;
  int number{};
  cin >> number;
  string str2 {"You entered the number: "};
  cout << str2;
  cout << number << endl;
  cin.clear();
  cin.ignore(INT_MAX,'\n'); 

  string str3 {"Enter four integers: "};
  cout << str3;
  int n1, n2, n3, n4;
  char space{' '};
  cin >> n1;
  cin >> n2;
  cin >> n3;
  cin >> n4;

  cout << str2;
  cout << n1;
  cout << space;
  cout << n2;
  cout << space;
  cout << n3;
  cout << space;
  cout << n4 << endl;

    cin.clear();
  cin.ignore(INT_MAX,'\n'); 
*/
  string str4 {"Enter one integer and one real number: "};
  cout << str4;
  int n5{};
  cin >> n5;
  double n6{};
  cin >> n6;
  string str5 {"The real is: "};
  cout  <<  str5 << setfill (' ') << setw(10);
  // printf(str5 "%.3f", n6);
  cout << endl;
  string str6 {"The integer is: "};
  cout <<  str6;
  cout <<  setfill(' ') << setw(8) << n5;
  cout << endl;

    cin.clear();
  cin.ignore(INT_MAX,'\n');
}
/*
  string str7 {"Enter one real and one integer number: "};
  cout << str7;
  cin >> n6;
  cin >> n5;
  string str8 {"The real is: ......"};
  cout <<  str8;
  printf("%.3f", n6);
  cout << endl;
  string str9 {"The integer is: ...."};
  cout << str9;
  cout << n5;
  cout << endl;

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


    string word {"Enter a word: "};
    cout << word;
    string name{};
    cin >> name;
    string theWord {"The word '"};
    cout << theWord;
    cout << name;
    string has {"' has "};
    cout << has;

    cout << name.length();

    string character {" character(s)."};
    cout << character << endl;

   cin.clear();
  cin.ignore(INT_MAX,'\n'); 

  string newString {"Enter an integer and a word: "};
  cout << newString;
  int neverUsedInt{};
  cin >> neverUsedInt;
  cin >> newString;
  string abc {"You entered '"};
  string def {"' and '"};
  string ghi {"'."};
  cout << abc << neverUsedInt << def << newString << ghi << endl;

    cin.clear();
  cin.ignore(INT_MAX,'\n'); 

  cout << ("Enter an character and a word: ");
  char Qgarden{};
  string garden{};  
  cin >> Qgarden >> garden;
  cout << ("You entered the string ") << '"' << garden << '"' << (" and the character '") << Qgarden<< ("'.") << endl ;
 
   cin.clear();
  cin.ignore(INT_MAX,'\n'); 

  cout << ("Enter a word and real number: ");
  string three{};
  double point14{};
  cin >> three >> point14;
  cout << ("You entered ") << '"' << three << '"' << (" and ") << '"';
  printf("%.3f", point14);
  cout << '"'<< "." << endl;

    cin.clear();
  cin.ignore(INT_MAX,'\n'); 

  cout << ("Enter a text-line: ");
  string textline{};
  getline(cin, textline);
  cout << ("You entered ") << '"' << textline << '"' << endl;


  cout << ("Enter a second line of text: ");
  getline(cin, textline);
  cout << ("You entered ") << '"' << textline << '"' << endl;

  cout << ("Enter three words: ");
  string s1, s2, s3;
  cin >> s1 >> s2 >> s3;
  cout << ("You entered: '") << s1 << ' ' << s2 << ' '  << s3 << ("'") << endl;

  cin.clear();
  cin.ignore(INT_MAX,'\n'); 
  
}

*/ 
