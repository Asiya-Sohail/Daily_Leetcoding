# Write your MySQL query statement below
SELECT u.name, COALESCE(SUM(r.distance), 0) as travelled_distance
FROM USERS u
LEFT JOIN RIDES r 
ON u.id = r.user_id
GROUP BY r.user_id
ORDER BY travelled_distance DESC, name