#include<stdio.h>
typedef  struct student
{   
    char name[100];
    char branch[100];
    char division[100];
    int roll;
    int phone;
     int age;
    int sub1; 
    int sub2;  
    int sub3; 
    int sub4;  
    float cgpa;   
}st;
typedef struct teacher
{
   char name[100];
   char dep[100];
   int phone;
   char mail[100];
}tc;
typedef struct staff
{
   char name[100];
   char post[100];
   int phone;
   char mail[100];
}stf;
int main()
{  
   FILE *ptr;
   ptr=fopen("project.txt","a");
   st s[1000];
   tc t[100];
   stf sf[100];
   int stop=1;
   char txt;
   printf("are you a student,teacher or staff member(enter 's' for student/ 't'for teacher/'f' for staff)=\n");
   scanf("%c",&txt);
   if(txt=='s')
   {
     for(int i=0;stop!=0;i++)
     {
      printf("enter your name=");
      scanf("%s",&s[i].name);
      printf("enter your branch=");
      scanf("%s",&s[i].branch);
      printf("enter your division=");
      scanf("%s",&s[i].division);
      printf("enter your roll num=");
      scanf("%d",&s[i].roll);
      printf("enter your phone number=");
      scanf("%d",&s[100].phone);
      printf("enter your age=");
      scanf("%d",&s[i].age);
      printf("enter your maths mark=");
      scanf("%d",&s[i].sub1);
      printf("enter your psp maks=");
      scanf("%d",&s[i].sub2);
      printf("enter your web dev marks=");
      scanf("%d",&s[i].sub3);
      printf("enter your COAA marks");
      scanf("%d",&s[i].sub4);
      printf("enter '1'to enter info of more people or '0'to exit");
      scanf("%d",&stop);      

      s[i].cgpa=(s[i].sub1+s[i].sub2+s[i].sub3+s[i].sub4)/40;

      fprintf(ptr,"student sr no=%d",(i+1));
      fprintf(ptr," name=%s\n",s[i].name);
      fprintf(ptr," branch=%s\n",s[i].branch);
      fprintf(ptr," division=%s\n",s[i].division);
      fprintf(ptr," roll no=%d\n",s[i].roll);
      fprintf(ptr," phone num=%d\n",s[i].phone);
      fprintf(ptr," age=%d\n",s[i].age);
      fprintf(ptr," maths=%d\n",s[i].sub1);
      fprintf(ptr," psp=%d\n",s[i].sub2);
      fprintf(ptr," web dev=%d\n",s[i].sub3);
      fprintf(ptr," COAA=%d\n",s[i].sub4);
      fprintf(ptr,"cgpa=%f\n",s[i].cgpa);     
     }    
   }
  else if(txt=='t')
   { for(int i=0;stop!=0;i++)
   {
      printf("enter your name=");
      scanf("%s",&t[i].name);
      printf("enter your department=");
      scanf("%s",&t[i].dep);
      printf("enter your phone num=");
      scanf("%d",&t[i].phone);
      printf("enter your email adress=");
      scanf("%s",&t[i].mail);
     printf("enter '1'to enter info of more people or '0'to exit");
      scanf("%d",&stop);

      fprintf(ptr,"teacher sr no=%d\n",(i+1));
      fprintf(ptr,"name=%s\n",t[i].name);
      fprintf(ptr,"department=%s\n",t[i].dep);
      fprintf(ptr,"phone number=%d\n",t[i].phone);
      fprintf(ptr,"email=%s\n",t[i].mail);
   }
   }
  else if(txt=='f')
   { for(int i=0;stop!=0;i++)
   {
      printf("enter your name=");
      scanf("%s",&sf[i].name);
      printf("enter your post=");
      scanf("%s",&sf[i].post);
      printf("enter your phone num=");
      scanf("%d",&sf[i].phone);
      printf("enter your email adress=");
      scanf("%s",&sf[i].mail);
       printf("enter '1'to enter info of more people or '0'to exit");
      scanf("%d",&stop);

      fprintf(ptr,"staff person sr no=%d\n",(i+1));
      fprintf(ptr,"name=%s\n",sf[i].name);
      fprintf(ptr,"post=%s\n",sf[i].post);
      fprintf(ptr,"phone number=%d\n",sf[i].phone);
      fprintf(ptr,"email=%s\n",sf[i].mail);
   }
   }
   fclose(ptr);
    return 0;
}