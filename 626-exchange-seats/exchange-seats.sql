# Write your MySQL query statement below
SELECT IF (id < (SELECT MAX(id) FROM SEAT), 
    IF (id % 2 = 0, id - 1, id + 1), 
    IF (id % 2 = 0, id - 1, id)
) AS ID, STUDENT 
FROM SEAT
ORDER BY ID;