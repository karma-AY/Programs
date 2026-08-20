#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "vectors introduction\n";
  cout << "Respresenting vectors in cpp is vecotor<dataType> var;or var = "
          "{};or var(range);\n";
  cout << "vec are stored cont. and are dynamic in nature\n";
  vector<int> v1;
  vector<int> v2 = {1, 2, 3};
  vector<int> v3(5, 100);

  cout << v1.size() << endl << v2.size() << endl << v3.size() << endl;

  return 0;
}
