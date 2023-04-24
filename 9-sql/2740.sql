SELECT
  team

FROM (
  (SELECT
    CONCAT('Podium: ', team) as team,
    position
  
  FROM league
  LIMIT 3)

  UNION

  (SELECT
    CONCAT('Demoted: ', team) as team,
    position
  
  FROM league
  WHERE league.position != (SELECT LAST_VALUE(league.position) OVER(ORDER BY league.position DESC) FROM league LIMIT 1)
  
  ORDER BY league.position DESC
  LIMIT 1)

  UNION

  (SELECT
    CONCAT('Demoted: ', team) as team,
    position
  
  FROM league
  WHERE league.position = (SELECT LAST_VALUE(league.position) OVER(ORDER BY league.position DESC) FROM league LIMIT 1)
  
  ORDER BY league.position DESC
  LIMIT 1)

  ORDER BY position

  ) AS podium_demoted