// strtok

#include <stdio.h>
#include <string.h>   // ← हे add कर — strtok इथे आहे

int main()
{
    char line[] = "101,Devendra,92.5,Pune";
    char *fields[10];
    int count = 0;

    char *tok = strtok(line, ",");
    while (tok != NULL)
    {
        fields[count++] = tok;
        tok = strtok(NULL, ",");
    }

    printf("ID:    %s\n", fields[0]); // 101
    printf("Name:  %s\n", fields[1]); // Devendra
    printf("Marks: %s\n", fields[2]); // 92.5
    printf("City:  %s\n", fields[3]); // Pune
    return 0;
}