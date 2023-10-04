select w1.id from Weather AS w1 ,Weather AS w2 
where w1.temperature > w2.temperature and  TO_DAYS(w1.recordDate) - TO_DAYS(w2.recordDate)=1;


# Write your MySQL query statement below
#SELECT wt1.id FROM Weather AS wt1 , Weather AS wt2 
#WHERE wt1.temperature> wt2.temperature AND TO_DAYS(wt1.recordDate)-TO_DAYS(wt2.recordDate)=1;