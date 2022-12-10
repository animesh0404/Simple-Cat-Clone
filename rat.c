#include<stdio.h>

int main(){
	read_file("msg.txt");
	return 0;
}

void read_file(char *filename){
 char ch;
 FILE *fp = fopen(filename,"r");
 
 // Handle file reading error
 if(fp == NULL){
	 printf("\nUnable to open the file!\n");
	 return;
 }

 //loop to read file char-by-char
 ch = fgetc(fp);
 while(!feof(fp)){
	printf("%c",ch);
	ch = fgetc(fp);
 }
 fclose(fp);
}
