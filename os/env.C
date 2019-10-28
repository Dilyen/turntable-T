#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	setenv("color", "blacck", 6);
		cout << getenv("color") << endl;

}
