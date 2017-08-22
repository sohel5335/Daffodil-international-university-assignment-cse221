#include<stdio.h>
int main ()
{
    int t,x,k,c,cs=0;
    scanf("%d",&t);
    int i;
    while (t--)
    {
        int n,q;
        scanf("%d ",&n,&q);
        int  st[100] ;
        k=0;
        c=-1;
        cs++;
        printf("Case %d:\n",cs);
      while(q--)
        {
            char ch;
            scanf("%c",&ch);
            if(ch=='P')
            {
                scanf("%d",&x);
                if(k<n)
                {
                    st[++c]=x;
                    k++;

                }
                else
                    printf("Overflow!\n");
            }
            else if (ch=='R')
            {
                st[c--];
                k--;
            }
            else if(ch=='S')
            {
                int i;
                for(i=k-1; i>=0; i--)
                {
                    printf("%d",st[i]);
                    if(i==0)
                        printf("\n");
                    else
                        printf(" ");
                }
                if(k==0)
                    printf("No plates in stack!\n");

            }
        }
    }
    return 0;

}


