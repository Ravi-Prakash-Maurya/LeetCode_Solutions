# Write your MySQL query statement below
SELECT u.name, IFNULL(SUM(r.distance),0) AS travelled_distance
FROM Users u LEFT JOIN Rides r
ON r.user_id = u.id
GROUP BY u.id
ORDER BY travelled_distance desc, u.name asc;
-- SELECT u.name, COALESCE(SUM(r.distance), 0) AS travelled_distance
-- FROM Users u
-- LEFT JOIN Rides r ON u.id = r.user_id
-- GROUP BY u.id, u.name
-- UNION
-- SELECT u.name, 0 AS travelled_distance
-- FROM Users u
-- WHERE u.id NOT IN (SELECT DISTINCT user_id FROM Rides)
-- ORDER BY travelled_distance DESC, name;