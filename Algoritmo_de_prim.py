from heapq import heappop, heappush

MAXV = 1000 
graph = [[] for x in xrange(MAXV)]
def add_edge(v, u, w):
    graph[v].append((u,w))
    graph[u].append((v,w))
def prim(graph, Vi=0, edge=[], vis=[]):

    if edge == []:
        edge = [(-1,-1)] * len(graph)
    if vis == []:
        vis = [False] * len(graph)

    edge[Vi] = (0,-1)
    heap = [(0,Vi)]

    while True:
        v = -1
        while len(heap) > 0 and (v < 0 or vis[v]):
            v = heappop(heap)[1]

        if v < 0 or edge[v][0] < 0:
            break
        vis[v] = True

        for (u, w) in graph[v]:
            if edge[u][0] < 0 or edge[u][0] > w:
                edge[u] = (w, v)
                heappush(heap, (edge[u][0],u))

    return edge

def primDesconexo(graph):
    edge = [(-1,-1)] * len(graph)
    vis = [False] * len(graph)
    for i in xrange(len(graph)):
        if edge[i][0] == -1:
            prim(graph, i, edge, vis)
    return edge