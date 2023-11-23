def removeDuplicates(nums) -> int:
    count = 0
    nums = nums
    for i, j in enumerate(nums[:]):
        if j == nums[i-1]:
            count+=1
        if count >= 2:
            nums.remove(j)
            nums.append("_")
            count = 0
    k = 0
    for s in nums:
        if s != "_":
            k+=1
    return nums

inlis = [1, 1, 1, 2, 2, 3, 3, 3]
kan = removeDuplicates(inlis)
print(kan)
print(inlis)