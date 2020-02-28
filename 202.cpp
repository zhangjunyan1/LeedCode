/*************************************************************************
	> File Name: 202.cpp
	> Author: ma6174
	> Mail: ma6174@163.com 
	> Created Time: 2020年02月28日 星期五 11时44分54秒
 ************************************************************************/

int get_next(int n){
    int temp = 0;
    while (n) {
        temp += (n % 10) * (n % 10);
        n /= 10;
    }
    return temp;
}
bool isHappy(int n){
    int p = n, q = n;
    while (q != 1) {
        p = get_next(p);
        q = get_next(get_next(q));
        if (q == p)break;

    }
    return q == 1;
}

