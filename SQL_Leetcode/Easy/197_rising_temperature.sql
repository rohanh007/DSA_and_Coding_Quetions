# Write your MySQL query stat

select a.id from Weather as a ,Weather as b 
where a.temperature>b.temperature and datediff(a.recorddate ,b.recorddate)=1;