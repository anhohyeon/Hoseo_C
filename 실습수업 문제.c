#include <stdio.h>

int main() {
    int n; // 상품 종류 개수
    
    // 상품 개수 입력 (1~100 범위 검사)
    do {
        printf("상품 개수 입력 (1~100): ");
        scanf("%d", &n);
        if (n < 1 || n > 100) {
            printf("잘못된 입력입니다. 1에서 100 사이의 값을 입력하세요.\n");
        }
    } while (n < 1 || n > 100);

    int 입고[100];   // 상품별 입고 수량 (재고로 재활용)
    int 판매[100];   // 상품별 판매 수량

    // 입고 수량 입력
    printf("상품별 입고 수량 입력:\n");
    for (int i = 0; i < n; i++) {
        printf("상품 %d 입고 수량: ", i + 1);
        scanf("%d", &입고[i]);
    }

    // 판매 수량 입력
    printf("상품별 판매 수량 입력:\n");
    for (int i = 0; i < n; i++) {
        printf("상품 %d 판매 수량: ", i + 1);
        scanf("%d", &판매[i]);
    }

    // 입고 배열을 재고 배열처럼 사용 (입고 - 판매)
    for (int i = 0; i < n; i++) {
        입고[i] -= 판매[i];
    }

    int id;
    printf("재고를 확인할 상품 ID 입력 (1 ~ %d): ", n);
    scanf("%d", &id);

    // 해당 ID 상품의 재고 출력
    printf("\n[출력 결과]\n");
    printf("상품 %d의 재고 수량: %d\n", id, 입고[id - 1]);

    // 전체 상품의 재고 출력
    printf("전체 상품 재고 수량: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", 입고[i]);
    }
    printf("\n");

    return 0;
}


