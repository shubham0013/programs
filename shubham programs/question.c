#include<stdio.h>
void main(){
int m[10],n[10],sm[10],sn[10],fm[10],fn[10],i,j,k,temp;
printf("enter 10 elements:");
for(i=0;i<10;i++){
scanf("%d",&m[i]);
}
printf("enter 7 elements:");
for(i=0;i<7;i++){
scanf("%d",&n[i]);
}
for(j=0;j<10;j++){
for(i=0;i<10-j;i++){
if(m[i]>m[i+1]){
m[i]=temp;
m[i]=m[i+1];
m[i+1]=temp;
i++;
}
}
}
for(j=0;j<7;j++){
for(i=0;i<7-j;i++){
if(n[i]>n[i+1]){
n[i]=temp;
n[i]=n[i+1];
n[i+1]=temp;
i++;
}
}
}
sm[0]=m[0];
for(i=1,j=1;i<10;i++){
if(m[i]==sm[i-1]){
k++;
i++;
fm[i-1]=k;
}
else{=m[i];
j++;
}
k=0;
}
sn[0]=n[0];
for(i=1,j=1;i<7;i++){
if(n[i]==sn[i-1]){
k++;
i++;
fn[i-1]=k;
}
else{
sn[j]=n[i];
j++;
}
k=0;
}
for(i=0;i<10;i++){
printf("%d\t %d\n",sm[i],sn[i]);
}
sm[j]
