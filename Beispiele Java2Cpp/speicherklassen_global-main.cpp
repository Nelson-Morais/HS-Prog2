 #include <iostream>
 using namespace std;
 void test(int);
 int global=10;        // programmweit globale Variable
 int main(){
           cout << "1: g=" << g << endl; // 10
  test(3); cout << "2: g=" << g << endl; // 1
  test(7); cout << "3: g=" << g << endl; // 1
  test(0); cout << "4: g=" << g << endl; // 1
  return 0;
}

