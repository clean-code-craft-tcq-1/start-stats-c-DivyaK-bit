  
#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = numberset[0];
    s.max =  numberset[0];
    float sum = 0;
    
    for(int i = 0 ; i < setlength ;  i++ )
    {
        sum += numberset[i];
        /*To calculate minimim of array*/
        if ( numberset[i] < s.min)
        {
            s.min =  numberset[i];
        }
         /*To calculate maximum of array*/
        if ( numberset[i] > s.max)
        {
            s.max =  numberset[i];
        }
    }
    s.average = sum / setlength ;
  
    return (s);  
}
