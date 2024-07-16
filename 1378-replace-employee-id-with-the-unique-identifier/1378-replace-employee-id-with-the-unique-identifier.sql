# Write your MySQL query statement below
SELECT unique_id,name
FROM EmployeeUNI as e
RIGHT JOIN Employees as f
ON e.id = f.id;