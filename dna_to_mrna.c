#include <stdio.h>
#include <string.h>
#include <ctype.h>

char dna_to_rna(char base) {
    switch (toupper(base)) {
        case 'A': return 'U';
        case 'T': return 'A';
        case 'C': return 'G';
        case 'G': return 'C';
        default:  return '?';
    }
}

int main() {
    char dna[1000];
    char mrna[1000];
    int valid = 1;

    printf("Enter DNA sequence: ");
    fgets(dna, sizeof(dna), stdin);
    dna[strcspn(dna, "\n")] = 0;

    int len = strlen(dna);
    for (int i = 0; i < len; i++) {
        char base = toupper(dna[i]);
        if (base == 'A' || base == 'T' || base == 'C' || base == 'G') {
            mrna[i] = dna_to_rna(base);
        } else {
            printf("Invalid base: %c\n", dna[i]);
            valid = 0;
            break;
        }
    }

    if (valid) {
        mrna[len] = 0;
        printf("DNA:  %s\n", dna);
        printf("mRNA: %s\n", mrna);
    }

    return 0;
}