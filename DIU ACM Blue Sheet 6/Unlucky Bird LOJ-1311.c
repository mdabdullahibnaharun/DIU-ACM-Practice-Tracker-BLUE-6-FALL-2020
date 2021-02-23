#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int tc;
    scanf("%d",&tc);
    for(int i = 1 ; i <= tc ; i++){
        double  time1,time2,mtime,dist1,dist2,birdfly,v1,v2,v3,a1,a2;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        time1 = v1/a1;
        time2 = v2/a2;
        mtime = (time1<time2)?time2:time1;
        dist1 = (v1*v1)/(2*a1);
        dist2 = (v2*v2)/(2*a2);
        birdfly = (v3*mtime);
        printf("Case %d: %.10lf %.10lf\n", i,dist1+dist2, birdfly);
    }
    return 0;
}
