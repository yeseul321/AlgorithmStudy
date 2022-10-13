-- 코드를 입력하세요
SELECT MEMBER_ID, MEMBER_NAME, GENDER, DATE_FORMAT(DATE_OF_BIRTH,'%Y-%m-%d') as DATE_OF_BIRTH
FROM MEMBER_PROFILE
WHERE DATE_OF_BIRTH like '%-03-%' 
and TLNO is not null 
and GENDER = 'w'
ORDER BY MEMBER_ID;

-- month(date_of_birth) = 3 이거랑 DATE_OF_BIRTH like '%-03-%' 이거랑 같은 결과 나오는데 전자가 더 좋을 듯 함.