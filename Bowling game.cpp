#include <stdio.h>

 int main (void)
{
    int frame[10][3] = {0}; //0번지는 안쓰기로 함 1프레임은 frame[1]에 저장
    int frame10[4] = {0};  //이하 동문

    int frameScore[11] = {0}; // 이하 동문
    int i;

    //=======================1구 진입=================================

    for (int i = 1; i <= 9; ++i)  // 1~ 9프레임은 통상프레임 
    {
        while (1)
        {
            printf("%d game first score : ", i);
            scanf_s("%d", &frame[i][1]);
            if (frame[i][1] < 0 || frame[i][1] > 10) // 오류 검출 
                printf("Error! input number\n");
            else
                break;
        }


        //<<<<<<<<<<<<<<<<<전 프레임에서 스페어를 한 경우>>>>>>>>>>>>>>>>>>>>>>>>>>>
        //전 프레임이 있으려면 최소한 2번쨰 프레임 부터 
        //전 프레임의 첫 투구와 두번쨰 투구의 합이 10이여야 스페어임, 하지만 첫 투구가 10점이면 안됨

        if ((i > 1) && (frame[i - 1][1] + frame[i - 1][2] == 10) && (frame[i - 1][1] != 10))
        {
            frameScore[i - 1] = frameScore[i - 2] + 10 + frame[i][1];
            //전 프레임의 누적 점수는 = 전전 프레임의 점수 + 10(전 프레임 스페어) + 현재 프레임 첫 투구
            printf("%d frame Score : %d\n", i - 1, frameScore[i - 1]); //전 프레임 누적 점수 출력
        }

        //<<<<<<<<<<<<<<<<전 프레임, 전전 프레임이 스트라이크인 경우>>>>>>>>>>>>>>>>>>>>>>
        //전전과 전 프레임이 스트라이크 이려면 최소 3번째 프레임 부터
        //전전 프레임 1구가 10여야 하고, 전 프레임 1구가 10
        if (i > 2 && frame[i - 2][1] == 10 && frame[i - 1][1] == 10)
        {
            frameScore[i - 2] = frameScore[i - 3] + 20 + frame[i][1];
            //전전 프레임 누적점수 = 전전전 프레임 + 20(전, 전전 스트라이크) + 현재
            printf("%d frame Score : %d\n", i - 2, frameScore[i - 2]); //전전 프레임 누적 점수 출력
        }




        //======1구가 스트라이크가 아닐 때 //  즉 2구 쨰 접어들었을때====================

        if (frame[i][1] != 10)
        {
            while (1)
            {
                printf("%d game second score : ", i);
                scanf_s("%d", &frame[i][2]);
                if (frame[i][2] < 0 || frame[i][2] > 10) //오류 검출 (0<x<10 사이값
                    printf("Error! input number\n");
                else if (frame[i][1] + frame[i][2] > 10) //오류 검출(1구 + 2구 < 10)
                    printf("Too much input number!\n");
                else
                    break;
            }

            //<<<<<<<<<<<<<<<<<<<<<전 프레임이 스트라이크>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
                //전 프레임이 있으려면 최소 두번째 프레임이어야함
                //전 프레임의 초구가 10점이어야함 
            if (i > 1 && frame[i - 1][1] == 10)
            {
                frameScore[i - 1] = frameScore[i - 2] + 10 + frame[i][1] + frame[i][2];
                //전 프레임 누적 점수 = 전전 프레임 누적 점수 + 10(전 스트라이크) +현재 1구, 2구
                printf("%d frame Score : %d\n", i - 1, frameScore[i - 1]); // 전 프레임 누적 점수 출력
            }

            //<<<<<<<<<<<<<<<<<<<<<<<<<<스페어 실패>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
            if (frame[i][1] + frame[i][2] < 10)
            {
                frameScore[i] = frameScore[i - 1] + frame[i][1] + frame[i][2];
                // 현재 프레임 누적 점수 = 전 프레임 누적점수 + 현재 1구 + 2구
                printf("%d frame Score : %d\n", i, frameScore[i]);
            }
        }
    }

    /////////////////////////10번째 프레임///////////////////////////

    //=======================1구 진입=================================
    while (1)
    {
        printf("%d game first score : ", 10);
        scanf_s("%d", &frame10[1]);
        if (frame10[1] < 0 || frame10[1] > 10) // 오류 검출
            printf("Error! input number\n");
        else
            break;
    }

    //<<<<<<<<<<<<<<<<<전 프레임에서 즉 9프레임이 스페어를 한 경우>>>>>>>>>>>>>>>>>>>>>
    //9번째 프레임에서 1구와 2구의 합이 10 이고 10 프레임의 1구가 스트라이크가 아님
    if (frame[i][1] + frame[i][2] == 10 && frame10[1] != 10)
    {
        frameScore[i - 1] = frameScore[i - 2] + 10 + frame10[1];
        //전(8) 프레임 누적 점수 = 전전(7)프레임 누적점수 + 10(9 프레임 스페어) + 현재 1구
        printf("%d frame Score : %d\n", i - 1, frameScore[i - 1]); // 8프레임 점수 표시
    }

    //<<<<<<<<<<<<전전프레임 즉 8프레임과 9프레임이 스트라이크인 경우>>>>>>>>>>>>>>>>>>>>
    //8프레임 초구가 10, 즉 스트라이크고, 9프레임 초구가 10, 즉 스트라이크
    else if (frame[i - 2][1] == 10 && frame[i - 1][1] == 10)
    {
        frameScore[i - 2] = frameScore[i - 3] + 20 + frame10[1];
        //전전(7)프레임 누적 점수 = 전전전(6)프레임 누적 점수 + 20(8,9프레임 스트라이크) + 현재 1구 
        printf("%d frame Score : %d\n", i - 2, frameScore[i - 2]); // 7프레임 점수 표시
    

    }

    //=======================2구 진입=================================

    //<<<<<<<<<<<<<<<<<<<<< 1구가 10점일 경우>>>>>>>>>>>>>>>>>>>>>>>>>>
    if (frame10[1] == 10)
        while (1)
        {
            printf("%d game second score : ", 10);
            scanf_s("%d", &frame10[2]);
            if (frame10[2] < 0 || frame10[2] > 10)
                printf("Error! input number\n");
            else
                break;
        }
    else  //<<<<<<<<<<<<<<<<10점이 아닐 경우>>>>>>>>>>>>>>>>>>>>>>>>>>>>
        while (1)
        {
            printf("%d game second score : ", 10);
            scanf_s("%d", &frame10[2]);                // 2구 입력 요청
            if (frame10[2] < 0 || frame10[2] > 10)  //오류 검충
                printf("Error! input number\n");
            else if (frame10[1] + frame10[2] > 10)  // 오류검출
                printf("Too much input number!\n");
            else
                break;
        }

    //9 프레임이 스트라이크인 경우
    if (frame[i - 1][1] == 10)
    {
        frameScore[i - 1] = frameScore[i - 2] + 10 + frame10[1] + frame10[2];
        //9프레임 누적 점수 = 8 프레임 누적 점수 + 10(9프레임 스트라잌)+ 10프레임 1구+2구
        printf("%d frame Score : %d\n", i - 1, frameScore[i - 1]);
    }
    //10프레임 스페어 처리 성공했을 경우 >>>>> 3구 가능
    if (frame10[1] + frame10[2] >= 10)
        while (1)
        {
            printf("%d game third score : ", 10);
            scanf_s("%d", &frame10[3]);       //3구 입력
            if (frame10[3] < 0 || frame10[3] > 10)  // 오류 검출
                printf("Error! input number\n");
            else
                break;
        }
    //3구째는 얼마를 치던 상관 없이 9프레임까지 누적 점수에 각각 10프레임의 1구+2구+3구   
    frameScore[10] = frameScore[i - 1] + frame10[1] + frame10[2] + frame10[3];
    printf("%d frame Score : %d\n", 10, frameScore[10]);
    return 0;
} */
