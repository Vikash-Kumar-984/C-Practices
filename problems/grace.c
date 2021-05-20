    #include<stdio.h>
    int main()
    {
        int class,sub_fail;
        printf("Enter the class: \n");
        scanf("%d",&class);

        printf("Enter the subject failed in: \n");
        scanf("%d",&sub_fail);

        switch (class)
        {
        case 1:
            if(sub_fail>3)
            printf("NO Grace Marking \n");
            else
            printf("The grace marking will be:%d",sub_fail*5);
            break;

        case 2:
            if(sub_fail>2)
            printf("NO Grace Marking \n");
            else
            printf("The grace marking will be:%d",sub_fail*4);
            break;

        case 3:
            if(sub_fail>1)
            printf("NO Grace Marking \n");
            else
            printf("The grace marking will be:%d",sub_fail*5);
            break;
        
        default:
            break;
        }
    }