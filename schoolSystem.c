
#include <stdio.h>

void findMean(float scores[5][3]){

     float totalSFD261S = 0;
     float totalEMA260S = 0;
     float totalDNT260S = 0;

    for(int i = 0; i < 5; i++){

      totalSFD261S += scores[i][0];
      totalEMA260S += scores[i][0];
      totalDNT260S += scores[i][0];

    }
    float meanSFD261S = totalSFD261S / 5;
    float meanEMA260S = totalEMA260S / 5;
    float meanDNT260S = totalDNT260S / 5;

    printf("The mean of SFD261S is:%f\n",meanSFD261S);
    printf("The mean of EMA260S is:%f\n",meanEMA260S);
    printf("The mean of DNT260S is:%f\n",meanDNT260S);

}


void findMax(float scores[5][3]){
    float max_ScoreSFD261S = scores[0][0], max_ScoreEMA260S = scores[0][1], max_ScoreDNT260S = scores[0][2];

    for (int i = 1; i < 5; i++) {
        if (scores[i][0] > max_ScoreSFD261S) {
            max_ScoreSFD261S = scores[i][0];
        }
        if (scores[i][1] > max_ScoreEMA260S) {
            max_ScoreEMA260S = scores[i][1];
        }
        if (scores[i][2] > max_ScoreDNT260S) {
            max_ScoreDNT260S = scores[i][2];
        }
    }

    printf("The max in SFD261S: %f\n", max_ScoreSFD261S);
    printf("The max in EMA260S: %f\n", max_ScoreEMA260S);
    printf("The max in DNT260S: %f\n", max_ScoreDNT260S);
}




void findMin(float scores[5][3]){
      float min_ScoreSFD261S = scores[0][0], min_ScoreEMA260S = scores[0][1], min_ScoreDNT260S = scores[0][2];

    for (int i = 1; i < 5; i++) {
        if (scores[i][0] < min_ScoreSFD261S) {
            min_ScoreSFD261S = scores[i][0];
        }
        if (scores[i][1] < min_ScoreEMA260S) {
            min_ScoreEMA260S = scores[i][1];
        }
        if (scores[i][2] < min_ScoreDNT260S) {
            min_ScoreDNT260S = scores[i][2];
        }
    }

    printf("The min in SFD261S: %f\n", min_ScoreSFD261S);
    printf("The min in EMA260S: %f\n", min_ScoreEMA260S);
    printf("The min in DNT260S: %f\n", min_ScoreDNT260S);
}

    int main(){

    float scores[5][3];
    for(int i = 0; i < 5;i++){

        printf("\nEnter the marks of student %d\n\n",i);
        printf("\nSFD261S marks : ");
        scanf("%f",&scores[i][0]);

        printf("\nEMA260S marks : ");
        scanf("%f",&scores[i][1]);

        printf("\nDNT260S marks : ");
        scanf("%f",&scores[i][2]);

    }
        findMean(scores);
        findMax(scores);
        findMin(scores);

       return 0;
}







