

#include<iostream>
#include<conio.h>

using namespace std;
const int NUM =8;
int main() {
	
	int nums[NUM], total=0, i;
	
	
	for(i=0;i<NUM;i++){
		
		cout<<"Por favor, introduzca el numero: ";
		cin>>nums[i];
		total+=nums[i];
	}
	cout<<"El total de numeros es: "<<total<<endl;

getch();
return 0;
}
