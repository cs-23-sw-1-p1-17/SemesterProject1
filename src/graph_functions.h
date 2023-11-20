#pragma once

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "graph_functions.h"
#define TEST_NETWORK_NODE_AMOUNT 10

typedef struct _node {
    int quality_of_stop;
    int charger_present;
} node_t;

typedef struct _edge {
    bool is_present;
    int traffic;
    int distance;
    node_t* connection1;
    node_t* connection2;
} edge_t;

int test_network_node_amount();

int get_cell(int matrix_size, int x, int y);

node_t* create_test_network_nodes();

edge_t* create_test_network_edge_matrix();
