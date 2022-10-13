-- 코드를 입력하세요
SELECT count(*) as USERS 
FROM USER_INFO
WHERE year(JOINED) = 2021
and 20 <= age 
and age <= 29;