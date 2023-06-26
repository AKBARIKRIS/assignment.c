 #include<stdio.h>
 #include<conio.h>

 void main()

	    //* convert temperature celsius to fahrenheit *//
 {

    clrscr();
    float c,f;

    printf("\n enter tempreature in celsius = ");
    scanf("%f",&c);

    f=((c*9)/5)+32;
    printf("\n convert tempreature in fahrenheit =%f",f);

    getch();


 }