#include<stdio.h>
#include<string.h>

void main()
{
    char str[100],ch;
    int count,i=0,j=0,len;
    printf("Enter the String: ");
    gets(str);
    len=strlen(str);
    while(i<len)
    {
        count = 0;
        ch = str[i];
      if(ch != '\0')
       {
           j=0;
        while(j < len)
        {
            if(ch == str[j])
            {
                count++;
                str[j] = '\0';
            }            
            j++;
        }
        printf("%c : %d \n",ch,count);
       }
       i++;
        
    }
    
}
