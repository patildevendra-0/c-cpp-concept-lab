// sscanf string मधून वाचतो

#include <stdio.h>

int main()
{
    char Data[] = "Devendra 25 9.5";

    char Student_Name[50];
    int iAge = 0;
    float fCgpa = 0;
    int Parsed_Count = 0;


    Parsed_Count = sscanf(Data, "%s %d %f", Student_Name, &iAge, &fCgpa);

    printf("PARSED : %d\n",Parsed_Count);
    printf("NAME : %s\n",Student_Name);
    printf("AGE : %d\n",iAge);
    printf("CGPA : %f\n",fCgpa);

    return 0;
}