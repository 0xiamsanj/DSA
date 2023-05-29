#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    char ch;
	scanf("%s",str);
	scanf("%c",&ch);
	int i=0;
	int count = 0, max = 0;
	while (str[i]) {
		count = 0;
		if(str[i]==ch){
		    count++;
		}
		for(int j=0;j<strlen(str);j++){
			if(str[j]!=ch){
				break;
			}
			else{
				count++;
			}
		}
		if(max<=count){
		max = count;
		}
		i++;
	}
	printf("%d",max);
}
