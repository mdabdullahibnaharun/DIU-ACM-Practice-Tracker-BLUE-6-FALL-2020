#include <stdio.h>
#include <string.h>
#define MX 10000

void solve()
{
    int tc,i,inpulen1,inpulen2,j,k,x,y,outlen1,outlen2;
    char inp1[MX],inp2[MX],out1[MX],out2[MX],temp;
    scanf("%d",&tc);
    getchar();
    for(k=1; k<=tc; k++)
    {
        gets(inp1);
        gets(inp2);
        inpulen1=strlen(inp1);
        inpulen2=strlen(inp2);
        x=0;
        y=0;
        for(i=0; i<inpulen1; i++)
        {
            if(inp1[i]>='a'&&inp1[i]<='z')
            {
                inp1[i]='A'+(inp1[i]-'a');
            }
        }
        for(i=0; i<inpulen1; i++)
        {
            if(inp1[i]!=' ')
            {
                out1[x]=inp1[i];
                x++;
            }
        }
        out1[x]='\0';
        for(i=0; i<inpulen2; i++)
        {
            if(inp2[i]>='a'&&inp2[i]<='z')
            {
                inp2[i]='A'+(inp2[i]-'a');
            }
        }
        for(i=0; i<inpulen2; i++)
        {
            if(inp2[i]!=' ')
            {
                out2[y]=inp2[i];
                y++;
            }
        }
        out2[y]='\0';
        outlen1=strlen(out1);
        outlen2=strlen(out2);
        for(i=0; i<outlen1-1; i++)
        {
            for(j=0; j<outlen1-1; j++)
            {
                if(out1[j]>out1[j+1])
                {
                    temp=out1[j];
                    out1[j]=out1[j+1];
                    out1[j+1]=temp;
                }
            }
        }
        for(i=0; i<outlen2-1; i++)
        {
            for(j=0; j<outlen2-1; j++)
            {
                if(out2[j]>out2[j+1])
                {
                    temp=out2[j];
                    out2[j]=out2[j+1];
                    out2[j+1]=temp;
                }
            }
        }

        if(strcmp(out1,out2)==0)
            printf("Case %d: Yes\n",k);
        else
            printf("Case %d: No\n",k);

    }

}

int main()
{
    solve();
    return 0;
}





