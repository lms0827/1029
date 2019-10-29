#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
        int i,n,m;
        char c;

        printf("반복할 횟수 입력:");
        scanf("%d",&n);
        for(i=1;i<=n;i++){
        printf("문자와 출려 횟수 입력: ");

fflush(stdin);
scanf("%c %d",&c,&m);
                for(j=1;j<=m;j++){
                printf("%c",c);
        }
}

	
	
	
	return 0;
}

#include <stdio.h>
void main(){
	int i,n,m;
	char c;

	printf("count:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("buffer word and count : ");
		

fflush(stdin);
scanf("%c %d",&c,&m);
		for(j=1;j<=m;j++){
		printf("%c",c);
	}
} 
