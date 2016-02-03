#include<stdio.h>
main()
{
char s[100];
int c,t,i,count;
while(scanf("%d",&t)==1){
for(i=0;i<=t;i++){
count=0;
for(c=0;(s[c]=getchar())!='\n';c++){
if(s[c]=='a'||s[c]=='d'||s[c]=='g'||s[c]=='j'||s[c]=='m'||s[c]=='p'||s[c]=='t'||s[c]=='w'||s[c]==' ')
count++;
else if(s[c]=='b'||s[c]=='e'||s[c]=='h'||s[c]=='k'||s[c]=='n'||s[c]=='q'||s[c]=='u'||s[c]=='x')
count+=2;
else if(s[c]=='c'||s[c]=='f'||s[c]=='i'||s[c]=='l'||s[c]=='o'||s[c]=='r'||s[c]=='v'||s[c]=='y')
count+=3;
else if(s[c]=='s'||s[c]=='z')
count+=4;
}
if(i>0)
printf("Case #%d: %d\n",i,count);
}
}
}
