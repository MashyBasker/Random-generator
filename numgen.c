#include <stdio.h>

int random(){

    static int n=34776;
    n=((n*n)/100)%100000;
    return n;

}

int rand_in_range(int lowerLim, int upperLim){
    return random()%(upperLim+1-lowerLim)+lowerLim;
}

int main(){
    int ul, ll;
    printf("Enter the range of the numbers :\n");
    scanf("%d %d", &ul, &ll);
    int x=rand_in_range(ul,ll);
    printf("%d",x);
    return 0;

}