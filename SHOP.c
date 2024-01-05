/*THIS PROGRAM IS TO CREATE A CODE FOR A SHOP SUCH THAT AT THE END OF 
THE DAY IT GIVES THE TOTAL AND NO OF CUSTOMERS CAME AND AMOUNT GIVEN IN DISCOUNT*/

#include<stdio.h>
#include<conio.h>
void main ()
{
    int cno,tr=o;
    float pv,dis,tdis=0,tpv=0,net,tnet=0;
    /*where cno=customer number
     pv=purchase value
     dis=discount
     tpv=pv-dis*/
     char cname[20];
     clrscr();
     read :
     printf("\n ENTER THE CUSTOMER NUMBER or 0 TO EXIT :");
     scanf("%s",&cno);
     if(cno=0)
     goto end;
     else
     printf("\nENTER CUSTOMER NAME:");
     scanf("%s",cname);
     printf("\nENTER PURCHASE VALUE :");
     scanf("%f",&pv);
     if(pv<1000)
     dis=0
     else if(pv<2000);
     dis=pv*5/100;
     else if(pv<3000);
     dis=pv*10/100
     else if(pv<5000);
     dis=pv*15/100
     else
     dis=pv*20/100;
     net=pv-dis;
     tr=tr+1;
     tpv=tpv+pv;
     tdis=tdis+dis;
     tnet=tnet+net;
     printf("THE CNO is : %d\n Cname is : %s\n purchanse value is :%f\n",cno,cname,pv);
     printf("THE DISCOUNT IS :%f\n THE NET AMOUNT IS %f\n",dis,net);
     printf("*************************************");
     goto read;
     end :
     printf("THE TOTAL RECORDS IS : %d\n",tr);
     printf("THE TOTAL PURCHASE IS :%f\n",tpv);
     printf("THE TOTAL DISCOUNT IS :%f\n",tdis);
     printf("THE TOTAL NET AMOUNT IS :%f\n",tnet);
     getch();
} 

