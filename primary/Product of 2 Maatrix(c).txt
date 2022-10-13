int main() {
    int t;
    scanf("%d", &t);
    for (int p = 0; p < t; p++) {
        int n1, m1, n2, m2;
        scanf("%d%d", &n1, &m1);
        int mat1[n1][m1];
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m1; j++) {
                scanf("%d", &mat1[i][j]);
            }
        }
        scanf("%d%d", &n2, &m2);
        int mat2[n2][m2];
        for (int i = 0; i < n2; i++) {
            for (int j = 0; j < m2; j++) {
                scanf("%d", &mat2[i][j]);
            }
        }
        int c[n1][m2];
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < m2; j++) {
                c[i][j] = 0;
                for (int k = 0; k < n2; k++) {
                    c[i][j] += mat1[i][k] * mat2[k][j];
                }
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

