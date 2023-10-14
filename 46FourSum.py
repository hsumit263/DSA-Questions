# find quadrpulates with sum equal to target

from typing import List
import itertools

def fourSum(nums: [int], target: int) -> [[int]]:

    # // BRUTE FORCE
    # n=len(nums)
    # st=set()

    # for i in range(n):
    #     for j in range(i+1,n):
    #         for k in range(j+1,n):
    #             for l in rnage(k+1,n):

    #                 sum=nums[i]+nums[j]
    #                 sum+=nums[k]
    #                 sum+=nums[l]

    #                 if sum==target:
    #                     temp=[nums[i],nums[j],nums[k],nums[l]]
    #                     temp.sort()
    #                     st.add(tuple(temp))

    
    # ans=[list(x) for x in st]
    # return ans

    #better approach
    # n=len(nums)
    # st=set()

    # for i in range(n):
    #     for j in range(i+1,n):
    #         hashSet=set()
    #         for k in range(j+1,n):

    #             sum=nums[i]+nums[j]+nums[k]
    #             fourth=target-sum
    #             if fourth in hashSet:
    #                 temp=[nums[i],nums[j],nums[k],fourth]
    #                 temp.sort()
    #                 st.add(tuple(temp))
                
    #             hashSet.add(nums[k])

    # ans=[list(t) for t in st]
    # return ans

   




