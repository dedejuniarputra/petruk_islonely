#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int arr[5]={10, 20, 30, 40, 50};
	int *ptr=arr;
	for (int i=0; i<5; i++){
		cout<<"Nilai dari array ["<<i<<"] = "<<*ptr<<endl;
		ptr++;
	}
	return 0;
}
array


void bilangan(int n) {
    if (n > 1 && n < 9) {
        string numbers[] = {"satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan"};
        cout << numbers[n-1] << endl;
    } else if (n > 9) {
        cout << "Lebih dari 9" << endl;
    }
}


#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[]={'i', 'l', 'k', 'o', 'm', 'p', '\0'};
	cout<<str<<endl;
	cout<<strlen(str)<<endl;
	
	char firstname[50]="Ikhtiar Adli";
	char lastname[50]=" Wicaksono";
	char *fullname=strcat(firstname, lastname);
	cout<<fullname<<endl;
	
	char data[3][100]={"2217051060Ikhtiar Adli Wicaksono",
						"2217051080Firman Situmorang",
						"2217051147Ivan Aditya"};
	char *endptr;					
	for (int i=0; i<3; i++){
		long npm=strtod(data[i], &endptr);
		cout<<"Nama: "<<endptr<<endl;
		cout<<"NPN: "<<npm<<endl;
		cout<<endl;
	}
}
