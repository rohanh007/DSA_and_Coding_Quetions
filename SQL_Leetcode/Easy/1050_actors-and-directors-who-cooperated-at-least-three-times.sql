# Write your MySQL query statement below
select actor_id,director_id from Actordirector group by actor_id,director_id having count(timestamp)>=3;