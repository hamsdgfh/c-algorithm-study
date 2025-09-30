malloc : 동적할당 (메모리 영역 중 힙에 저장)
사용을 위해 #include <stdlib.h> 선언 필요

malloc() // ()안에는 필요한 바이트 수 작성
ex) malloc(8) -> 8바이트짜리 동적 할당

주의 : malloc은 무슨 형인지 모르기 때문에 먼저 선언 필요
ex)
  int *answer;
  answer = (int *)malloc(8);

  (int *)을 이용해서 총 8바이트로 선언된 malloc을 4씩 사용하도록 함

  answer = (int *)malloc(2 * sizeof(int));
  이런식으로 가독성 좋게 가능
