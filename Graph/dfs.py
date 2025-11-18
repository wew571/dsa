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

def dfs(graph, start, goal):
    node_path = {}
    visited = set()

    stack = [start]
    while stack:
        current = stack.pop()
        if current == goal:
            path = reconstructPath(node_path, start, goal)
            return path
        for neighbor in graph[current]['neighbors']:
            if neighbor not in visited:
                node_path[neighbor] = current
                visited.add(neighbor)
                stack.append(neighbor)

    return None

def t():
    graph = Romania.getGraphRomania()
    start = 'Arad'
    goal = 'Bucharest'

    path = dfs(graph, start, goal)

    if path:
        print("Path found:", " -> ".join(path))
    else:
        print("No path found")


t()
