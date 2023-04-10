SELECT
    name,
    cast((EXTRACT(DAY FROM payday)) as int) as day
    
FROM loan;