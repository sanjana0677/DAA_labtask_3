#include<stdio.h>
#include<math.h>
void move(char from,char to){
    printf("Move from %c to %c\n",from,to);
}
void towerOfHanoi(int n){
    int moves = pow(2,n) - 1;
    int i;
    char src = 'A',dest = 'B',aux = 'C';
    if(n%2 == 0){
        char temp = dest;
        dest = aux;
        aux = temp;
    }
    for(i=1;i<=moves;i++){
        if(i%3 == 1)
        move(src,dest);
        else if(i%3 == 2)
        move(src,aux);
        else if(i%3 == 0)
        move(aux,dest);
    }
}
int main(){
    int n;
    printf("enter the no.of disk:");
    scanf("%d",&n);
    towerOfHanoi(n);
    return 0;
}