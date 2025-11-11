from queue import PriorityQueue
import  Romania

def reconstructPath(node_path, start, goal):
    path = []
    current = goal
    while current != start:
        path.append(current)
        current = node_path[current]
    path.append(start)
    path.reverse()
    return path


def astar(graph, start, goal):
    queue = PriorityQueue()
    queue.put((graph[start]['distance'], start))
    queue_hash = {start}

    node_path = {}

    g_score = {node: float('inf') for node in graph}
    g_score[start] = 0

    f_score = {node: float('inf') for node in graph}
    f_score[start] = graph[start]['distance']

    while not queue.empty():
        current_f, current = queue.get()
        queue_hash.remove(current)

        if current == goal:
            path = reconstructPath(node_path, start, goal)
            return path, g_score[goal]

        for neighbor, cost in graph[current]['neighbors'].items():
            tentative_g_score = g_score[current] + cost

            if tentative_g_score < g_score[neighbor]:
                node_path[neighbor] = current
                g_score[neighbor] = tentative_g_score
                f_score[neighbor] = g_score[neighbor] + graph[neighbor]['distance']

                if neighbor not in queue_hash:
                    queue.put((f_score[neighbor], neighbor))
                    queue_hash.add(neighbor)

    return None, float('inf')


def main():
    graph = Romania.getGraphRomania()
    start = 'Arad'
    goal = 'Bucharest'

    path, cost = astar(graph, start, goal)
    if path:
        print("Path found:", " -> ".join(path))
        print("Total cost:", cost)
    else:
        print("No path found")


main()
