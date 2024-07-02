--  Write your MySQL query statement below


select p.firstname ,p.lastName ,a.city ,a.state from Person as p  left join Address as a on p.personId=a.personId ;