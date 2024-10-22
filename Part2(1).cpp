#include <stdio.h> 
#include <string.h> 

int max(int x, int y);

int lcs(char* S1, char* S2, int i, int j) {
	if (S1[i] == 0 || S2[j] == 0)
		return 0;
	if (S1[i] == S2[j])
		return 1 + lcs(S1, S2, i + 1, j + 1);
	else
		return max(lcs(S1, S2, i, j + 1), lcs(S1, S2, i + 1, j));
}

int max(int x, int y) {
	return (x > y) ? x : y;
}

int main() {
	char S1[] = "Algorithm";

	char S2[] = "Rythm";

	int m = strlen(S1);

	int n = strlen(S2);

	int i = 0, j = 0;

	printf("Lenght of LCS is %d", lcs(S1, S2, i, j));

	return 0;
}

