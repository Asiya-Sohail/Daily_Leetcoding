# Write your MySQL query statement below
SELECT e2.name FROM EMPLOYEE e1
JOIN EMPLOYEE e2
ON e1.managerId = e2.id
GROUP BY e2.id, e2.name
HAVING count(e1.id) >=5;