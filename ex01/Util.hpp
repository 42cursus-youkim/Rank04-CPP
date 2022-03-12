#ifndef __UTIL_H__
#define __UTIL_H__

#include <string>

using std::string;

typedef int (*charFunc)(int);

typedef enum e_command {
  ADD,
  SEARCH,
  QUIT,
  INVALID,
} command;

string trim(const string& str);
string stringTransform(const string& str, charFunc func);
string truncateColumn(const size_t size, const string& column);
string size_to_string(const size_t size);
command parseCommand(const string& str);
void  clearCin();
#endif  // __UTIL_H__