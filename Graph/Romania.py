def getGraphRomania():
    graph = {
        'Arad': {'neighbors': {'Zerind': 75, 'Sibiu': 140, 'Timisoara': 118}, 'distance': 366},
        'Zerind': {'neighbors': {'Arad': 75, 'Oradea': 71}, 'distance': 374},
        'Oradea': {'neighbors': {'Zerind': 71, 'Sibiu': 151}, 'distance': 380},
        'Timisoara': {'neighbors': {'Arad': 118, 'Lugoj': 111}, 'distance': 329},
        'Lugoj': {'neighbors': {'Timisoara': 111, 'Mehadia': 70}, 'distance': 244},
        'Mehadia': {'neighbors': {'Lugoj': 70, 'Dobreta': 75}, 'distance': 241},
        'Dobreta': {'neighbors': {'Mehadia': 75, 'Craiova': 120}, 'distance': 242},
        'Craiova': {'neighbors': {'Dobreta': 120, 'Rimnicu Vilcea': 146, 'Pitesti': 138}, 'distance': 160},
        'Rimnicu Vilcea': {'neighbors': {'Sibiu': 80, 'Craiova': 146, 'Pitesti': 97}, 'distance': 193},
        'Sibiu': {'neighbors': {'Arad': 140, 'Oradea': 151, 'Rimnicu Vilcea': 80, 'Fagaras': 99}, 'distance': 253},
        'Fagaras': {'neighbors': {'Sibiu': 99, 'Bucharest': 211}, 'distance': 178},
        'Pitesti': {'neighbors': {'Rimnicu Vilcea': 97, 'Craiova': 138, 'Bucharest': 101}, 'distance': 98},
        'Bucharest': {'neighbors': {'Fagaras': 211, 'Pitesti': 101, 'Giurgiu': 90, 'Urziceni': 85}, 'distance': 0},
        'Giurgiu': {'neighbors': {'Bucharest': 90}, 'distance': 77},
        'Urziceni': {'neighbors': {'Bucharest': 85, 'Hirsova': 98, 'Vaslui': 142}, 'distance': 80},
        'Hirsova': {'neighbors': {'Urziceni': 98, 'Eforie': 86}, 'distance': 151},
        'Eforie': {'neighbors': {'Hirsova': 86}, 'distance': 161},
        'Vaslui': {'neighbors': {'Urziceni': 142, 'Iasi': 92}, 'distance': 199},
        'Iasi': {'neighbors': {'Vaslui': 92, 'Neamt': 87}, 'distance': 226},
        'Neamt': {'neighbors': {'Iasi': 87}, 'distance': 234}
    }
    return graph
