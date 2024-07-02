
SELECT  a.name as Employee  FROM Employee as a JOIN Employee as b 
ON a.managerId=b.id where a.salary>b.salary;


-- Runtime
-- 312
-- ms
-- Beats
-- 97.54