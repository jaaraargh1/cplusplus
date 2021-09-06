#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <climits>
#include <iomanip>
#include <stdio.h>
#include <ctype.h>
#include <numeric>

int main(){
  using namespace std;
  std::vector <std::string> words; // Vector to hold our words we read in.
  std::string str; // Temp string to
  string shortestWord{};
  int tmpInt{};
  int tmpIntL{};
  double avgInt;
  std::string longestWord{};
  std::ifstream readingInput("Test.txt"); // Open it up!
  while (readingInput >> str) // Will read up to eof() and stop at every
  {                  // whitespace it hits. (like spaces!)
    words.push_back(str);
  }
  readingInput.close(); // Close that file!

  
  for (int i = 0; i < words.size(); ++i)

  {
    avgInt = avgInt + words[i].length();
    for (int j = 0; j < words.size(); j++)
      {
	  
	if (words[j].length() < words[i].length()) 
            {
	    
	      string tmpC  = words[i]; 
	      words[i] = words[j];
	      words[j] = tmpC;
	      //     std::cout << tmpC<< endl;
            }

	if (shortestWord.length() < words[j].length()){
	  tmpInt = j;
	  
	}
	if (shortestWord.length() > words[j].length()){
	  tmpIntL = j;
	}
            
      }
     
  }if (words.empty()){
    cout << "The file is empty."<< endl;
    return 0;
  } 

   
     double tmpF = avgInt/words.size();
  std::cout << "There are " << words.size() << " words in the file." << endl;
  std::cout << "The shortest word was: "<< '"'  << words[tmpInt] <<'"'<< " with "<< words[tmpInt].length() << " character(s)."  << endl;
  std::cout << "The longest word was: " << '"' << words[tmpIntL]<< '"'<< " with " <<words[tmpIntL].length() << " charater(s)."<< endl;
  std::cout << "The average word length was " << fixed << std::setprecision(2) <<tmpF<< " character(s)."<<endl;

  return 0;
}
