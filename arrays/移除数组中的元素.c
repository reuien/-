/*假设我们目前已知数组 nums 和数组长度numsSize。我们需要移除数组中的元素target 
我们还是可以通过双指针的思路来解决这个问题
首先一个快指针 fast。和一个慢指针slow，
快指针负责遍历数组，而慢指针负责容纳我们的新数组中需要的元素
最后返回一个数组
下面是移除元素所需的代码*/
int fast=0;
int slow=0;
for(fast=0;fast<numsSize;fast++){
if(nums[fast]!=target){// 只要原数组中没有遇到我需要删除的元素，我就把元素记录到新数组中
  nums[slow]=nums[fast];//也可以写成nums[slow++]=nums[fast]
  slow++;    
  }
}
return slow;
