// Taking up the libraries
#include <iostream>

using namespace std;
int strlen(char*);

//display string
void strdsp(char *str){
	for(int i = 0 ; i<strlen(str);i++){
		cout<<*(str+i);	
	}
	cout<<endl;
}

//copy strings
void strcpy(char *s1,char *s2){
	// copies the string char by char
	for (int i =0; i<strlen(s1);i++){
		*(s2+i)=*(s1+i);	
	}
}

void strcat(char *s1,char *s2, char *s3){
	int i;	
	for (i =0; i<strlen(s1)+strlen(s2);i++){	
		if(i<strlen(s1))
			*(s3+i)=*(s1+i);
		else
			*(s3+i)=*(s2+i-strlen(s1));
	}
	*(s3+i)='\0';
}

//compare two strings
bool strcmp(char *s1,char*s2){
	bool b = true; 	
	for (int i =0; i<strlen(s1);i++){
		if(*(s1+i)!=*(s2+i)){
			b=false;
			break;		
		}	
	}
	return b;
}
//length of string
int strlen(char* str){
	int i =0;	
	while(*(str+i)!='\0'){
		i++;	
	}
	return i;
}

//for the first occurance of a character in a string
char* strchr(char *str, char c){
	int i = 0;
	while(*(str+i)!=c and i < strlen(str))
		i++;
	return str+i;
		
}
//search the first occurance of a character in a string
char* strstr(char *str, char *s){
	int i =0;
	// length of strings
	int n1 = strlen(str);
	int n2 = strlen(s);
	while(i<n1){
		int j = 0;
		int k = i;
		while(j<n2){
			if(*(str+k)==*(s+j)){
				k++;
			}
			j++;			
		}
		if(k-i==n2)
			break;
		i++;
	}
	return str+i;
}

// Main Function
int main(){
	//variables
	char s1 []="Hello";
	int n1 = strlen(s1);
	char s2 [n1];
	strcpy(s1,s2);
	strdsp(s1);
	strdsp(s2);
	char s3 [n1+n1];
	strcat(s1,s2,s3);
	strdsp(s3);
	cout << strcmp(s1,s2)<<endl;
	cout << strcmp(s1,"hello")<<endl;
	cout << strlen(s1)<<endl;
	cout << *strchr(s2,'l')<<endl;
	cout << *strstr(s1,"el")<<endl;
	

	return 0;
}
