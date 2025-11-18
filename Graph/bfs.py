from collections import deque
import Romania

def reconstructPath(node_path, start, goal):
    path = []
    current = goal
    while current != start:
        path.append(current)
        current = node_path[current]
    path.append(start)
    path.reverse()
    return path

def bfs(graph , start, goal):
    node_path = {}
    visited = set()
    queue = deque()
    queue.append(start)

    while queue:
        concurrent = queue.popleft()
        if concurrent == goal:
            path = reconstructPath(node_path, start, goal)
            return path

        for neighbor  in graph[concurrent]['neighbors']:
            if neighbor not in visited:
                node_path[neighbor] = concurrent
                visited.add(neighbor)
                queue.append(neighbor)
    return None

def t():
    graph = Romania.getGraphRomania()
    start = 'Arad'
    goal = 'Bucharest'

    path = bfs(graph, start, goal)

    if path:
        print("Path found:", " -> ".join(path))
    else:
        print("No path found")


t()
