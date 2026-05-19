#include <stdio.h> 
int main() { 
FILE *fp; 
char buffer[1024]; 
int line_no = 1; 
fp = fopen("input.txt", "r"); 
if (fp == NULL) { 
perror("Error opening file"); 
return 1; 
} 
while (fgets(buffer, sizeof(buffer), fp) != NULL) { 
printf("%d %s", line_no, buffer 
line_no++; 
} 
fclose(fp); 
return 0; 
} 