extern int global;     // extern definierte Variable
static int statisch=1; // modulweit sichtbare Variable
void test(int n){
 int statisch=1;      // statisch jetzt lokal und
 global=statisch;     // ueberdeckt den aeusseren Wert
 statisch=n;
}

