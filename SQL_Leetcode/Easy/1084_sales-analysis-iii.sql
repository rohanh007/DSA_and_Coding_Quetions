# Write your MySQL query statement below
select p.product_id , p.product_name from Product as p join sales as s on p.product_id=s.product_id 
group by s.product_id
Having MIN(s.sale_date) >="2019-01-01" AND MAX(s.sale_date) <= "2019-03-31";