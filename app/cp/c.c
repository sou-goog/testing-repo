#include <stdio.h>

struct Student {
    char name[21];
    int roll;
};

int main() {
    FILE *fp;
    struct Student s;
    char filename[100];
    int i;

    printf("Enter binary file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "wb");
    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%20s", s.name);

        printf("Enter roll number of student %d: ", i + 1);
        scanf("%d", &s.roll);

        // Write in binary format
        fwrite(&s, sizeof(struct Student), 1, fp);
    }

    fclose(fp);
    return 0;
}

