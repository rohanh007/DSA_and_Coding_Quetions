
select email as Email from Person group by email Having Count(email)>1 ;