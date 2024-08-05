#include <stdio.h>
#include <assert.h>

#define TRUE (1)
#define FALSE (0)

enum { MAX_NUMS = 10 };

static int s_nums[MAX_NUMS] = { 0, };
static int s_num_count = 0;

static int s_front = 0;
static int s_rear = 0;
int is_full(void);
//제일 오른쪽 을 하나 채우기
void enqueue(int value)
{
    if (is_full()) {
        printf("Q is full, cannot enqueue %d\n", value);
        return;
    }
    s_nums[s_rear] = value;
    s_rear = (s_rear + 1) % MAX_NUMS; //한칸씩 오른쪽으로 이동.
    s_num_count++;

}

int is_empty(void)
{
    return s_num_count==0; //비어있으므로 첨부터 다시 채울수있게 이동
}

//다 채우면 실행
int is_full(void)
{
    
    return s_num_count == MAX_NUMS;
}

//앞에서부터 하나씩 지우기
int dequeue(void)
{
    //비어있으면 더 비울께 없음.
    if (is_empty) {
        printf("Q is empty , cannot dequeue\n");
        return -1;
    }
    int value = s_nums[s_front];
    s_front = (s_front + 1) % MAX_NUMS;
    s_num_count--;
    return value;

}

// ================== TEST ====================

void _initial_queue()
{
    for (int i = 0; i < MAX_NUMS; ++i) {
        s_nums[0] = 0;
    }
    s_num_count = 0;
    s_front = 0;
    s_rear = 0;
}

void test1(void)
{
    _initial_queue();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    //10, 20, 30, 40, 50, 60, 70, 80 이 됨.

    assert(dequeue() == 10); // 제일 앞에꺼가 10이다. 따라서 바로 assert 경고
    assert(s_num_count == 7);
}

// 빈 큐에 대해 dequeue() 를 시도
void test2(void)
{
    _initial_queue();

    int result = dequeue();
    assert(s_num_count == 0);
}

// 가득 찬 큐에 대해 enqueue()
void test3(void)
{
    _initial_queue();

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    enqueue(100);
    assert(s_num_count == 10);

    enqueue(1234);
    assert(s_num_count == 10);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    assert(s_num_count == 0);

    int result = dequeue();
    assert(s_num_count == 0);
    assert(result != 1234);
}

int main(void)
{
    //test1();
    //test2();
    test3();

    return 0;
}
