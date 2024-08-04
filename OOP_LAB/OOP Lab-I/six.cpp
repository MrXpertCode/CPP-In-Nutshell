// 6. WAP to access, and modify the global version of a particular variable.
#include <iostream>

using namespace std;

string globalVariable = "I am a global Variable";

void AcessGlobalVariable () {
    cout << "Global variable is - - " << globalVariable << endl;
}

void ModifyGlobalVariable () {
    globalVariable = "Modified Variable";
    cout << "global Variable has now become " << globalVariable;
}

int main () {
   
AcessGlobalVariable();
ModifyGlobalVariable();

}