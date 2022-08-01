
class armazenadados:
    def __init__(self, vertice, previous_vertice, company):
        self.vertice=vertice
        self.company = company
        self.longest_way = [0, 0]
        self.previous_vertice=previous_vertice
        self.it = iter(graph[vertice])  

s = int(input())
graph = [[] for i in range(s)]

for i in range(s-1):
    a1, b2, c3 = (int(i) for i in input().split())
    graph[a1-1].append((b2-1, c3))
    graph[b2-1].append((a1-1, c3))

responser = 0
stack = [ armazenadados(0, -1, None) ] 
while stack: 
    top = stack[-1] 
    try:
        neighbor, company = next(top.it) 
        if neighbor != top.previous_vertice:
           stack.append( armazenadados (neighbor, top.vertice, company) ) 
    except StopIteration:  
        top_removed = stack.pop()  
        sub_way = top_removed.longest_way  
        company =  top_removed.company  
        resp = max(resp, top_removed.longest_way[0] + top_removed.longest_way[1] + 1) 
        if stack: 
            top = stack[-1]
            top.longest_way[company] = max(top.longest_way[company], sub_way[1-company] + 1)

print(responser)