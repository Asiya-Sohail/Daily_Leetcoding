# Write your MySQL query statement below
SELECT U.UNIQUE_ID  , E.NAME
FROM EMPLOYEES E
LEFT JOIN EMPLOYEEUNI U
ON U.ID = E.ID;