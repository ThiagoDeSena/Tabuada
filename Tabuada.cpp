//3. Escreva um programa que pergunta um n�mero ao usu�rio, e mostra sua tabuada completa (de 1 at� 10).
#include <iostream>

using namespace std;

int main(){
	int n,i=1;
	cout<<"Digite um numero: ";
	cin>>n;
	
	do{
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
		i++;
		
	}while(i<=10);
	
	return 0;
}
