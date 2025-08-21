#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isLucky(int d,int m,int y){
    char dateStr[20];
    sprintf(dateStr,"%d%d%d",d,m,y);
    
    long num;
    sscanf(dateStr,"%ld",&num);
    
    return (num % 4 == 0 || num % 7 == 0);
}

int daysInMonth(int m,int y){
    if(m == 1 || m ==3 || m==5 || m==7 || m == 8 || m== 10 || m==12)
        return 31;
    if(m==4 || m==6 || m==9 || m==11)
        return 30;
    if((y%400 == 0) || (y%4 == 0 && y%100 != 0))
        return 29;
    return 28;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int d1,m1,y1,d2,m2,y2;
    scanf("%d-%d-%d",&d1,&m1,&y1);
    scanf("%d-%d-%d",&d2,&m2,&y2);
    
    int count =0;
    
    while(y1<y2 || (y1 == y2 && m1 < m2 ) || (y1 == y2 && m1 == m2 && d1 <= d2)){
        if(isLucky(d1, m1, y1))
            count++;
            
        d1++;
        if(d1 > daysInMonth(m1,y1)){
            d1 = 1;
            m1++;
            if(m1 > 12){
                m1 = 1;
                y1++;
            }
        }
    }  
    printf("%d\n", count);
    
    return 0;
}
