//5 student details using structure

#include <stdio.h>
struct dob { //defining a structure for date of birth
    int d,m,y;
};
struct details{  //defining a structure for entering details
    struct dob s;
    char n[100];
    char a[100];
};
int main(){
    struct details user[5];
    int i;
    for(i=0;i<5;i++){
    printf("enter name");
    scanf("%s",&user[i].n);
    printf("enter adress");
    scanf("%s",&user[i].a);
    printf("enter dob");
    scanf("%d%d%d",&user[i].s.d,&user[i].s.m,&user[i].s.y);
    }
    for(i=0;i<5;i++) {
    printf("\nName:%s",user[i].n);    
    printf("\nAdress:%s",user[i].a);
    printf("\ndob:%d %d %d",user[i].s.d,user[i].s.m,user[i].s.y);    
    }
    return 0;
}

