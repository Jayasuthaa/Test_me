
//#include<direct.h>
//int main(){
    //time_t now = time(NULL);
    // printf("%ld\n",now);
    // sleep(2);
    // time_t _now = time(NULL);
    // printf("%ld\n",_now);
    // double diff=difftime(now,_now);
    // printf("%f",diff);
    // char *string_now=ctime(&now);
    // printf("%s\n",string_now);
    // struct  tm *gm_time=gmtime(&now);
    // printf("%d\n",gm_time->tm_sec);
    // printf("%d\n",gm_time->tm_min);
    // printf("%d\n",gm_time->tm_hour);
    // printf("%d\n",gm_time->tm_mon);
    // printf("%d\n",gm_time->tm_year);
    // int h=0;
    // int m=0;
void timer()
{   int s;
    printf("How much sec required to Finish :\n ");
    scanf("%d",&s);
   
    //int ch;
while (1)
    {
        // system("cls");
        // printf("Time : ");
        // printf("%02d : %02d : %02d \n",h,m,s);
        // scanf("%d",&ch);
        // if(ch==1){
        //     break;
        // }
        system("cls");
        printf("Time : ");
        printf("00 : 00: %02d \n",s);
        fflush(stdout);
        s--;
        if(s>=10 && s<=12)
        printf("10s More");
        if(s>=30 && s<=32)
        printf("30s More");
        if(s>=50 && s<=52)
        printf("50s More");
        //system("cls");
        if(s==-1){
            printf("Time Out \n");
            //s=0;
            break;
            
        }
        // if(m==60){
        //     h+=1;
        //     m=0;
        // }
        // if(h==24){
        //     h=0;
        //     m=0;
        //     s=0;
        // } 
        sleep(1);
    }
    printf("Are you Finished , We jump on next questions !!!");
    
}


 
 //   return 0;
//}