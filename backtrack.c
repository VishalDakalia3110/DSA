#include<stdio.h>
void solve(int arr[3][3],int r,int c,int *ans) {
    if(r == 2 && c == 2) return;
    if(arr[r][c] == -1) return;
    if(r < 3 && arr[r+1][c] == 1) {
        ans++;
        r++;
        solve(arr,r,c,ans);
    }
    else if(c < 3 && arr[r][c+1] == 1) {
        ans++;
        c++;
        solve(arr,r,c,ans);
    }
    else if(r < 3 && arr[r+1][c] == 0) {
        r++;
        solve(arr,r,c,ans);
    }
    else if(c < 3 && arr[r][c+1] == 0) {
        c++;
        solve(arr,r,c,ans);
    }
    else return;
    

}
int main() {
    int arr[3][3] = {{1,-1,-1},{1,0,-1},{-1,1,1}};
    int ans = 0;
    solve(arr,0,0,&ans);
    printf("%d",ans);
}