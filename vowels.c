
int main() {
    int c = 0, a = 0, e = 0, i = 0, o = 0, u = 0;
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s); 

    while (s[c] != '\0') {
        if (s[c] == 'a' || s[c] == 'A')
            a++;
        else if (s[c] == 'e' || s[c] == 'E')
            e++;
        else if (s[c] == 'i' || s[c] == 'I')
            i++;
        else if (s[c] == 'o' || s[c] == 'O')
            o++;
        else if (s[c] == 'u' || s[c] == 'U')
            u++;
        c++;
    }

    printf("Number of vowels:\n");
    printf("a: %d\n", a);
    printf("e: %d\n", e);
    printf("i: %d\n", i);
    printf("o: %d\n", o);
    printf("u: %d\n", u);

    return 0;
}
