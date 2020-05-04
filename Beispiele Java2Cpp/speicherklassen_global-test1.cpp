extern int global;     // extern definierte Variable
static int statisch=1; // modulweit sichtbare Variable
void test(int n){

 global=statisch;     // beide Variablen hier bekannt
 statisch=n;
}

