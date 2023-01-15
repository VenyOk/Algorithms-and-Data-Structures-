#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Stack
{
    int *data;
    int top;
};
void Push(struct Stack *st,int x)

    {
        (*st).data[(*st).top] = x;
        (*st).top++;
    }
int Pop(struct Stack *st)
    {
        (*st).top--;
        return (*st).data[(*st).top];
    }



int main()

    {
        struct Stack st;
        st.top = 0;
        st.data = malloc(1000000 * sizeof(int));
        char operation[10];
        scanf("%s",operation);
        while (strcmp(operation,"END") != 0)
        {
            if (strcmp(operation,"ADD") == 0)
            {
                int a = Pop(&st);
                int b = Pop(&st);
                Push(&st,a + b);
            }
            if (strcmp(operation,"SUB") == 0)
            {
                int a = Pop(&st);
                int b = Pop(&st);
                Push(&st,a - b);
            }
            if (strcmp(operation,"MUL") == 0)
            {
                int a = Pop(&st);
                int b = Pop(&st);
                Push(&st,a * b);
            }
            if (strcmp(operation,"DIV") == 0)
            {
                int a = Pop(&st);
                int b = Pop(&st);
                Push(&st,a / b);
            }
            if (strcmp(operation,"CONST") == 0)
            {
                int x;
                scanf("%d",&x);
                Push(&st,x);
            }
            if (strcmp(operation,"MAX") == 0)
            {
                int a = Pop(&st);
                int b = Pop(&st);
                Push(&st, (a>=b) ? a:b);
            }
            if (strcmp(operation,"MIN") == 0)
            {
                int a = Pop(&st);
                int b = Pop(&st);
                Push(&st, (a<b) ? a:b);
            }
            if (strcmp(operation,"NEG") == 0)
            {
                int a = Pop(&st);
                Push(&st,-1 * a);
            }
            if (strcmp(operation,"DUP") == 0)
            {
                int a = Pop(&st);
                Push(&st,a);
                Push(&st,a);
            }
            if (strcmp(operation,"SWAP") == 0)
            {
                int a = Pop(&st);
                int b = Pop(&st);
                Push(&st,a);
                Push(&st,b);
            }
            scanf("%s",operation);
        }
        printf("%d",st.data[st.top - 1]);
        free(st.data);
        return 0;
    }
