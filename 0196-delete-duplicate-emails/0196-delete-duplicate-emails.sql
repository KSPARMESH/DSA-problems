# Write your MySQL query statement below
DELETE Person FROM Person JOIN Person AS DuplicatePerson ON Person.email = DuplicatePerson.email AND Person.id > DuplicatePerson.id;