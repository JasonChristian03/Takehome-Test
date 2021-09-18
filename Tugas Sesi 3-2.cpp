#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u')?printf("Vowel"):printf("Consonant");
	return 0;
}
