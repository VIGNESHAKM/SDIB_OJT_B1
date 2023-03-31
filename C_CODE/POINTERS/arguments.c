#include<stdio.h>
void operation(int x,int y,(*fnptr)(int,int))
int main()
{
    int a=10,b=20;
    char ch ,add,sub,mul,div;
    switch(ch)
    {
        case '+':
        operation(a,b,add);
        break;
        case'-':
        operation(a,b,sub);
        break;
        case'*':
        operation(a,b,mul);
        break;
        case'/':
        operation(a,b,div);
        break;
        void operation(int x,int y,(*fnptr)(int,int))
        {
            int result;
            result=fnptr(x,y);
            printf("%d,pnptr",result);
                    }

    }
}