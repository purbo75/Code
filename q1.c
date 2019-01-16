#include<stdio.h>

int main(void)
{
    char str[100],str2[100],c;
    int i,k;
    static int xx;
    
    printf("enter your string : ");
    scanf("%[^\n]s",&str);
    scanf("%c",&c);
    
    for(i=0 ; ;i++)
    {
        if(str[i]==NULL) break;
    }
    
    xx=i;
    
    while(1)
    {
        printf("1.Compare\n2.Concatenation\n3.reverse\n4.exit\n");
        printf("enter your choice : " );
        
        int choice;
        scanf("%d",&choice);
        
        if(choice==1)
        {
                scanf("%c",&c);
                printf("enter your 2nd string : ");
                scanf("%[^\n]s",&str2);
                int y=0;
                for(i=0 ;  ; i++)
                {   
                    if(str[i]==NULL&&str2[i]==NULL) break;
                
                     if(str2[i]!=str[i])
                     {    
                         printf("NOT Match\n");
                         y++;
                         break; 
                     }
                    
                  }
                
                    if(y==0)
                    printf("Match\n");

        }
        
        else if(choice==2)
        {
            int j;
            char str3[200];
            
            scanf("%c",&c);
            printf("enter your 2nd string : ");
            scanf("%[^\n]s",&str2);
            
            for(j=0; ;j++)
            {
               if(str[j]==NULL) break;
                str3[j]=str[j];
            }
            
            
            for(i=0 ; ; j++,i++)
            {
                if(str2[i]==NULL) break;
                str3[j]=str2[i];
            }
            
            for(k=0;k<j;k++)
            {
                str[k]=str3[k];
            }
            
            for(k=0;k<j;k++)
            {
                printf("%c",str[k]);
            }
            
            printf("\n");
            
            xx=j;
        }
        
        
        else if(choice==3)
        {
            char str4[200];
            
            for(i=xx , k=0; i>=0 ; i--,k++)
            {
                str4[k]=str[i];   
            
            }

            for(k=0;k<=xx;k++)
            {
                
                printf("%c",str4[k]);
            }
            
            printf("\n");
        
        }
        
        else break;
  
    }
    return 0;           
}
