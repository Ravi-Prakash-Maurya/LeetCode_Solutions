# Write your MySQL query statement below
SELECT product_name , year , price
FROM Product as p
INNER JOIN Sales as s
ON p.product_id = s.product_id;