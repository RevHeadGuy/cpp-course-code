#include <iostream>
#include<fstream>
using namespace std;
int main()
{
string str="time is a great teacher, but unfortunately it kills all its pupils.";
ofstream outfile("test.txt");
for (int j=0;j<str.size();j++)
outfile.put(str[j]);
cout<<"file written\n";
return 0;
}