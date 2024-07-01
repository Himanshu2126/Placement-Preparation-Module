class Solution(object):
    def maxArea(self, height):
     n=len(height)
     l=0
     r=n-1
     area=0
     curarea=0

     while l<r:
       curarea=(r-l)*min(height[l],height[r])
       if curarea>area:
        area=curarea

       if height[l]<height[r]:
        l=l+1
       else :
        r=r-1

     return  area




        