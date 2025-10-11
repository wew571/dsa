#ifndef PREFIX2D_HPP
#define PREFIX2D_HPP

long long preFix2D( int n , int m , int r[][1000] , int x1 , int y1 , int x2 , int y2){
    int pre[n][m];
    
    for(int s = 0 ;s<n ;s++){
        for(int q = 0 ;q<m ;q++){
            pre[s][q] = r[s][q];
            if(q>0) pre[s][q] += pre[s][q-1];
            if(s>0) pre[s][q] += pre[s-1][q];
            if(s>0 && q>0) pre[s][q] -= pre[s-1][q-1];
        }
    }
    long long res = pre[x2][y2];
    if(x1>0) res-=pre[x1-1][y2];
    if(y1>0) res-= pre[x2][y1-1];
    if(x1 > 0 && y1>0) res+=pre[x1-1][y1-1];
    return res;
}

#endif