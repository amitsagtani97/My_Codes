#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 2000001
int top=-1;
int stack[MAX];

void push(char);
char pop();
int match(char a,char b);
main()
{
    int test,j;
    scanf("%d",&test);
    for(j=0;j<test;j++)
    {    
    char exp[MAX];
    int valid;
        scanf("%s",exp);
        if(strlen(exp)%3==0) 
        {
         printf("NO");
         continue;
        }
    valid=check(exp);
    if(valid==1)
        printf("YES\n");
    else
        printf("NO\n");
    }
}

int check(char exp[] )
{
    int i;
    char temp;
    for(i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
            push(exp[i]);
        if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
            if(top==-1)    
            {
               
                return 0;
            }
            else
            {
                temp=pop();
                if(!match(temp, exp[i]))
                {
                   
                    return 0;
                }
            }
    }
    if(top==-1) /*stack empty*/
    {
        
        return 1;
    }
    else
    {
          
        return 0;
    }
}
int match(char a,char b)
{
    if(a=='[' && b==']')
        return 1;
    if(a=='{' && b=='}')
        return 1;   
    if(a=='(' && b==')')
        return 1;
    return 0;
}/*End of match()*/

void push(char item)
{
    if(top==(MAX-1))
    {
        printf("Stack Overflow\n");
        return;
    }
    top=top+1;
    stack[top]=item;
}/*End of push()*/

char pop()
{
    //if(top==-1)
    //{
        //printf("Stack Underflow\n");
        //exit(1);
    //}
    return(stack[top--]);
}/*End of pop()*/