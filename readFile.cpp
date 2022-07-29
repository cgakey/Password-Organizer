#include <iostream>
#include <ifstream>
#include <string>

using namespace std;

class readFile {
private:
  const static int ROWS = 20;
  const static int COLS = 5;
  string passwordFile[ROWS][COLS];
public:
  void readFile(string passwordFile[][COLS]);
};

void readFile::readFile(string passwordFile[][COLS]) {
ifstream ifs;
ifs.open("UsermanesCIS375.xlsx");
if (!ifs.is_open()) {
cerr << "unable to open UsermanesCIS375.xlsx" << endl;
}
int perNum = 0;
string userName, firstName, lastName, birthDate, cellPhone;
while (!ifs.eof()) {
ifs >> userName >> firstName >> lastName >> birthDate >> cellPhone;
passwordFile[perNum - 1][0] = userName;
passwordFile[perNum - 1][1] = firstName;
passwordFile[perNum - 1][2] = lastName;
passwordFile[perNum - 1][3] = birthDate;
passwordFile[perNum - 1][4] = cellPhone;
perNum = perNum + 1;
}
}
