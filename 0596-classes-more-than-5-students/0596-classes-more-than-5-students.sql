# Write your MySQL query statement below
SELECT class
FROM COURSES
GROUP BY class
HAVING COUNT(DISTINCT student) >= 5;