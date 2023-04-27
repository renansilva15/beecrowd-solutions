SELECT
  (
    SELECT
      name
    FROM teams t
    WHERE t.id = teams.id
  ) AS name,

  (
    SELECT
      COUNT(team_1)
    FROM matches
    WHERE team_1 = teams.id
  )
  +
  (
    SELECT
      COUNT(team_2)
    FROM matches
    WHERE team_2 = teams.id
  ) AS matches,

  (
    SELECT
      sum(case when team_1_goals > team_2_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_1
    WHERE t.id = teams.id
  )
  +
  (
    SELECT
      sum(case when team_2_goals > team_1_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_2
    WHERE t.id = teams.id
  ) AS victories,

  (
    SELECT
      sum(case when team_1_goals < team_2_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_1
    WHERE t.id = teams.id
  )
  +
  (
    SELECT
      sum(case when team_2_goals < team_1_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_2
    WHERE t.id = teams.id
  ) AS defeats,

  (
    SELECT
      sum(case when team_1_goals = team_2_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_1
    WHERE t.id = teams.id
  )
  +
  (
    SELECT
      sum(case when team_2_goals = team_1_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_2
    WHERE t.id = teams.id
  ) AS draws,

  (
    SELECT
      sum(case when team_1_goals > team_2_goals then 3 when team_1_goals = team_2_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_1
    WHERE t.id = teams.id
  )
  +
  (
    SELECT
      sum(case when team_2_goals > team_1_goals then 3 when team_2_goals = team_1_goals then 1 else 0 END)
    FROM teams t
    JOIN matches ON t.id = matches.team_2
    WHERE t.id = teams.id
  ) AS score

FROM teams
ORDER BY score DESC;