# Romania Map

![](https://user-images.githubusercontent.com/43790152/97784960-1a142580-1bc4-11eb-9070-39c03eb16df2.png)

# Pathfinding: Arad to Bucharest

A project demonstrating various search algorithms to find the optimal path between the cities of **Arad** and **Bucharest** in Romania.

## Overview

This repository contains implementations of classic search algorithms applied to a well-known problem in Artificial Intelligence: finding a path from Arad to Bucharest. The map data is based on the road map of Romania, with known straight-line distances to Bucharest used as heuristics.

The primary goal is to compare the performance and effectiveness of different search strategies, including:
- Uninformed Search (Blind Search)
- Informed Search (Heuristic Search)

## Map & Problem Definition

The problem is defined by the following graph, representing a simplified road map of Romania.

### Graph Representation

The map is represented as an undirected graph where:
- **Nodes**: Represent cities (e.g., Arad, Zerind, Sibiu, Bucharest).
- **Edges**: Represent roads connecting two cities. Each edge has a **cost** (distance in km).



