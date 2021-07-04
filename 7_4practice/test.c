# define _CRT_SECURE_NO_WARNINGS

//88. 合并两个有序数组

//给你两个有序整数数组 nums1 和 nums2，请你将 nums2 合并到 nums1 中，使 nums1 成为一个有序数组。
//初始化 nums1 和 nums2 的元素数量分别为 m 和 n 。
//你可以假设 nums1 的空间大小等于 m + n，这样它就有足够的空间保存来自 nums2 的元素。
//输入：nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
//输出：[1, 2, 2, 3, 5, 6]

//个人解法(效率较低)：

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int N1i = 0, N2i = 0;//N1i为nums1数组下标，N2i为nums2数组下标
    while (N2i < n)//以nums2中有效元素个数作为循环次数
    {
        if (nums2[N2i] < nums1[N1i])//当nums2[N2i]小于nums1[N1i]时，N1i之后的元素(包括N1i)整体向后移动一位
        {                           //再将nums1[N1i]置为nums2[N2i]
            int Nm = m;
            while (Nm > N1i)
            {
                nums1[Nm] = nums1[Nm - 1];
                Nm--;
            }
            nums1[N1i] = nums2[N2i];
            m++;//这里是因为插入后nums1中有效元素会增加1个
            N2i++;//将N2i指向nums2中下一个元素
        }
        if (N1i >= m)//特殊情况：当nums1中有效元素被判断完，即nums2中剩下的元素大于nums1中所有的元素时，
                     //直接将nums1赋值即可
        {
            nums1[N1i] = nums2[N2i];
            N2i++;
        }
        N1i++;//指向nums1中下一个元素
    }
}



//优化解(空间复杂度O（M+N）)：

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* retArr = (int*)malloc(sizeof(int) * (m + n));//创建新数组，暂时储存两个数组中排序的数字，大小为m+n
    int len = m + n;//每次往数组retArr里面放一个数，则需要放m+n次
    int N1i = 0, N2i = 0;//分别为nums1下标，nums2下标
    int reti = 0;//retArr数组下标
    while (len)
    {
        if (N1i >= m)//如果nums1中有效元素用完，则只需要将nums2中元素直接赋值给retArr
        {
            retArr[reti++] = nums2[N2i++];
        }
        else if (N2i >= n)//同理
        {
            retArr[reti++] = nums1[N1i++];
        }
        else if (nums1[N1i] >= nums2[N2i])//如果nums1中元素大于nums2，将nums2中元素赋值给retArr
        {
            retArr[reti++] = nums2[N2i++];
        }
        else//同理
        {
            retArr[reti++] = nums1[N1i++];
        }
        len--;
    }
    memcpy(nums1, retArr, sizeof(int) * (m + n));//将retArr中元素拷贝到nums1中
    free(retArr);//释放
    retArr = NULL;
}




//189. 旋转数组
//给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。
//输入: nums = [1, 2, 3, 4, 5, 6, 7], k = 3
//输出 : [5, 6, 7, 1, 2, 3, 4]
//解释 :
    //向右旋转 1 步 : [7, 1, 2, 3, 4, 5, 6]
    //向右旋转 2 步 : [6, 7, 1, 2, 3, 4, 5]
    //向右旋转 3 步 : [5, 6, 7, 1, 2, 3, 4]


//方法一(会超时):每次旋转一个
void rotate(int* nums, int numsSize, int k) {
    if (k > numsSize)
    {
        k %= numsSize;
    }
    while (k)
    {
        int tmp = nums[numsSize - 1];
        int i = 0;
        while (i < numsSize - 1)
        {
            nums[numsSize - i - 1] = nums[numsSize - i - 2];
            i++;
        }
        nums[0] = tmp;
        k--;
    }
}

//方法二:先创建k个元素大小的数组，将需要旋转的数字放进去，然后将不需要旋转的数字整体后移，最后再将需要旋转的放到前面
//空间复杂度O(K)
void rotate(int* nums, int numsSize, int k) {
    if (k > numsSize)
    {
        k %= numsSize;
    }
    int* retArr = (int*)malloc(sizeof(int) * k);
    int i = k;
    int reti = 0;
    while (i >= 1)
    {
        retArr[reti++] = nums[numsSize - i];
        i--;
    }
    memmove(nums + k, nums, 4 * (numsSize - k));
    while (k)
    {
        nums[i] = retArr[i];
        i++;
        k--;
    }
}


//方法三:先将需旋转部分逆置，再将不需旋转部分逆置，最后再整体逆置
//时间复杂度:O(N)
//空间复杂度:O(1)
void reverse(int* nums, int left, int right)
{
    while (left < right)
    {
        int tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        left++;
        right--;
    }
}
void rotate(int* nums, int numsSize, int k) {
    if (k > numsSize)
    {
        k %= numsSize;//k可能大于numsSize
    }
    reverse(nums, 0, numsSize - k - 1);       //逆置不需要旋转部分
    reverse(nums, numsSize - k, numsSize - 1);//逆置需要旋转部分
    reverse(nums, 0, numsSize - 1);           //整体逆置
}