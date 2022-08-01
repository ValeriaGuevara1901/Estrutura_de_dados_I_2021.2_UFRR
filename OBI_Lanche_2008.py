def core(a1,b2):
    if(a1 < b2): return a1
    return b2

def max(a1,b2):
    if(a1 > b2): return a1
    return b2

def main():
  minimum = 256
  salas,corridor = map(int,input().split())

  adj = [[31 if(i!=j) else 0 for i in range(250)] for j in range(250)]

  
  for k in range(0,salas):
      for i in range(0,salas):
          for j in range(0,salas):
              adj[i][j] = core(adj[i][j], adj[i][k] + adj[k][j])
  for i in range(0, corridor):
      a1,b2,d3 = map(int,input().split())
      a1-= 1
      b2-= 1
      adj[a1][b2] = d3
      adj[b2][a1] = d3
  for i in range(0,salas):
      maximum = 0
      for j in range(0,salas):
          maximum = max(maximum, adj[i][j])
      minimum = core(minimum, maximum)

  print(minimum)

main()