 #include<stdio.h>
    int main()
    {
        char ch;
     printf("Enter a character(lower case):");
     scanf("%c",&ch);
     if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
       printf("%c is an vowel",ch);
    }
    else
    {
       printf("%c is a consonant ",ch);
    }
    return 0;
    }
