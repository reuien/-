/*首先新建三个变量，三个变量分别是 左中右left   right  mid，或者类似低中高 low high  mid也可以 这里定义的三个变量是三种索引，其中mid可以先初始化为0
这里我们要进入循环，就会涉及到一个区间开闭的问题，一般常用的区间有两种，[low,high]和[low,high)，我们要根据我们选择或者题中要求的区间来决定循环的限制条件，
一般如果是全闭区间，如果low<=high的情况下，那个相等的值是可以被取到的，区间合法；如果在左闭右开的区间中写<=来写会出现中间相等的值同时处于，取到和不能取到的状态
并不合法，应写成low<high。先用代码实现全闭区间的写法。已知条件，存在一个数组int *nums,数组长度为numsSize 我们需要找到的目标值为target*/
int left=0;
int right=numsSize-1;
int mid;
while(left<=right){
    mid=(left+right)/2;//更新mid的值
    if(nums[mid]>target){
        right=mid-1;//这个地方因为我是全闭区间且上面已经判断了目标值和当前中间值不等，于是可以直接排除掉
    }else if(nums[mid]<target){
        left=mid+1;
    }else{
        return mid;}
}return -1;
/////////////////////////////////////////
下面是左闭右开的写法
while(left<right){
    mid=(left+right)/2;
if(nums[mid]>target){
    right=mid;}
else if(nums[mid]<target){
    left=mid+1;}
else{
    return mid;}
}return -1;
