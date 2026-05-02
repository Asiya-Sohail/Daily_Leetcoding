# Write your MySQL query statement below
SELECT u.name, SUM(t.amount) as balance
FROM USERS u 
JOIN TRANSACTIONS t
USING(account)
GROUP BY u.account, u.name
HAVING balance > 10000;