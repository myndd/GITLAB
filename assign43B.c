#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char type_seat[20], name[40], again, date[30];

    i = 0;
    invoice_number = 99;
    number_of_invoice = 0;
    total_seat = total_emperor = total_regular = total_sofa = 0 ;
    unit_price = total_price = total_income = gross_income = total_discount = discount = net_income = 0.0;

    printf("\n*******************************************************************************\n");
    printf("===================== Welcome to SY movie theater program =====================\n\n");
    printf("Enter today's date (dd/mm/yyyy) : ");
    scanf("%s",date);

    /*Get input*/

    do
    {
        printf("Please enter your name ([END] to print invoice end day) : ");
        scanf("%s",name);
        if(strcmp(name,"END")!=0)
        {
            do
            {
                printf("Please enter your member number (0001-9999 ,[0] for non-member): ");
                scanf("%d",&member_number);

                if(member_number<0 || member_number>9999)
                    printf("Incorrect input %d , Please enter your member number only 0001-9999 or [0] for non-member.\n",member_number);
            }while(member_number<0 || member_number>9999);

            printf("\n\t------------------------- Type of seat --------------------------\n");
            printf("\tEmperor[E] = 120 Baht | Regular[R] = 80 Baht | Sofa[S] = 100 Baht\n\n");

            do
            {
                printf("Please enter type of seat (Emperor[E],Regular[R],Sofa[S]) : ");
                scanf("%s",type_seat);

                if(strcmp(type_seat,"E")!=0 && strcmp(type_seat,"R")!=0 && strcmp(type_seat,"S")!=0 )
                    printf("Incorrect input %s , Please enter only Emperor[E],Regular[R],Sofa[S].\n",type_seat);
            }while(strcmp(type_seat,"E")!=0 && strcmp(type_seat,"R")!=0 && strcmp(type_seat,"S")!=0);

            printf("\n\t     ----------------------- SCREEN ----------------------\n");
            printf("\t    |  [ 1] [ 2] [ 3] [ 4] [ 5] [ 6] [ 7] [ 8] [ 9] [10]  | \n");
            printf("\t    |  [11] [12] [13] [14] [15] [16] [17] [18] [19] [20]  | \n");
            printf("\t    |  [21] [22] [23] [24] [25] [26] [27] [28] [29] [30]  | \n");
            printf("\t    |  [31] [32] [33] [34] [35] [36] [37] [38] [39] [40]  | \n");
            printf("\t    |  [41] [42] [43] [44] [45] [46] [47] [48] [49] [50]  | \n");
            printf("\t    |  [51] [52] [53] [54] [55] [56] [57] [58] [59] [60]  | \n");
            printf("\t    |  [61] [62] [63] [64] [65] [66] [67] [68] [69] [70]  | \n");
            printf("\t    |  [71] [72] [73] [74] [75] [76] [77] [78] [79] [80]  | \n");
            printf("\t    |  [81] [82] [83] [84] [85] [86] [87] [88] [89] [90]  | \n");
            printf("\t    |  [91] [92] [93] [94] [95] [96] [97] [98] [99] [100] | \n");
            printf("\t     -----------------------------------------------------\n\n");

            do
            {
                printf("Please enter seat number start (1-100): ");
                scanf("%d",&seat_number_start);

                if(seat_number_start<1 || seat_number_start>100)
                    printf("Incorrect input %d , Please enter seat number only (1-100).\n",seat_number_start);
            }while(seat_number_start<1 || seat_number_start>100);

            do
            {
                printf("Please enter seat number end (1-100): ");
                scanf("%d",&seat_number_end);

                if(seat_number_end<1 || seat_number_end>100 || seat_number_end<seat_number_start)
                    printf("Incorrect input %d , Please enter seat number only (1-100)or must be more than seat number start.\n",seat_number_end);
            }while(seat_number_end<1 || seat_number_end>100 || seat_number_end<seat_number_start);


            invoice_number++ ;
            number_of_invoice++ ;

    /*Processing*/

            for(i=0;i<invoice_number;i++)
            {
                total_seat = (seat_number_end-seat_number_start)+1;

                if(strcmp(type_seat,"E")==0)
                {
                    strcpy(type_seat,"Emperor");
                    total_emperor += total_seat;
                    unit_price = 150.0;
                }
                else if(strcmp(type_seat,"R")==0)
                {
                    strcpy(type_seat,"Regular");
                    total_regular += total_seat;
                    unit_price = 120.0;
                }
                else if(strcmp(type_seat,"S")==0)
                {
                    strcpy(type_seat,"Sofa");
                    total_sofa += total_seat;
                    unit_price = 100.0;
                }

                total_price = unit_price*total_seat;

                if(member_number>0 && member_number<=9999)
                    discount = 0.2*total_price;
                else
                    discount = 0;
            }
            total_income = total_price-discount;
            total_discount += discount;
            gross_income += total_price;

    /*print invoice per customer*/

            printf("\n\n");
            printf("\t________________________________________________________________\n");
            printf("\t----------------------------------------------------------------\n");
            printf("\t*********************** SY movie theater ***********************\n");
            printf("\tInvoice no. : %d ",invoice_number);
            printf("\t\t\t\tDate : %s \n", date);
            printf("\tCustomer name : %s",name);
            printf("\t\t\t\tMember no. : %d \n",member_number);
            printf("\t________________________________________________________________\n");
            printf("\t| %3s | %15s | %10s | %10s | %10s|\n","#","Type of seat","Unit price","Quantity","Total price");
            printf("\t________________________________________________________________\n");
            printf("\t| %3s |%10s %2d-%2d | %10.2f | %10d | %10.2f|\n","1",type_seat,seat_number_start,seat_number_end,unit_price,total_seat,total_price);
            printf("\t________________________________________________________________\n");
            printf("\t\t\t\t\t Total seats        : %10d\n",total_seat);
            printf("\t\t\t\t\t Discount of member : %10.2f\n",discount);
            printf("\t\t\t\t\t Amount total       : %10.2f\n",total_income);
            printf("\n\t\t\t\t THANK YOU :D\n");
            printf("\t****************************************************************\n");
            printf("\t----------------------------------------------------------------\n");
            printf("\t________________________________________________________________\n\n\n");

            printf("Again ? (Y or N) : ");
            scanf("%s",&again);
            printf("\n\n");
        }
        else
            again = 'N' ;

    }while(again == 'Y');

    /*print invoice all day*/

            printf("\n\n\n");
            printf("================================================================\n");
            printf("Date : %s\n",date);
            printf("Number of invoices : %d\n",number_of_invoice);
            printf("Total Emperor seat sold : %d\n",total_emperor);
            printf("Total Regular seat sold : %d\n",total_regular);
            printf("Total Sofa    seat sold : %d\n",total_sofa);
            printf("Gross income is %.2f\n",gross_income);
            printf("Total discount is %.2f\n",total_discount);
            net_income = gross_income - total_discount;
            printf("Net income is %.2f\n\n",net_income);
            printf("\n THANK YOU :D\n");
            printf("================================================================\n");
            printf("\n***************************************************************************\n");
}
